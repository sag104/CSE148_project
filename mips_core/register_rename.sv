module register_rename (
        input clk, 
        input rst_n,
		decoder_output_ifc.in decoder_output,
        rob_reg_wr_ifc.in rob_reg_wr,
        rob_status_ifc.in rob_status,
        branch_pred_hc_ifc.in branch_pred_hc,
        hazard_control_ifc.in d_hc,
        checkpoint_hc_ifc.in ch_hc,

        register_rename_ifc.out phy_reg_output,
        cp_status_ifc.out cp_status
);
    
    logic [5:0] log_res [32];  //maps the 32 logical registers to 64 physical registers
    logic [5:0] log_res_ch [32];  //maps the 32 logical registers to 64 physical registers
    logic [63:0] free_reg, free_reg_ch;       // list of physical registers that are free to be remapped
    logic [ROB_DEPTH_BITS - 1 : 0] reg_phy_rob_tag [64];
    logic [ROB_DEPTH_BITS - 1 : 0] reg_phy_rob_tag_ch [64];
    logic [5:0] active_list [4];
    logic [5:0] active_list_ch [4];    
    logic [63:0] reg_ready, reg_ready_ch;      //list of registers that have final value committed
    logic [5:0] free_phy_reg, active_reg, active_reg_ch;
    logic avail_reg;
    logic [1:0] active_wr_ptr, active_rd_ptr, active_rd_ptr_ch;
    logic cp;

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
        active_reg = active_list[active_rd_ptr];
        active_reg_ch = active_list_ch[active_rd_ptr_ch];

        cp_status.cp = cp;
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

            active_wr_ptr <= 0;
            active_rd_ptr <= 0;
            active_list <= '{default:0};

            cp <= 0;
        end else begin
            if(branch_pred_hc.flush) begin
                for(int i = 0; i < 32; i++) begin
                    log_res[i] <= log_res_ch[i];
                end
                /*for(int i = 0; i < 4; i++) begin
                    active_list[i] <= active_list_ch[i];
                end*/
                active_list <= '{default:0};
                active_rd_ptr <= 0;
                active_wr_ptr <= 0;
                for(int j = 0; j < 64; j++) begin
                    reg_phy_rob_tag[j] <= reg_phy_rob_tag_ch[j];
                end
                free_reg <= free_reg_ch;
                //reg_ready <= reg_ready_ch;
                reg_ready <= '1;
                cp <= 0;
            end else begin
                if(!d_hc.stall) begin
                    if(avail_reg) begin
                        if(decoder_output.valid & decoder_output.uses_rw) begin
                            log_res[decoder_output.rw_addr] <= free_phy_reg; 
                            reg_ready[free_phy_reg] <= 0;
                            free_reg[free_phy_reg] <= 0;
                            reg_phy_rob_tag[free_phy_reg] <= rob_status.tag;
                            active_list[active_wr_ptr] <= log_res[decoder_output.rw_addr];
                            active_wr_ptr <= active_wr_ptr + 1;
                        end
                    end
                end

                if(ch_hc.capture) begin
                    cp <= 1;
                    for(int i = 0; i < 64; i++) begin
                        log_res_ch[i] <= log_res[i];
                    end
                    for(int j = 0; j < 64; j++) begin
                        reg_phy_rob_tag_ch[j] <= reg_phy_rob_tag[j];
                    end

                    if(rob_reg_wr.reg_wr_en & (rob_reg_wr.reg_wr_addr != 0)) begin
                        for(int i = 0; i < 4; i++) begin
                            if(active_rd_ptr != i) begin
                               active_list_ch[i] <= active_list[i];
                            end
                        end
                        for(int j = 0; j < 64; j++) begin
                            if(active_reg == j) begin
                                free_reg_ch[j] <= 1;
                            end else begin
                                free_reg_ch[j] <= free_reg[j];
                            end
                        end
                        for(int i = 0; i < 64; i++) begin
                            if(rob_reg_wr.reg_wr_addr == i) begin
                                reg_ready_ch[i] <= 1;
                            end else begin
                                reg_ready_ch[i] <= reg_ready;
                            end
                        end
                        active_list_ch[active_rd_ptr] <= 0;
                        active_rd_ptr_ch <= active_rd_ptr + 1;

                        reg_ready[rob_reg_wr.reg_wr_addr] <= 1;
                        for(int j = 0; j < 64; j++) begin
                            if(active_reg == j) begin
                                free_reg[j] <= 1;
                            end
                        end
                        active_rd_ptr <= active_rd_ptr + 1;
                        active_list[active_rd_ptr] <= 0;
                    end else begin
                        for(int i = 0; i < 4; i++) begin
                            active_list_ch[i] <= active_list[i];
                        end
                        free_reg_ch <= free_reg;
                        reg_ready_ch <= reg_ready;
                        active_rd_ptr_ch <= active_rd_ptr;
                    end
                end else begin
                    if(rob_reg_wr.reg_wr_en & (rob_reg_wr.reg_wr_addr != 0)) begin
                        reg_ready[rob_reg_wr.reg_wr_addr] <= 1;
                        for(int j = 0; j < 64; j++) begin
                            if(active_reg == j) begin
                                free_reg[j] <= 1;
                            end
                        end
                        active_rd_ptr <= active_rd_ptr + 1;
                        active_list[active_rd_ptr] <= 0;

                        if(cp) begin
                            reg_ready_ch[rob_reg_wr.reg_wr_addr] <= 1;
                            for(int j = 0; j < 64; j++) begin
                                if(active_reg_ch == j) begin
                                    free_reg_ch[j] <= 1;
                                end
                            end
                            active_rd_ptr_ch <= active_rd_ptr_ch + 1;
                            active_list_ch[active_rd_ptr] <= 0;
                        end
                    end
                end
                /*if(ch_hc.capture) begin
                    for(int i = 0; i < 32; i++) begin
                        log_res_ch[i] <= log_res[i];
                    end
                    for(int i = 0; i < 4; i++) begin
                        active_list_ch[i] <= active_list[i];
                    end
                    for(int j = 0; j < 64; j++) begin
                        reg_phy_rob_tag_ch[j] <= reg_phy_rob_tag[j];
                    end
                    free_reg_ch <= free_reg;
                    reg_ready_ch <= reg_ready;
                    active_rd_ptr_ch <= active_rd_ptr;
                    cp <= 1;
                end

                if(rob_reg_wr.reg_wr_en & (rob_reg_wr.reg_wr_addr != 0)) begin
                    reg_ready[rob_reg_wr.reg_wr_addr] <= 1;
                    for(int j = 0; j < 64; j++) begin
                        if(active_reg == j) begin
                            free_reg[j] <= 1;
                        end
                    end
                    active_rd_ptr <= active_rd_ptr + 1;

                    if(cp) begin
                        reg_ready_ch[rob_reg_wr.reg_wr_addr] <= 1;
                        for(int j = 0; j < 64; j++) begin
                            if(active_reg_ch == j) begin
                                free_reg_ch[j] <= 1;
                            end
                        end
                        active_rd_ptr_ch <= active_rd_ptr_ch + 1;
                    end
                end*/

                if(branch_pred_hc.correct_pred) begin
                    cp <= 0;
                    active_list_ch <= '{default:0};
                end
            end
        end
    end
endmodule
