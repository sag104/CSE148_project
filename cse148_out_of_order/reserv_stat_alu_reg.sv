interface reserv_stat_alu_ifc

endinterface

module reserv_stat_alu_reg (
    input logic clk,
    input logic rst_n,
    input logic valid_entry,
    input mips_core_pkg::AluCtl opcode,
    input [31:0] logic op1,
    input [31:0] logic op2,
    input [`ROB_DEPTH / 2 - 1 : 0] rob_tag,
);

endmodule