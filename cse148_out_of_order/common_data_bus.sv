interface common_data_bus_ifc ();
	logic valid;
    logic [`ROB_DEPTH / 2 - 1 : 0] tag;
    logic [31:0] data;
    
	modport in  (input valid, tag, data);
	modport out  (output valid, tag, data);
endinterface

interface cdb_alu_status_ifc ();
	logic alu_stall;

	modport in 	(input alu_stall);
	modport out (output alu_stall);
endinterface

module common_data_bus (
	input logic clk,
	input logic rst_n,

	input logic mem_valid,
	input logic [5:0] mem_tag,
	input logic [31:0] mem_data,
	
	input logic alu_valid,
	input logic [5:0] alu_tag,
	input logic [31:0] alu_data,

	cdb_alu_status_ifc.out reserv_stat_stall,
	common_data_bus_ifc.out cdb_output
);

assign reserv_stat_stall.alu_stall = alu_valid & mem_valid; // no mem_stall: memory unit gets priority in common data bus
assign cdb_output.valid = mem_valid | alu_valid;
assign {cdb_output.tag, cdb_output.data} = (mem_valid) ? {mem_tag, mem_data} : (alu_valid) ? {alU_tag, alu_data} : '0;

endmodule