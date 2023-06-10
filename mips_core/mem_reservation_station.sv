import mips_core_pkg::*;

module mem_reservation_station (
    input clk,
    input rst_n,
	decoder_output_ifc.in decoder_output,
    register_rename_ifc.in phy_reg_output,
    reg_file_output_ifc.in reg_file_data,
    rob_status_ifc.in rob_status,
    common_data_bus_ifc.in cdb_output,
    hazard_control_ifc.in m_hc,
    branch_pred_hc_ifc.in branch_pred_hc,
    rob_mem_wr_ifc.in rob_mem_wr,

    mem_addr_unit_st_output_ifc.out st_data_output,
    mem_res_stat_status_ifc.out mem_res_stat_status,
    d_cache_input_ifc.out d_cache_input
);

    mem_res_stat_entry mem_add_table [MEM_RES_STAT_DEPTH];

    store_address store_queue [ROB_DEPTH];
    logic [ROB_DEPTH_BITS - 1 : 0] sq_wr_ptr, sq_rd_ptr;

    logic [MEM_RES_STAT_DEPTH_BITS : 0] wr_ptr;
    logic [MEM_RES_STAT_DEPTH_BITS : 0] rd_ptr;
    logic [MEM_RES_STAT_DEPTH_BITS - 1 : 0] empty_spot;

    logic full, empty, ready, st_ready, ld_ready;

    logic mem_input_valid_reg;
    mips_core_pkg::MemAccessType mem_action_reg;
	logic [ADDR_WIDTH - 1 : 0] addr_reg;
	logic [ADDR_WIDTH - 1 : 0] addr_next_reg;
	logic [DATA_WIDTH - 1 : 0] data_reg;
    logic [ROB_DEPTH_BITS - 1 : 0] tag_reg;
    logic [31:0] address;

    function automatic logic address_match(logic [ADDR_WIDTH - 1 : 0] compare_addr);
        integer i;
        for(i = 0; i < ROB_DEPTH; i++) begin
            if(store_queue[i].valid) begin
                if(compare_addr == store_queue[i].addr[ADDR_WIDTH - 1 : 0]) begin
                    return 1;
                end
            end 
        end
        return 0;
    endfunction

    always_comb begin
        empty           = wr_ptr == rd_ptr;
        empty_spot      = wr_ptr[MEM_RES_STAT_DEPTH_BITS - 1 : 0];
        full            = (wr_ptr[MEM_RES_STAT_DEPTH_BITS-1:0] == rd_ptr[MEM_RES_STAT_DEPTH_BITS-1:0]) 
                        && (wr_ptr[MEM_RES_STAT_DEPTH_BITS] != rd_ptr[MEM_RES_STAT_DEPTH_BITS]);

        ready       = mem_add_table[rd_ptr].valid & (!mem_add_table[rd_ptr].q_reg_addr) & (!mem_add_table[rd_ptr].q_reg_val);
        st_ready    = ready & (mem_add_table[rd_ptr].mem_action == WRITE);

        st_data_output.valid_st     = st_ready;
        st_data_output.tag          = mem_add_table[rd_ptr].tag;
        st_data_output.mem_addr     = mem_add_table[rd_ptr].addr;
        st_data_output.reg_value    = mem_add_table[rd_ptr].v_reg_val;

        ld_ready    = ready & (mem_add_table[rd_ptr].mem_action == READ) & !(address_match(mem_add_table[rd_ptr].addr));

        address = decoder_output.immediate + reg_file_data.rs_data;

        mem_res_stat_status.full        = full;
        mem_res_stat_status.ld_ready    = ld_ready;

        d_cache_input.valid         = mem_input_valid_reg;
        d_cache_input.mem_action    = mem_action_reg;
        d_cache_input.addr          = addr_reg;
        d_cache_input.addr_next     = addr_next_reg;
        d_cache_input.data          = data_reg;
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            mem_input_valid_reg <= 0;
            mem_action_reg <= 0;
            addr_reg <= 0;
            addr_next_reg <= 0;
            data_reg <= 0;
            tag_reg <= 0;
        end else begin
            if(m_hc.stall) begin
                mem_input_valid_reg <= mem_input_valid_reg;
                mem_action_reg <= mem_action_reg;
                addr_reg <= addr_reg;
                addr_next_reg <= addr_next_reg;
                data_reg <= data_reg;
                tag_reg <= tag_reg;
            end else if (ld_ready) begin
                mem_input_valid_reg <= 1;
                mem_action_reg <= READ;
                addr_reg <= mem_add_table[rd_ptr].addr;
                addr_next_reg <= mem_add_table[rd_ptr].addr;
                data_reg <= 0;
                tag_reg <= mem_add_table[rd_ptr].tag;
            end else if (rob_mem_wr.mem_wr_en) begin
                mem_input_valid_reg <= 1;
                mem_action_reg <= WRITE;
                addr_reg <= rob_mem_wr.mem_wr_addr;
                addr_next_reg <= rob_mem_wr.mem_wr_addr;
                data_reg <= rob_mem_wr.mem_wr_data;
                tag_reg <= 0;
            end else begin
                mem_input_valid_reg <= 0;
                mem_action_reg <= 0;
                addr_reg <= 0;
                addr_next_reg <= 0;
                data_reg <= 0;
                tag_reg <= 0;
            end
        end
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            mem_add_table <= '{default:0};
            wr_ptr <= 0;
            rd_ptr <= 0;
            
            store_queue <= '{default:0};
            sq_wr_ptr <= 0;
            sq_rd_ptr <= 0;
        end else begin
            if(branch_pred_hc.flush) begin
                mem_add_table <= '{default:0};
                wr_ptr <= 0;
                rd_ptr <= 0;
            end else begin
                if(!d_hc.stall & decoder_output.valid & decoder_output.is_mem_access) begin
                    mem_add_table[wr_ptr].tag <= rob_status.tag;
                    mem_add_table[wr_ptr].mem_action <= decoder_output.mem_action;
                    mem_add_table[wr_ptr].offset <= decoder_output.immediate;
		            mem_add_table[wr_ptr].valid <= 1;
                    if(phy_reg_output.rs_ready) begin
                        mem_add_table[wr_ptr].addr <= address;
                        mem_add_table[wr_ptr].q_reg_val <= 0;
                    end else begin
                        mem_add_table[wr_ptr].addr <= 0;
                        mem_add_table[wr_ptr].q_reg_val <= {1'b1, phy_reg_output.rs_tag};
                    end

                    if(phy_reg_output.rt_ready | !decoder_output.uses_rt) begin
                        mem_add_table[wr_ptr].v_reg_val <= reg_file_data.rt_data;
                        mem_add_table[wr_ptr].q_reg_val <= 0;
                    end else begin
                        mem_add_table[wr_ptr].v_reg_val <= 0;
                        mem_add_table[wr_ptr].q_reg_val <= {1'b1, phy_reg_output.rt_tag};
                    end
                    /*if(decoder_output.mem_action == WRITE) begin

                        if(phy_reg_output.rs_ready) begin
                            mem_add_table[wr_ptr].v_reg_val <= reg_file_data.rs_data;
                            mem_add_table[wr_ptr].q_reg_val <= 0;
                        end else begin
                            mem_add_table[wr_ptr].v_reg_val <= 0;
                            mem_add_table[wr_ptr].q_reg_val <= {1'b1, phy_reg_output.rs_tag};
                        end

                        if(phy_reg_output.rt_ready) begin
                            mem_add_table[wr_ptr].addr <= decoder_output.immediate + reg_file_data.rt_data;
                            mem_add_table[wr_ptr].q_reg_addr <= 0;
                        end else begin
                            mem_add_table[wr_ptr].addr <= 0;
                            mem_add_table[wr_ptr].q_reg_addr <= {1'b1, phy_reg_output.rt_tag};
                        end
                    end else begin
                        mem_add_table[wr_ptr].q_reg_val <= 0;
                        if(phy_reg_output.rs_ready) begin
                            mem_add_table[wr_ptr].addr <= decoder_output.immediate + reg_file_data.rs_data;
                            mem_add_table[wr_ptr].q_reg_addr <= 0;
                        end else begin
                            mem_add_table[wr_ptr].addr <= 0;
                            mem_add_table[wr_ptr].q_reg_addr <= {1'b1, phy_reg_output.rs_tag};
                        end
                    end*/
                    wr_ptr <= wr_ptr + 1;
                end

                if(cdb_output.valid) begin
                    for (int a = 0; a < MEM_RES_STAT_DEPTH; a++) begin
                        if (mem_add_table[a].q_reg_addr == {1'b1, cdb_output.tag}) begin
                            mem_add_table[a].q_reg_addr <= 0;
                            mem_add_table[a].addr <= mem_add_table[a].offset + cdb_output.data;
                        end
                        if (mem_add_table[a].q_reg_val == {1'b1, cdb_output.tag}) begin
                            mem_add_table[a].q_reg_val <= 0;
                            mem_add_table[a].v_reg_val <= cdb_output.data;
                        end
                    end
                end

                if(st_ready) begin
                    store_queue[sq_wr_ptr].valid <= 1;
                    store_queue[sq_wr_ptr].addr <= mem_add_table[rd_ptr].addr;
                    rd_ptr <= rd_ptr + 1;
                    mem_add_table[rd_ptr] <= '{default: 0};
                end else if(ld_ready & !m_hc.stall) begin
                    rd_ptr <= rd_ptr + 1;
                    mem_add_table[rd_ptr] <= '{default: 0};
                end

                if(rob_mem_wr.mem_wr_en) begin
                    store_queue[sq_rd_ptr].valid <= 0;
                    store_queue[sq_rd_ptr].addr <= 0;
                    sq_rd_ptr <= sq_rd_ptr + 1;
                end
            end
        end
    end

endmodule
