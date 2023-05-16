/*
 * reg_file.sv
 * Author: Zinsser Zhang
 * Last Revision: 04/09/2018
 *
 * A 32-bit wide, 32-word deep register file with two asynchronous read port
 * and one synchronous write port.
 *
 * Register file needs to output '0 if uses_r* signal is low. In this case,
 * either reg zero is requested for read or the register is unused.
 *
 * See wiki page "Branch and Jump" for details.
 */
`include "mips_core.svh"

interface reg_file_output_ifc ();
	logic [`DATA_WIDTH - 1 : 0] rs_data;
	logic [`DATA_WIDTH - 1 : 0] rt_data;

	modport in  (input rs_data, rt_data);
	modport out (output rs_data, rt_data);
endinterface

module ooo_reg_file (
	input logic clk,
    input logic rst_n,
    register_rename_ifc.in reg_phy_ready,
    rob_to_reg_file_ifc.in rob_reg_file,
    decoder_output_ifc.in i_decoded, // Input from decoder
    reg_file_output_ifc.out o_data
);

logic [`DATA_WIDTH - 1 : 0] regs [64];

assign o_data.rs_data = i_decoded.uses_rs ? regs[reg_phy_ready.rs_phy] : '0;
assign o_data.rt_data = i_decoded.uses_rt ? regs[reg_phy_ready.rt_phy] : '0;

always_ff @(posedge clk) begin
    if(!rst_n) begin
        regs <= '0;
    end else if(rob_reg_file.reg_wr_en) begin
        regs[rob_reg_file.reg_wr_addr] <= rob_reg_file.reg_wr_data;
    end
end

endmodule
