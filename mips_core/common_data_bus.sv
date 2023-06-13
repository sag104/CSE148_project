module common_data_bus (
	d_cache_input_ifc.in mem_input,
	d_cache_output_ifc.in mem_output,
	alu_output_ifc.in alu_output,

	common_data_bus_ifc.out cdb_output
);

	logic mem_valid;

	always_comb begin
		mem_valid 							= mem_input.valid & (mem_input.mem_action == READ) & mem_output.valid;
		cdb_output.valid 					= (mem_valid) | alu_output.valid;
		{cdb_output.tag, cdb_output.data} 	= (mem_valid) ? {mem_output.tag, mem_output.data} :
											(alu_output.valid) ? {alu_output.tag, alu_output.result} : '0;
		cdb_output.addr						= mem_input.addr;
		cdb_output.pass						= (mem_valid) ? 0 : (alu_output.valid) ? alu_output.pass : 0;
		cdb_output.fail						= (mem_valid) ? 0 : (alu_output.valid) ? alu_output.fail : 0;
		cdb_output.done						= (mem_valid) ? 0 : (alu_output.valid) ? alu_output.done : 0;
		cdb_output.mtc0_op					= (mem_valid) ? 0 : (alu_output.valid) ? alu_output.mtc0_op : 0;
	end

endmodule