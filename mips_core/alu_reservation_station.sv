import mips_core_pkg::*;

module alu_reservation_station (
    input logic clk,
    input logic rst_n,
	decoder_output_ifc.in decoder_output,
    register_rename_ifc.in phy_reg_output,
    reg_file_output_ifc.in reg_file_data,
    common_data_bus_ifc.in cdb_output,
    rob_status_ifc.in rob_status,
    hazard_control_ifc.in e_hc,
    branch_pred_hc_ifc.in branch_pred_hc,
    rob_reg_ready_data_ifc.in rob_reg_ready_data,
    rob_reg_wr_ifc.in rob_reg_wr,

    alu_res_stat_output_ifc.out alu_res_stat_output,
    alu_res_stat_status_ifc.out alu_res_stat_status
);

    alu_res_stat_entry reserv_stat_table [ALU_RES_STAT_DEPTH];
    logic full, ready;
    logic [ALU_RES_STAT_DEPTH_BITS - 1 : 0] write_index, ready_index;

    function automatic logic [ALU_RES_STAT_DEPTH_BITS : 0] check_full();
        for (logic [31:0] i = 0; i < ALU_RES_STAT_DEPTH; i++) begin
            if (reserv_stat_table[i].valid == 0) begin
                return {1'b0, i[ALU_RES_STAT_DEPTH_BITS - 1 : 0]};
            end
        end
        return '1;
    endfunction

    function automatic logic [ALU_RES_STAT_DEPTH_BITS : 0] get_ready_index();
        for (logic [31:0] j = 0; j < ALU_RES_STAT_DEPTH; j++) begin
            if (reserv_stat_table[j].valid) begin
                if(!reserv_stat_table[j].q_1 & !reserv_stat_table[j].q_2)
                    return {1'b1, j[ALU_RES_STAT_DEPTH_BITS - 1 : 0]};
            end
        end
        return '0;
    endfunction

    always_comb begin
        {full, write_index}     = check_full();
        {ready, ready_index}    = get_ready_index();

        alu_res_stat_status.full    = full;

        alu_res_stat_output.valid    = ready;
        alu_res_stat_output.alu_ctl  = reserv_stat_table[ready_index].alu_ctl;  
        alu_res_stat_output.tag      = reserv_stat_table[ready_index].tag;  
        alu_res_stat_output.op1      = reserv_stat_table[ready_index].v_1;  
        alu_res_stat_output.op2      = reserv_stat_table[ready_index].v_2;  
    end

    always_ff@(posedge clk) begin
        if(!rst_n) begin
            reserv_stat_table <= '{default:0};
        end else 
        begin
            if(branch_pred_hc.flush) begin
                reserv_stat_table <= '{default:0};
            end else begin
                if(!d_hc.stall & decoder_output.valid & !decoder_output.is_mem_access) begin
                    reserv_stat_table[write_index].valid    <= 1;
                    reserv_stat_table[write_index].alu_ctl  <= decoder_output.alu_ctl;
                    reserv_stat_table[write_index].tag      <= rob_status.tag;
                    reserv_stat_table[write_index].pc       <= decoder_output.pc;
                    if(decoder_output.uses_rs) begin
                        if(phy_reg_output.rs_ready) begin
                            reserv_stat_table[write_index].v_1 <= reg_file_data.rs_data;
                            reserv_stat_table[write_index].q_1 <= '0;
                        end else if(rob_reg_ready_data.rob_rs_ready) begin
                            reserv_stat_table[write_index].v_1 <= rob_reg_ready_data.rs_data;
                            reserv_stat_table[write_index].q_1 <= '0; 
                        end else begin
                            reserv_stat_table[write_index].v_1 <= '0;
                            reserv_stat_table[write_index].q_1 <= {1'b1, phy_reg_output.rs_tag};
                        end
                    end
                    if(decoder_output.uses_rt) begin
                        if(phy_reg_output.rt_ready) begin
                            reserv_stat_table[write_index].v_2 <= reg_file_data.rt_data;
                            reserv_stat_table[write_index].q_2 <= '0;
                        end else if(rob_reg_ready_data.rob_rt_ready) begin
                            reserv_stat_table[write_index].v_2 <= rob_reg_ready_data.rt_data;
                            reserv_stat_table[write_index].q_2 <= '0; 
                        end else begin
                            reserv_stat_table[write_index].v_2 <= '0;
                            reserv_stat_table[write_index].q_2 <= {1'b1, phy_reg_output.rt_tag};
                        end
                    end else if (decoder_output.uses_immediate) begin
                        reserv_stat_table[write_index].v_2 <= decoder_output.immediate;
                        reserv_stat_table[write_index].q_2 <= '0;
                    end                       
                end

                if(cdb_output.valid) begin
                    for (int a = 0; a < ALU_RES_STAT_DEPTH; a++) begin
                        if(reserv_stat_table[a].valid) begin
                            if (reserv_stat_table[a].q_1 == {1'b1, cdb_output.tag}) begin
                                reserv_stat_table[a].q_1 <= 0;
                                reserv_stat_table[a].v_1 <= cdb_output.data;
                            end

                            if (reserv_stat_table[a].q_2 == {1'b1, cdb_output.tag}) begin
                                reserv_stat_table[a].q_2 <= 0;
                                reserv_stat_table[a].v_2 <= cdb_output.data;
                            end 
                        end
                    end
                end

                if(rob_reg_wr.reg_wr_en) begin
                    for (int a = 0; a < ALU_RES_STAT_DEPTH; a++) begin
                        if(reserv_stat_table[a].valid) begin
                            if (reserv_stat_table[a].q_1 == {1'b1, rob_reg_wr.tag}) begin
                                reserv_stat_table[a].q_1 <= 0;
                                reserv_stat_table[a].v_1 <= rob_reg_wr.reg_wr_data;
                            end

                            if (reserv_stat_table[a].q_2 == {1'b1, rob_reg_wr.tag}) begin
                                reserv_stat_table[a].q_2 <= 0;
                                reserv_stat_table[a].v_2 <= rob_reg_wr.reg_wr_data;
                            end 
                        end
                    end
                end

                if(!e_hc.stall) begin
                    if(ready) begin
                        reserv_stat_table[ready_index] <= '{default:0};
                    end
                end
            end
        end
    end

endmodule