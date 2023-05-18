interface mem_addr_unit_to_rob_ifc;
    logic [31:0] mem_addr;

    modport in (input mem_addr);
    modport out (output mem_addr);
endinterface //interfacename