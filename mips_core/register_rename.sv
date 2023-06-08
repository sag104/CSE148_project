module register_rename (
        input clk, 
        input rst_n,
		decoder_output_ifc.in decoder_output,
        rob_reg_wr_ifc.in rob_reg_wr,
        rob_status_ifc.in rob_status,
        branch_pred_hc_ifc.in branch_pred_hc,

        register_rename_ifc.out phy_reg_output
);
    
    checkpoint checkpoint_buffer[CHECKPOINT_BUFFER_DEPTH];
    logic [CHECKPOINT_BUFFER_DEPTH_BITS - 1 : 0] ch_wr_ptr, ch_rd_ptr;
    
    logic [5:0] log_res [32];  //maps the 32 logical registers to 64 physical registers
    logic [63:0] free_reg ;       // list of physical registers that are free to be remapped
    logic [ROB_DEPTH_BITS - 1 : 0] reg_phy_rob_tag [64];   
    logic [63:0] reg_ready;      //list of registers that have final value committed
    logic [5:0] free_phy_reg;
    logic avail_reg;

    function automatic logic [6:0] first_free_phy_reg();
        for (logic[31:0] g = 0; g < 64; g++) begin
            if(free_reg[g[5:0]]) begin
                return {1'b1, g[5:0]};
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

        phy_reg_output.rw_phy = free_phy_reg;

        {avail_reg, free_phy_reg} = first_free_phy_reg();
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            reg_ready <= '1;

            for (int i = 0; i < 32; i++) begin
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
            checkpoint_buffer <= '{default:0};
        end else begin
            if(branch_pred_hc.flush) begin
		for(int i = 0; i < 32; i++) begin
			log_res[i] <= checkpoint_buffer[ch_rd_ptr].log_res[i];
		end
		for(int j = 0; j < 64; j++) begin
			reg_phy_rob_tag[j] <= checkpoint_buffer[ch_rd_ptr].reg_phy_rob_tag[j];
		end
                free_reg <= checkpoint_buffer[ch_rd_ptr].free_reg;
                reg_ready <= checkpoint_buffer[ch_rd_ptr].reg_ready;
                ch_wr_ptr <= 0;
                ch_rd_ptr <= 0;
                checkpoint_buffer <= '{default:0};
            end else begin
                if(!d_hc.stall) begin
                    if(avail_reg) begin
                        if(decoder_output.valid & decoder_output.uses_rw) begin
                            log_res[decoder_output.rw_addr] <= free_phy_reg; 
                            reg_ready[free_phy_reg] <= 0;
                            free_reg[free_phy_reg] <= 0;
                            reg_phy_rob_tag[free_phy_reg] <= rob_status.tag;
                        end

                        if(decoder_output.is_branch) begin
				for(int i = 0; i < 32; i++) begin
					checkpoint_buffer[ch_rd_ptr].log_res[i] <= log_res[i];
				end
				for(int j = 0; j < 64; j++) begin
					checkpoint_buffer[ch_rd_ptr].reg_phy_rob_tag[j] <= reg_phy_rob_tag[j];
				end
                            	checkpoint_buffer[ch_wr_ptr].free_reg <= free_reg;                
                            	checkpoint_buffer[ch_wr_ptr].reg_ready <= reg_ready;                
                            	ch_wr_ptr <= ch_wr_ptr + 1;
                        end
                    end
                end

                if(rob_reg_wr.reg_wr_en) begin
                    reg_ready[rob_reg_wr.reg_wr_addr] <= 1;
                end

                if(branch_pred_hc.correct_pred) begin
                    ch_rd_ptr <= ch_rd_ptr + 1;
                end
            end
        end
    end

endmodule
