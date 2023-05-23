`include "mips_core.svh"

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
	output [`ADDR_WIDTH - 1 : 0] AWADDR,

	input WREADY,
	output WVALID,
	output WLAST,
	output [3:0] WID,
	output [`DATA_WIDTH - 1 : 0] WDATA,

	output BREADY,
	input BVALID,
	input [3:0] BID,

	input ARREADY,
	output ARVALID,
	output [3:0] ARID,
	output [3:0] ARLEN,
	output [`ADDR_WIDTH - 1 : 0] ARADDR,

	output RREADY,
	input RVALID,
	input RLAST,
	input [3:0] RID,
	input [`DATA_WIDTH - 1 : 0] RDATA
);

// Interfaces
pc_ifc if_pc_current();
pc_ifc if_pc_next();
cache_output_ifc if_i_cache_output();

// ==== IF to DEC
pc_ifc i2d_pc();
cache_output_ifc i2d_inst();

// |||| DEC Stage
decoder_output_ifc dec_decoder_output();

// Register renaming
register_rename_ifc reg_phy_ready();

// Reg File
reg_file_output_ifc reg_file_output();

// Common Data Bus
common_data_bus_ifc cdb_output();
cdb_alu_status_ifc reserv_stat_stall();

// Memory Address Unit
mem_addr_unit_to_rob_ifc mem_addr_unit_output();

// Reorder Buffer
rob_write_status_ifc rob_wr_status();
rob_to_reg_wr_ifc rob_reg_wr();
rob_to_mem_unit_ifc rob_mem_wr();
rob_output_ifc rob_output();

// xxxx Hazard control
logic lw_hazard;
hazard_control_ifc i2i_hc();
hazard_control_ifc i2d_hc();
hazard_control_ifc d2e_hc();
hazard_control_ifc e2m_hc();
hazard_control_ifc m2w_hc();
load_pc_ifc load_pc();

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


fetch_unit FETCH_UNIT(
		.clk, .rst_n,

		.i_hc         (i2i_hc),
		.i_load_pc    (load_pc),

		.o_pc_current (if_pc_current),
		.o_pc_next    (if_pc_next)
);

i_cache I_CACHE(
	.clk, .rst_n,

	.mem_read_address(mem_read_address[0]),
	.mem_read_data   (mem_read_data[0]),
	
	.i_pc_current (if_pc_current),
	.i_pc_next    (if_pc_next),
	
	.out          (if_i_cache_output)
);

// If you want to change the line size and total size of instruction cache,
// uncomment the following two lines and change the parameter.
// defparam D_CACHE.INDEX_WIDTH = 9,
// 	D_CACHE.BLOCK_OFFSET_WIDTH = 2;
// ========================================================================
// ==== IF to DEC
// ========================================================================
pr_i2d PR_I2D(
	.clk, .rst_n,
	.i_hc(i2d_hc),
	.i_pc   (if_pc_current),     .o_pc   (i2d_pc),
	.i_inst (if_i_cache_output), .o_inst (i2d_inst)
);

decoder DECODER(
	.i_pc(i2d_pc),
	.i_inst(i2d_inst),
	
	.out(dec_decoder_output)
);

register_rename REGISTER_RENAME (
	.clk, .rst_n,
	.decoder_output(dec_decoder_output),
	.rob_reg_wr(rob_reg_wr),
	.rob_wr_status(rob_wr_status),
	.reg_phy_ready(reg_phy_ready)
);

ooo_reg_file REG_FILE (
	.clk, .rst_n,
	.reg_phy_ready(reg_phy_ready),
	.rob_reg_file(rob_reg_file),
	.i_decoder(dec_decoder_output),
	.o_data(reg_file_output)
);

reservation_station RESERVATION_STATION (
    .clk, .rst_n,
	.decoder_output(dec_decoder_output),
	.reg_phy_ready(reg_phy_ready),
	.reg_file_data(reg_file_data),
	.alu_stall(alu_stall)
);

alu ALU(
		.in(d2e_alu_input),
		.out(ex_alu_output),
		.done
);

reorder_buffer REORDER_BUFFER (
	.clk, .rst_n,
	.decoder_output(dec_decoder_output),
	.cdb_output(cdb_output),
	.mem_addr_unit_output(mem_addr_unit_output),
	.rob_wr_status(rob_wr_status),
	.rob_reg_wr(rob_reg_wr),
	.rob_mem_wr(rob_mem_wr),
	.rob_output(rob_output)
);

memory_address_unit ADDRESS_UNIT (
	.clk,
	.rst,
	.dec_decoder_output
);
a
load_buffer LOAD_BUFFER (

);

d_cache D_CACHE (
	.clk, .rst_n,
	.in(e2m_d_cache_input),
	.out(mem_d_cache_output),
	.mem_read_address(mem_read_address[1]),
	.mem_read_data   (mem_read_data[1]),
	.mem_write_address(mem_write_address[0]),
	.mem_write_data(mem_write_data[0]),
	.mem_write_response(mem_write_response[0])
);

common_data_bus CDB (
    .clk, .rst_n,
	.reserv_stat_stall(),
	.cdb_output()
);

endmodule