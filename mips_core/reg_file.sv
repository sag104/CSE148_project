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
import mips_core_pkg::*;

module reg_file (
	input logic clk,
    input logic rst_n,
    register_rename_ifc.in phy_reg_output,
    rob_reg_wr_ifc.in rob_reg_wr,
    decoder_output_ifc.in decoder_output, // Input from decoder
    reg_file_output_ifc.out reg_file_data
);

logic [DATA_WIDTH - 1 : 0] regs [64];

assign reg_file_data.rs_data = decoder_output.uses_rs ? regs[phy_reg_output.rs_phy] : '0;
assign reg_file_data.rt_data = decoder_output.uses_rt ? regs[phy_reg_output.rt_phy] : '0;



always_ff @(posedge clk) begin
    if(decoder_output.rs_addr == 3 || decoder_output.rt_addr == 3) begin
        //$display("die %h", decoder_output.pc);
    end
    if(!rst_n) begin
        regs <= '{default:0};
    end else if(rob_reg_wr.reg_wr_en) begin
        regs[rob_reg_wr.reg_wr_addr] <= rob_reg_wr.reg_wr_data;
    end
end

endmodule
