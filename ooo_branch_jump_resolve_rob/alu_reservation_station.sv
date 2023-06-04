module alu_RES_STAT (
    input logic clk,
    input logic rst_n,
	decoder_output_ifc.in decoder_output,
    register_rename_ifc.in phy_reg_output,
    reg_file_output_ifc.in reg_file_data,
    common_data_bus_ifc.in cdb_output,
    rob_status_ifc.in rob_status,
    hazard_control_ifc.in e_hc,
    branch_pred_hc_ifc.in branch_pred_hc,

    alu_res_stat_output_ifc.out alu_res_stat_output,
    alu_res_stat_status_ifc.out alu_res_stat_status
);

    struct entry {
        logic valid;
        mips_core_pkg::AluCtl alu_ctl;
        logic [`ROB_DEPTH_BITS - 1 : 0] tag;
        logic [31:0] v_1;
        logic [31:0] v_2;
        logic [ROB_DEPTH_BITS : 0] q_1;
        logic [ROB_DEPTH_BITS : 0] q_2;
    };

    entry reserv_stat_table [RES_STAT_DEPTH];
    logic full, ready;
    logic [RES_STAT_DEPTH_BITS - 1 : 0] write_index, ready_index;
    logic [RES_STAT_DEPTH_BITS - 1 : 0] i,j,k;

    function automatic logic [RES_STAT_DEPTH_BITS : 0] check_full();
        for (i = 0; i < RES_STAT_DEPTH; i++) begin
            if (reserv_stat_table[i].valid == 0) begin
                return {1'b0, i};
            end
        end
        return '1;
    endfunction

    function automatic logic [RES_STAT_DEPTH_BITS : 0] get_ready_index();
        for (j = 0; j < RES_STAT_DEPTH; j++) begin
            if (reserv_stat_table[j].valid) begin
                if(!reserv_stat_table[j].q_1 & !reserv_stat_table[j].q_2)
                    return {1'b1, j};
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
        alu_res_stat_output.op1      = reserv_stat_table[ready_index].op1;  
        alu_res_stat_output.op2      = reserv_stat_table[ready_index].op2;  
    end

    always_ff@(posedge clk) begin
        if(!rst_n) begin
            reserv_stat_table <= '{default:0};
        end else 
        begin
            if(branch_pred_hc.flush) begin
                reserv_stat_table <= '{default:0};
            end else begin
                if(!d_hc.stall & decoder_output.valid & !dec_decoder_output.is_mem_access) begin
                    reserv_stat_table[write_index].valid <= 1;
                    reserv_stat_table[write_index].alu_ctl <= decoder_output.alu_ctl;
                    reserv_stat_table[write_index].tag <= rob_status.tag;
                    if(decoder_output.uses_rs) begin
                        if(phy_reg_output.rs_ready) begin
                            reserv_stat_table[write_index].v_1 <= reg_file_data.rs_data;
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
                    for (int a = 0; a < `RES_STAT_DEPTH; a++) begin
                        if(reserv_stat_table[a].valid) begin
                            if (reserv_stat_table[a].q_1 == {1'b1, cdb_output.tag}) begin
                                reserv_stat_table[a].q_1 <= 0;
                                reserv_stat_table[a].v_1 <= cdb_output.value;
                            end

                            if (reserv_stat_table[a].q_2 == {1'b1, cdb_output.tag}) begin
                                reserv_stat_table[a].q_2 <= 0;
                                reserv_stat_table[a].v_2 <= cdb_output.value;
                            end 
                        end
                    end
                end

                if(!e_hc.stall) begin
                    if(ready) begin
                        reserv_stat_table[ready_index].valid <= 0;
                    end
                end
            end
        end
    end

endmodule