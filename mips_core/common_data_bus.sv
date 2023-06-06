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
	end

endmodule