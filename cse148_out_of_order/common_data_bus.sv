interface common_data_bus_ifc ();
	logic valid;
    logic [`ROB_DEPTH / 2 - 1 : 0] tag;
    logic [31:0] data;
    
	modport in  (input valid, tag, data);
	modport out  (output valid, tag, data);
endinterface