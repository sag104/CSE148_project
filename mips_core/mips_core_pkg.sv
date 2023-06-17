/*
 * mips_core_pkg.sv
 * Author: Zinsser Zhang
 * Last Revision: 04/09/2018
 *
 * This package defines all the enum types used across different units within
 * mips_core.
 *
 * See wiki page "Systemverilog Primer" section package and enum for details.
 */

package mips_core_pkg;

parameter DATA_WIDTH = 32;
parameter ADDR_WIDTH = 26;
parameter G_HISTORY_BITS = 12;

parameter ROB_DEPTH_BITS = 5;
parameter ROB_DEPTH = 1 << ROB_DEPTH_BITS;
parameter ALU_RES_STAT_DEPTH_BITS = 5;
parameter ALU_RES_STAT_DEPTH = 1 << ALU_RES_STAT_DEPTH_BITS;
parameter MEM_RES_STAT_DEPTH_BITS = 2;
parameter MEM_RES_STAT_DEPTH = 1 << MEM_RES_STAT_DEPTH_BITS;
parameter INSTRUCTION_QUEUE_DEPTH_BITS = 5;
parameter INSTRUCTION_QUEUE_DEPTH = 1 << INSTRUCTION_QUEUE_DEPTH_BITS;

/*
parameter ROB_DEPTH = 4;
parameter ROB_DEPTH_BITS = 2;
parameter ALU_RES_STAT_DEPTH = 4;
parameter ALU_RES_STAT_DEPTH_BITS = 2;
parameter MEM_RES_STAT_DEPTH = 4;
parameter MEM_RES_STAT_DEPTH_BITS = 2;
parameter INSTRUCTION_QUEUE_DEPTH = 4;
*/
typedef enum logic [4:0] {
	zero = 5'd0,
	at = 5'd1,
	v0 = 5'd2,
	v1 = 5'd3,
	a0 = 5'd4,
	a1 = 5'd5,
	a2 = 5'd6,
	a3 = 5'd7,
	t0 = 5'd8,
	t1 = 5'd9,
	t2 = 5'd10,
	t3 = 5'd11,
	t4 = 5'd12,
	t5 = 5'd13,
	t6 = 5'd14,
	t7 = 5'd15,
	s0 = 5'd16,
	s1 = 5'd17,
	s2 = 5'd18,
	s3 = 5'd19,
	s4 = 5'd20,
	s5 = 5'd21,
	s6 = 5'd22,
	s7 = 5'd23,
	t8 = 5'd24,
	t9 = 5'd25,
	k0 = 5'd26,
	k1 = 5'd27,
	gp = 5'd28,
	sp = 5'd29,
	s8 = 5'd30,
	ra = 5'd31
} MipsReg;

typedef enum logic [4:0] {
	ALUCTL_NOP,			// No Operation (noop)
	ALUCTL_ADD,			// Add (signed)
	ALUCTL_ADDU,		// Add (unsigned)
	ALUCTL_SUB,			// Subtract (signed)
	ALUCTL_SUBU,		// Subtract (unsigned)
	ALUCTL_AND,			// AND
	ALUCTL_OR,			// OR
	ALUCTL_XOR,			// XOR
	ALUCTL_SLT,			// Set on Less Than
	ALUCTL_SLTU,		// Set on Less Than (unsigned)
	ALUCTL_SLL,			// Shift Left Logical
	ALUCTL_SRL,			// Shift Right Logical
	ALUCTL_SRA,			// Shift Right Arithmetic
	ALUCTL_SLLV,		// Shift Left Logical Variable
	ALUCTL_SRLV,		// Shift Right Logical Variable
	ALUCTL_SRAV,		// Shift Right Arithmetic Variable
	ALUCTL_NOR,			// NOR
	ALUCTL_MTC0_PASS,	// Move to Coprocessor (PASS)
	ALUCTL_MTC0_FAIL,	// Move to Coprocessor (FAIL)
	ALUCTL_MTC0_DONE,	// Move to Coprocessor (DONE)

	ALUCTL_BA,			// Unconditional branch
	ALUCTL_BEQ,
	ALUCTL_BNE,
	ALUCTL_BLEZ,
	ALUCTL_BGTZ,
	ALUCTL_BGEZ,
	ALUCTL_BLTZ
} AluCtl;

typedef enum logic {
	WRITE,
	READ
} MemAccessType;

typedef enum logic {
	NOT_TAKEN,
	TAKEN
} BranchOutcome;

typedef struct packed {
	logic [ADDR_WIDTH - 1 : 0] pc;
	mips_core_pkg::BranchOutcome prediction;
	mips_core_pkg::BranchOutcome prediction_gshare;
	mips_core_pkg::BranchOutcome prediction_2bit;
	logic [G_HISTORY_BITS - 1 : 0] ghistory;
} branch_pred_info;

typedef struct packed {
	logic [ADDR_WIDTH - 1 : 0] pc;
	mips_core_pkg::BranchOutcome prediction;
	mips_core_pkg::BranchOutcome prediction_gshare;
	mips_core_pkg::BranchOutcome prediction_2bit;
	logic [G_HISTORY_BITS - 1 : 0] ghistory;
	logic [ADDR_WIDTH - 1 : 0] recovery_target;
} branch_pred_storage;

typedef struct packed {
	logic ready;
	logic valid;
	logic jump_reg;
	logic is_load;
	logic pass;
	logic fail;
	logic done;
	logic [DATA_WIDTH - 1 : 0] mtc0_op;
	logic [DATA_WIDTH - 1 : 0] instr;
	logic [1:0] inst_type;
	logic [5:0] reg_dest;
	logic [4:0] logic_reg_dest;
	logic [ADDR_WIDTH - 1 : 0] addr;
	logic [ADDR_WIDTH - 1 : 0] pc;
	logic [ADDR_WIDTH - 1 : 0] mem_dest;
	logic [DATA_WIDTH - 1 : 0] value;
} rob_entry;

typedef struct packed{
	logic [5:0] log_res [32];
	logic [63:0] free_reg ;
	logic [ROB_DEPTH_BITS - 1 : 0] reg_phy_rob_tag [64];   
	logic [63:0] reg_ready;  
} checkpoint;

typedef struct packed{
	logic valid;
	mips_core_pkg::AluCtl alu_ctl;
	logic [ROB_DEPTH_BITS - 1 : 0] tag;
	logic [ROB_DEPTH_BITS : 0] q_1;
	logic [ROB_DEPTH_BITS : 0] q_2;
	logic [ADDR_WIDTH - 1 : 0] pc;
	logic [31:0] v_1;
	logic [31:0] v_2;
} alu_res_stat_entry;

typedef struct packed{
	logic valid;
	logic [ROB_DEPTH_BITS - 1 : 0] tag;
	mips_core_pkg::MemAccessType mem_action;
	logic [ROB_DEPTH_BITS : 0] q_reg_addr;
	logic [DATA_WIDTH - 1 :0] v_reg_val;
	logic [ROB_DEPTH_BITS : 0] q_reg_val;
	logic [ADDR_WIDTH - 1 : 0] pc;
	logic [31:0] addr;
	logic [31:0] offset;
} mem_res_stat_entry;

typedef struct packed {
	logic valid;
	logic [31:0] addr;
} store_address;

typedef struct packed{
	logic [ADDR_WIDTH - 1 : 0] pc;
	logic [DATA_WIDTH - 1 : 0] data;
} inst;

endpackage
