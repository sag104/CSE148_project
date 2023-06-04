module mips_core(
    input clk,
    input rst_n
);

    //Interfaces sorted by where they output from

    //hazard control interfaces
    hazard_control_ifc i_hc();
    hazard_control_ifc d_hc();
    hazard_control_ifc rob_st_hc();
    hazard_control_ifc e_hc();
    hazard_control_ifc m_hc();
    branch_pred_hc_ifc branch_pred_hc();

    //fetch unit interfaces
    load_pc_ifc i_load_pc();
    pc_ifc pc_current();
    pc_ifc pc_next();
    i_cache_output_ifc i_cache_output();
    inst_q_output_ifc inst_q_output();

    //decoder interfaces
    decoder_output_ifc decoder_output();

    //rob interfaces
    rob_reg_wr_ifc rob_reg_wr();
    rob_mem_wr_ifc rob_mem_wr();
    rob_status_ifc rob_status();
    rob_branch_commit_ifc rob_branch_commit();
    rob_jump_reg_commit_ifc rob_jump_reg_commit();

    //register renaming interfaces
    register_rename_ifc phy_reg_output();

    //reg file interfaces
    reg_file_output_ifc reg_file_data();

    //alu res stat interfaces
    alu_res_stat_output_ifc alu_res_stat_output();

    //alu interfaces
    alu_output_ifc alu_output();

    //mem res stat interfaces
    mem_addr_unit_st_output_ifc st_data_output();
    mem_res_stat_status_ifc mem_res_stat_status();
    d_cache_input_ifc d_cache_input();

    //d_cache interfaces
    d_cache_output_ifc d_cache_output();

    //cdb interfaces
    common_data_bus_ifc cdb_output();

    fetch_unit FETCH_UNIT (
        .clk, .rst_n,

        .i_hc(i_hc),
        .i_load_pc(i_load_pc),

        .o_pc_current(pc_current),
        .o_pc_next(pc_next)
    );

    i_cache I_CACHE(
        .clk, .rst_n,

        .mem_read_address(mem_read_address[0]),
        .mem_read_data   (mem_read_data[0]),
        
        .i_pc_current (pc_current),
        .i_pc_next    (pc_next),
        
        .out          (i_cache_output)
    );

    instruction_queue INSTRUCTION_QUEUE(
        .clk, .rst_n,

        .if_i_cache_output(i_cache_output),
        .d_hc(d_hc),

        .inst_q_output(inst_q_output)
    );

    decoder DECODER(
        .i_inst(inst_q_output),

        .out(decoder_output)
    );

    register_rename REGISTER_RENAME (
        .clk, .rst_n,

        .decoder_output(decoder_output),
        .rob_reg_wr(rob_reg_wr),
        .rob_status(rob_status),
        .branch_pred_hc(branch_pred_hc),

        .phy_reg_output(phy_reg_output)
    );

    reorder_buffer REORDER_BUFFER (
        .clk, .rst_n,

        .decoder_output(decoder_output),
        .d_hc(d_hc),
        .rob_st_stall_hc(rob_st_stall_hc),
        .cdb_output(cdb_output),
        .st_data_output(st_data_output),

        .rob_status(rob_status),
        .rob_reg_wr(rob_reg_wr),
        .rob_mem_wr(rob_mem_wr),
        .rob_branch_commit(rob_branch_commit),
        .rob_jump_reg_commit(rob_jump_reg_commit)
    );

    reg_file REG_FILE (
        .clk, .rst_n,

        .phy_reg_output(phy_reg_output),
        .rob_reg_wr(rob_reg_wr),
        .decoder_output(decoder_output),

        .reg_file_data(reg_file_data)
    );

    alu_reservation_station ALU_RESERVATION_STATION (
        .clk, .rst_n,

        .decoder_output(decoder_output),
        .phy_reg_output(phy_reg_output),
        .reg_file_data(reg_file_data),
        .cdb_output(cdb_output),
        .rob_status(rob_status),
        .e_hc(e_hc),
        .branch_pred_hc(branch_pred_hc),

        .alu_res_stat_output(alu_res_stat_output)
    );

    alu ALU (
        .in(reserv_stat_output),

        .out(alu_output),
        .done(done)
    );

    mem_reservation_station MEM_RESERVATION_STATION (
        .clk, .rst_n,

        .decoder_output(decoder_output),
        .phy_reg_output(phy_reg_output),
        .reg_file_data(reg_file_data),
        .cdb_output(cdb_output),
        .rob_status(rob_status),
        .m_hc(m_hc),
        .branch_pred_hc(branch_pred_hc),
        .rob_mem_wr(rob_mem_wr),

        .st_data_output(st_data_output),
        .d_cache_input(d_cache_input)
    );

    d_cache D_CACHE (
        .clk, .rst_n,

		.in(d_cache_input),
		.out(d_cache_output),

		.mem_read_address(mem_read_address[1]),
		.mem_read_data   (mem_read_data[1]),

		.mem_write_address(mem_write_address[0]),
		.mem_write_data(mem_write_data[0]),
		.mem_write_response(mem_write_response[0])
    );

    common_data_bus COMMON_DATA_BUS (
        .mem_input(d_cache_input),
        .mem_output(d_cache_output),
        .alu_output(alu_output),

        .cdb_output(cdb_output)
    );

    hazard_controller HAZARD_CONTROLLER (
        .clk, .rst_n,

        .i_cache_output(i_cache_output),            //used for i_hc
        .inst_q_output(inst_q_output),
        .decoder_output(decoder_output),
        .rob_status(rob_status),                    //used for d_hc
        .alu_res_stat_status(alu_res_stat_status),  //used for d_hc
        .mem_res_stat_status(mem_res_stat_status),  //used for d_hc, rob_st_hc
        .d_cache_input(d_cache_input),              //used for e_hc, m_hc
        .d_cache_output(d_cache_output),            //used for e_hc, m_hc
        .rob_branch_commit(rob_branch_commit),      //used for branch_pred_hc
        .rob_jump_reg_commit(rob_jump_reg_commit),

        .i_hc(i_hc),
        .d_hc(d_hc),
        .rob_st_hc(rob_st_hc),
        .e_hc(e_hc),
        .m_hc(m_hc),
        .branch_pred_hc(branch_pred_hc),
        .i_load_pc(i_load_pc)
    );

endmodule