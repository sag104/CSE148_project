interface register_rename_ifc (;
	logic [5:0] rs_phy;
    logic rs_ready;
    logic [`ROB_DEPTH / 2 - 1 : 0] rs_tag;
    logic [5:0] rt_phy;
    logic rt_ready;
    logic [`ROB_DEPTH / 2 - 1 : 0] rt_tag;
    logic [5:0] rw_phy;
);
	modport in  (input rs_phy, rs_ready, rt_phy, rt_ready, rw_phy);
	modport out (output rs_phy, rs_ready, rt_phy, rt_ready, rw_phy);
endinterface

module register_rename (
        input logic clk, rst_n,
		decoder_output_ifc.in decoder_output,
        rob_to_reg_wr_ifc.in rob_reg_wr,
        rob_write_status_ifc.in rob_wr_status,
        register_rename_ifc.out reg_phy_ready
);

logic [5:0] log_res [4:0]; //maps the 32 logical registers to 64 physical registers
logic free_reg [5:0]; // list of physical registers that are free to be remapped
logic [`ROB_DEPTH / 2 - 1 : 0] reg_phy_rob_tag;
logic [5:0] active_reg [4:0]; // fifo of active regs (32 elements of 64 bit values - 1 for each phy reg)
logic [4:0] active_wr_ptr;
logic [4:0] active_rd_ptr;
/////////////////////not quite sure about active list, free list, and how it connects
logic reg_ready [5:0];
logic [5:0] first_free_phy_reg;
logic avail_reg;

assign reg_phy_ready.rs_phy = log_res[decoder_output.rs_addr];
assign reg_phy_ready.rs_ready = reg_ready[log_res[decoder_output.rs_addr]];
assign reg_phy_ready.rs_tag = reg_phy_rob_tag[log_res[decoder_output.rs_addr]];

assign reg_phy_ready.rt_phy = log_res[decoder_output.rt_addr];
assign reg_phy_ready.rt_ready = reg_ready[log_res[decoder_output.rt_addr]];
assign reg_phy_ready.rt_tag = reg_phy_rob_tag[log_res[decoder_output.rt_addr]];

assign reg_phy_ready.rw_phy = first_free_phy_reg;

assign avail_reg = (free_reg != '0);

always_comb begin
    for (logic[5:0] g = 0; g < 64; g++) begin
        if(free_reg[g]) begin
            first_free_phy_reg = g;
            break;
        end
    end
end

always @(posedge clk) begin
    if(rst_n) begin
        reg_ready <= '1;

        for (logic[4:0] i = 0; i < 32; i++) begin
            log_res[i] <= i;
        end

        for(int j = 0; j < 32; j++) begin
            free_reg[j] <= 0;
        end
        for(int k = 32; k < 64; k++) begin
            free_reg[k] <= 1;
        end

        active_rd_ptr <= 0;
        active_wr_ptr <= 0;
        active_reg <= '0;
    end else begin

        //////have to add stall check, so it doesn't keep adding same instruction stuff to active list during stall

        if(avail_reg) begin
            if(dec_decoder_output.valid & dec_decoder_output.uses_rw) begin
                log_res[decoder_output.rw_addr] <= first_free_phy_reg; 
                reg_ready[first_free_phy_reg] <= 0;
                free_reg[first_free_phy_reg] <= 0;
                active_reg[active_wr_ptr] <= log_res[decoder_output.rw_addr]
                active_wr_ptr <= active_wr_ptr + 1;
                reg_phy_rob_tag[first_free_phy_reg] <= rob_wr_status.tag;
            end

            if(rob_reg_wr.reg_wr_en) begin
                reg_ready[rob_rename.rob_commit_reg] <= 1;
                free_reg[active_reg[active_rd_ptr]] <= 1;
                active_rd_ptr <= active_rd_ptr + 1;
                
            end
        end
    end
end

endmodule