import mips_core_pkg::*;

interface hazard_control_ifc ();
	// Stall signal has higher priority
	logic flush;	// Flush signal of the previous stage
	logic stall;	// Stall signal of the next stage

	modport in  (input flush, stall);
	modport out (output flush, stall);
endinterface

interface branch_pred_hc_ifc ();
	// Stall signal has higher priority
	logic flush;	//flush on mispredict
    logic correct_pred;

	modport in  (input flush, correct_pred);
	modport out (output flush, correct_pred);
endinterface

interface load_pc_ifc ();
	logic we;	// Write Enable
	logic [ADDR_WIDTH - 1 : 0] new_pc;

	modport in  (input we, new_pc);
	modport out (output we, new_pc);
endinterface

interface pc_ifc ();
	logic [ADDR_WIDTH - 1 : 0] pc;

	modport in  (input pc);
	modport out (output pc);
endinterface

interface i_cache_output_ifc ();
	logic valid;	// Output Valid
	logic [DATA_WIDTH - 1 : 0] data;
    logic [ADDR_WIDTH - 1 : 0] pc;

	modport in  (input valid, data, pc);
	modport out (output valid, data, pc);
endinterface

interface inst_q_output_ifc ();
	logic valid;	// Output Valid
    logic full;
	logic [DATA_WIDTH - 1 : 0] data;
    logic [ADDR_WIDTH - 1 : 0] pc;

	modport in  (input valid, full, data, pc);
	modport out (output valid, full, data, pc);
endinterface

interface register_rename_ifc;
	logic [5:0] rs_phy;
    logic rs_ready;
    logic [ROB_DEPTH_BITS - 1 : 0] rs_tag;
    logic [5:0] rt_phy;
    logic rt_ready;
    logic [ROB_DEPTH_BITS - 1 : 0] rt_tag;
    logic [5:0] rw_phy;

	modport in  (input rs_phy, rs_ready, rs_tag, rt_phy, rt_ready, rt_tag, rw_phy);
	modport out (output rs_phy, rs_ready, rs_tag, rt_phy, rt_ready, rt_tag, rw_phy);
endinterface

interface decoder_output_ifc ();
	logic valid;
	logic [ADDR_WIDTH - 1 : 0] pc;
	mips_core_pkg::AluCtl alu_ctl;
	logic is_branch_jump;
	logic is_branch;
	logic is_jump;
	logic is_jump_reg;
	logic [ADDR_WIDTH - 1 : 0] branch_target;

	logic is_mem_access;
	mips_core_pkg::MemAccessType mem_action;

	logic uses_rs;
	mips_core_pkg::MipsReg rs_addr;

	logic uses_rt;
	mips_core_pkg::MipsReg rt_addr;

	logic uses_immediate;
	logic [DATA_WIDTH - 1 : 0] immediate;

	logic uses_rw;
	mips_core_pkg::MipsReg rw_addr;

	modport in  (input valid, pc, alu_ctl, is_branch_jump, is_branch, is_jump, is_jump_reg,
		branch_target, is_mem_access, mem_action, uses_rs, rs_addr, uses_rt,
		rt_addr, uses_immediate, immediate, uses_rw, rw_addr);
	modport out (output valid, pc, alu_ctl, is_branch_jump, is_branch, is_jump, is_jump_reg,
		branch_target, is_mem_access, mem_action, uses_rs, rs_addr, uses_rt,
		rt_addr, uses_immediate, immediate, uses_rw, rw_addr);
endinterface

interface rob_status_ifc();
    logic full;
    logic [ROB_DEPTH_BITS - 1 : 0] tag;

    modport in  (input full, tag);
    modport out (output full, tag);
endinterface

interface rob_reg_wr_ifc();
    logic reg_wr_en;
    logic [DATA_WIDTH - 1 : 0] reg_wr_data;
    logic [5:0] reg_wr_addr;

    modport in  (input reg_wr_en, reg_wr_data, reg_wr_addr);
    modport out (output reg_wr_en, reg_wr_data, reg_wr_addr);
endinterface

interface rob_mem_wr_ifc();
    logic mem_wr_en;
    logic [ADDR_WIDTH - 1 : 0] mem_wr_addr;
    logic [DATA_WIDTH - 1 : 0] mem_wr_data;

    modport in  (input mem_wr_en, mem_wr_addr, mem_wr_data);
    modport out (output mem_wr_en, mem_wr_addr, mem_wr_data);
endinterface

interface rob_branch_commit_ifc();
    logic valid_branch;
    mips_core_pkg::BranchOutcome branch_outcome;

    modport in  (input valid_branch, branch_outcome);
    modport out (output valid_branch, branch_outcome);
endinterface

interface rob_jump_reg_commit_ifc();
    logic valid_jump_reg;
    logic [ADDR_WIDTH - 1 : 0] jump_target;

    modport in  (input valid_jump_reg, jump_target);
    modport out (output valid_jump_reg, jump_target);
endinterface

interface mem_addr_unit_st_output_ifc();
    logic valid_st;
    logic [ROB_DEPTH_BITS - 1 : 0] tag;
    logic [ADDR_WIDTH - 1 : 0] mem_addr;
    logic [DATA_WIDTH - 1 : 0] reg_value;

    modport in  (input valid_st, tag, mem_addr, reg_value);
    modport out (output valid_st, tag, mem_addr, reg_value);
endinterface

interface mem_res_stat_status_ifc();
	logic full;
	logic ld_ready;

	modport in (input full, ld_ready);
	modport out (output full, ld_ready);
endinterface

interface reg_file_output_ifc ();
	logic [DATA_WIDTH - 1 : 0] rs_data;
	logic [DATA_WIDTH - 1 : 0] rt_data;

	modport in  (input rs_data, rt_data);
	modport out (output rs_data, rt_data);
endinterface

interface alu_res_stat_output_ifc ();
    logic valid;
    logic [ROB_DEPTH_BITS - 1 : 0] tag;
    mips_core_pkg::AluCtl alu_ctl;
    logic [DATA_WIDTH - 1 : 0] op1;
    logic [DATA_WIDTH - 1 : 0] op2;

    modport in (input valid, tag, alu_ctl, op1, op2);
    modport out (output valid, tag, alu_ctl, op1, op2);
endinterface

interface alu_res_stat_status_ifc ();
    logic full;

    modport in (input full);
    modport out (output full);
endinterface

interface alu_output_ifc ();
	logic valid;
    logic [ROB_DEPTH_BITS - 1 : 0] tag;
	logic [DATA_WIDTH - 1 : 0] result;

	modport in  (input valid, tag, result);
	modport out (output valid, tag, result);
endinterface

interface common_data_bus_ifc ();
	logic valid;
    logic [ROB_DEPTH_BITS - 1 : 0] tag;
    logic [31:0] data;
    
	modport in  (input valid, tag, data);
	modport out  (output valid, tag, data);
endinterface

interface d_cache_input_ifc ();
	logic valid;
	logic [ROB_DEPTH_BITS - 1 : 0] tag;
	mips_core_pkg::MemAccessType mem_action;
	logic [ADDR_WIDTH - 1 : 0] addr;
	logic [ADDR_WIDTH - 1 : 0] addr_next;
	logic [DATA_WIDTH - 1 : 0] data;

	modport in  (input valid, tag, mem_action, addr, addr_next, data);
	modport out (output valid, tag, mem_action, addr, addr_next, data);
endinterface

interface d_cache_output_ifc ();
	logic valid;	// Output Valid
	logic [ROB_DEPTH_BITS - 1 : 0] tag;
	logic [DATA_WIDTH - 1 : 0] data;

	modport in  (input valid, tag, data);
	modport out (output valid, tag, data);
endinterface