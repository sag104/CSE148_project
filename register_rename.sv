module register_rename (
        input clk, 
        input rst_n,
		decoder_output_ifc.in decoder_output,
        rob_reg_wr_ifc.in rob_reg_wr,
        rob_status_ifc.in rob_status,
        branch_pred_hc_ifc.in branch_pred_hc,

        register_rename_ifc.out phy_reg_output
);

    struct checkpoint {
        logic [5:0] log_res [4:0];
        logic free_reg [5:0];
        logic reg_ready [5:0];
        logic [`ROB_DEPTH_BITS - 1 : 0] reg_phy_rob_tag [5:0]; 
    };

    checkpoint checkpoint_buffer[`CHECKPOINT_BUFFER_DEPTH];
    logic [`CHECKPOINT_BUFFER_DEPTH_BITS - 1 : 0] ch_wr_ptr, ch_rd_ptr;
    logic [5:0] log_res [4:0];  //maps the 32 logical registers to 64 physical registers
    logic free_reg [5:0];       // list of physical registers that are free to be remapped
    logic [`ROB_DEPTH_BITS : 0] reg_phy_rob_tag [5:0];   
    logic reg_ready [5:0];      //list of registers that have final value committed
    logic [5:0] free_phy_reg;
    logic avail_reg;

    function automatic logic [6:0] first_free_phy_reg();
        for (logic[5:0] g = 0; g < 64; g++) begin
            if(free_reg[g]) begin
                return {1'b1, g};
            end
        end
        return '0;
    endfunction

    always_comb begin
        phy_reg_output.rs_phy = log_res[decoder_output.rs_addr];
        phy_reg_output.rs_ready = reg_ready[log_res[decoder_output.rs_addr]];
        phy_reg_output.rs_tag = reg_phy_rob_tag[log_res[decoder_output.rs_addr]];

        phy_reg_output.rt_phy = log_res[decoder_output.rt_addr];
        phy_reg_output.rt_ready = reg_ready[log_res[decoder_output.rt_addr]];
        phy_reg_output.rt_tag = reg_phy_rob_tag[log_res[decoder_output.rt_addr]];

        phy_reg_output.rw_phy = first_free_phy_reg;

        {avail_reg, free_phy_reg} = first_free_phy_reg();
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
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

            ch_wr_ptr <= 0;
            ch_rd_ptr <= 0;
            checkpoint_buffer <= '0;
        end else begin
            if(branch_pred_hc.flush) begin
                log_res <= checkpoint_buffer[ch_rd_ptr].log_res;
                free_reg <= checkpoint_buffer[ch_rd_ptr].free_reg;
                reg_ready <= checkpoint_buffer[ch_rd_ptr].reg_ready;
                ch_wr_ptr <= 0;
                ch_rd_ptr <= 0;
                checkpoint_buffer <= '0;
            end else begin
                if(!d_hc.stall) begin
                    if(avail_reg) begin
                        if(decoder_output.valid & decoder_output.uses_rw) begin
                            log_res[decoder_output.rw_addr] <= free_phy_reg; 
                            reg_ready[free_phy_reg] <= 0;
                            free_reg[free_phy_reg] <= 0;
                            active_reg[active_wr_ptr] <= log_res[decoder_output.rw_addr]
                            reg_phy_rob_tag[free_phy_reg] <= rob_status.tag;
                        end

                        if(decoder_output.is_branch) begin
                            checkpoint_buffer[ch_wr_ptr].log_res <= log_res;
                            checkpoint_buffer[ch_wr_ptr].free_reg <= free_reg;                
                            checkpoint_buffer[ch_wr_ptr].reg_ready <= reg_ready;                
                            checkpoint_buffer[ch_wr_ptr].reg_phy_rob_tag <= reg_phy_rob_tag;
                            ch_wr_ptr <= ch_wr_ptr + 1;
                        end
                    end
                end

                if(rob_reg_wr.reg_wr_en) begin
                    reg_ready[rob_rename.rob_commit_reg] <= 1;
                end

                if(branch_pred_hc.correct_pred) begin
                    ch_rd_ptr <= ch_rd_ptr + 1;
                end
            end
        end
    end

endmodule