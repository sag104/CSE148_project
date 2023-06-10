import mips_core_pkg::*;

`ifdef SIMULATION
import "DPI-C" function void pc_event (input int pc);
import "DPI-C" function void wb_event (input int addr, input int data);
import "DPI-C" function void ls_event (input int op, input int addr, input int data);
`endif

module mips_core (
	// General signals
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low
	output done,  // Execution is done

	// AXI interfaces
	input AWREADY,
	output AWVALID,
	output [3:0] AWID,
	output [3:0] AWLEN,
	output [ADDR_WIDTH - 1 : 0] AWADDR,

	input WREADY,
	output WVALID,
	output WLAST,
	output [3:0] WID,
	output [DATA_WIDTH - 1 : 0] WDATA,

	output BREADY,
	input BVALID,
	input [3:0] BID,

	input ARREADY,
	output ARVALID,
	output [3:0] ARID,
	output [3:0] ARLEN,
	output [ADDR_WIDTH - 1 : 0] ARADDR,

	output RREADY,
	input RVALID,
	input RLAST,
	input [3:0] RID,
	input [DATA_WIDTH - 1 : 0] RDATA
);

    //Interfaces sorted by where they output from

    //hazard control interfaces
    hazard_control_ifc i_hc();
    hazard_control_ifc d_hc();
    hazard_control_ifc rob_st_hc();
    hazard_control_ifc e_hc();
    hazard_control_ifc m_hc();
    branch_pred_hc_ifc branch_pred_hc();
    checkpoint_hc_ifc ch_hc();

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
    alu_res_stat_status_ifc alu_res_stat_status();

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

    // xxxx Memory
	axi_write_address axi_write_address();
	axi_write_data axi_write_data();
	axi_write_response axi_write_response();
	axi_read_address axi_read_address();
	axi_read_data axi_read_data();

	axi_write_address mem_write_address[1]();
	axi_write_data mem_write_data[1]();
	axi_write_response mem_write_response[1]();
	axi_read_address mem_read_address[2]();
	axi_read_data mem_read_data[2]();

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

        .i_cache_output(i_cache_output),
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
        .d_hc(d_hc),
        .ch_hc(ch_hc),

        .phy_reg_output(phy_reg_output)
    );

    reorder_buffer REORDER_BUFFER (
        .clk, .rst_n,

        .decoder_output(decoder_output),
        .phy_reg_output(phy_reg_output),
        .d_hc(d_hc),
        .rob_st_hc(rob_st_hc),
        .branch_pred_hc(branch_pred_hc),
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

        .alu_res_stat_output(alu_res_stat_output),
        .alu_res_stat_status(alu_res_stat_status)
    );

    alu ALU (
        .in(alu_res_stat_output),

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
        .d_cache_input(d_cache_input),
        .mem_res_stat_status(mem_res_stat_status)
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
        .ch_hc(ch_hc),
        .rob_st_hc(rob_st_hc),
        .e_hc(e_hc),
        .m_hc(m_hc),
        .branch_pred_hc(branch_pred_hc),
        .i_load_pc(i_load_pc)
    );

    // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	// xxxx Memory Arbiter
	// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	memory_arbiter #(.WRITE_MASTERS(1), .READ_MASTERS(2)) MEMORY_ARBITER (
		.clk, .rst_n,
		.axi_write_address,
		.axi_write_data,
		.axi_write_response,
		.axi_read_address,
		.axi_read_data,

		.mem_write_address,
		.mem_write_data,
		.mem_write_response,
		.mem_read_address,
		.mem_read_data
	);

	assign axi_write_address.AWREADY = AWREADY;
	assign AWVALID = axi_write_address.AWVALID;
	assign AWID = axi_write_address.AWID;
	assign AWLEN = axi_write_address.AWLEN;
	assign AWADDR = axi_write_address.AWADDR;

	assign axi_write_data.WREADY = WREADY;
	assign WVALID = axi_write_data.WVALID;
	assign WLAST = axi_write_data.WLAST;
	assign WID = axi_write_data.WID;
	assign WDATA = axi_write_data.WDATA;

	assign axi_write_response.BVALID = BVALID;
	assign axi_write_response.BID = BID;
	assign BREADY = axi_write_response.BREADY;

	assign axi_read_address.ARREADY = ARREADY;
	assign ARVALID = axi_read_address.ARVALID;
	assign ARID = axi_read_address.ARID;
	assign ARLEN = axi_read_address.ARLEN;
	assign ARADDR = axi_read_address.ARADDR;

	assign RREADY = axi_read_data.RREADY;
	assign axi_read_data.RVALID = RVALID;
	assign axi_read_data.RLAST = RLAST;
	assign axi_read_data.RID = RID;
	assign axi_read_data.RDATA = RDATA;

`ifdef SIMULATION
	always_ff @(posedge clk) begin
		if(rob_reg_wr.reg_wr_en & (rob_reg_wr.reg_log_wr_addr != 0)) begin
			wb_event(rob_reg_wr.reg_log_wr_addr, rob_reg_wr.reg_wr_data);
		end

		if(d_cache_input.valid & d_cache_output.valid) begin
			if(d_cache_input.mem_action == READ) begin
				ls_event(d_cache_input.mem_action, d_cache_input.addr, d_cache_output.data);
			end else begin
				ls_event(d_cache_input.mem_action, d_cache_input.addr, d_cache_input.data);
			end
		end
	end
`endif
endmodule
