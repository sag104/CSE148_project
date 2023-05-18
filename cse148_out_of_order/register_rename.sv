interface register_rename_ifc ();
	logic [5:0] rs_phy;
    logic rs_ready;
    logic [5:0] rt_phy;
    logic rt_ready;
    logic [5:0] rw_phy;
);
	modport in  (input rs_phy, rs_ready, rt_phy, rt_ready, rw_phy);
	modport out (output rs_phy, rs_ready, rt_phy, rt_ready, rw_phy);
endinterface

module register_rename (
        input logic clk, rst_n,
		decoder_output_ifc.in decoder_output,
        rob_to_rename_ifc.in rob_rename,
        register_rename_ifc.out reg_phy_ready
);

logic [5:0] log_res [4:0]; //maps the 32 logical registers to 64 physical registers
logic free_reg [5:0];
logic reg_ready [5:0];
logic [5:0] first_free_phy_reg;

assign reg_phy_ready.rs_phy = log_res[decoder_output.rs_addr];
assign reg_phy_ready.rs_ready = reg_ready[log_res[decoder_output.rs_addr]];

assign reg_phy_ready.rt_phy = log_res[decoder_output.rt_addr];
assign reg_phy_ready.rt_ready = reg_ready[log_res[decoder_output.rt_addr]];

assign reg_phy_ready.rw_phy = first_free_phy_reg;

always_comb begin
    for (logic[5:0] g = 0; g < 64; g++) begin
        if(free_reg[g]) begin
            first_free_phy_reg = g;
            break;
        end
    end
end

always @(posedge clk) begin
    if(!rst_n) begin
        reg_ready <= 1;///set all values to 1
    end else begin
        if(dec_decoder_output.valid & dec_decoder_output.uses_rw) begin
            reg_ready[first_free_phy_reg] <= 0;
        end

        if(rob_rename.rob_commit_valid) begin
            reg_ready[rob_rename.rob_commit_reg] <= 1;
        end
    end
end
    
always @(posedge clk) begin
    if(!rst_n) begin
        for (logic[4:0] i = 0; i < 32; i++) begin
            log_res[i] <= i;
        end
    end else begin
        if(dec_decoder_output.valid & dec_decoder_output.uses_rw) begin
           log_res[decoder_output.rw_addr] <= first_free_phy_reg; 
        end
    end
end

always @(posedge clk) begin
    if(!rst_n) begin
        for(int j = 0; j < 32; j++) begin
            free_reg[j] <= 0;
        end
        for(int k = 32; k < 64; k++) begin
            free_reg[k] <= 1;
        end
    end else begin
        if(dec_decoder_output.valid & dec_decoder_output.uses_rw) begin
            free_reg[first_free_phy_reg] <= 0;
        end
    end
end

//fix logic to set free_reg back to 1
/*
always @(posedge clk) begin
    if(rob_commit_valid) begin
        free_reg
    end
end
*/
endmodule