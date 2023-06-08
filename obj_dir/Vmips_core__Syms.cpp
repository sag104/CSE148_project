// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmips_core__Syms.h"
#include "Vmips_core.h"
#include "Vmips_core___024root.h"
#include "Vmips_core___024unit.h"
#include "Vmips_core_hazard_control_ifc.h"
#include "Vmips_core_branch_pred_hc_ifc.h"
#include "Vmips_core_load_pc_ifc.h"
#include "Vmips_core_pc_ifc.h"
#include "Vmips_core_inst_q_output_ifc.h"
#include "Vmips_core_register_rename_ifc.h"
#include "Vmips_core_rob_status_ifc.h"
#include "Vmips_core_rob_reg_wr_ifc.h"
#include "Vmips_core_rob_mem_wr_ifc.h"
#include "Vmips_core_rob_jump_reg_commit_ifc.h"
#include "Vmips_core_mem_addr_unit_st_output_ifc.h"
#include "Vmips_core_mem_res_stat_status_ifc.h"
#include "Vmips_core_reg_file_output_ifc.h"
#include "Vmips_core_alu_res_stat_output_ifc.h"
#include "Vmips_core_alu_res_stat_status_ifc.h"
#include "Vmips_core_alu_output_ifc.h"
#include "Vmips_core_common_data_bus_ifc.h"
#include "Vmips_core_d_cache_input_ifc.h"
#include "Vmips_core_d_cache_output_ifc.h"
#include "Vmips_core_decoder_output_ifc.h"
#include "Vmips_core_rob_branch_commit_ifc.h"

// FUNCTIONS
Vmips_core__Syms::~Vmips_core__Syms()
{
}

Vmips_core__Syms::Vmips_core__Syms(VerilatedContext* contextp, const char* namep,Vmips_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__mips_core__DOT__alu_output{this, Verilated::catName(namep, "mips_core.alu_output")}
    , TOP__mips_core__DOT__alu_res_stat_output{this, Verilated::catName(namep, "mips_core.alu_res_stat_output")}
    , TOP__mips_core__DOT__alu_res_stat_status{this, Verilated::catName(namep, "mips_core.alu_res_stat_status")}
    , TOP__mips_core__DOT__branch_pred_hc{this, Verilated::catName(namep, "mips_core.branch_pred_hc")}
    , TOP__mips_core__DOT__cdb_output{this, Verilated::catName(namep, "mips_core.cdb_output")}
    , TOP__mips_core__DOT__d_cache_input{this, Verilated::catName(namep, "mips_core.d_cache_input")}
    , TOP__mips_core__DOT__d_cache_output{this, Verilated::catName(namep, "mips_core.d_cache_output")}
    , TOP__mips_core__DOT__d_hc{this, Verilated::catName(namep, "mips_core.d_hc")}
    , TOP__mips_core__DOT__decoder_output{this, Verilated::catName(namep, "mips_core.decoder_output")}
    , TOP__mips_core__DOT__e_hc{this, Verilated::catName(namep, "mips_core.e_hc")}
    , TOP__mips_core__DOT__i_hc{this, Verilated::catName(namep, "mips_core.i_hc")}
    , TOP__mips_core__DOT__i_load_pc{this, Verilated::catName(namep, "mips_core.i_load_pc")}
    , TOP__mips_core__DOT__inst_q_output{this, Verilated::catName(namep, "mips_core.inst_q_output")}
    , TOP__mips_core__DOT__m_hc{this, Verilated::catName(namep, "mips_core.m_hc")}
    , TOP__mips_core__DOT__mem_res_stat_status{this, Verilated::catName(namep, "mips_core.mem_res_stat_status")}
    , TOP__mips_core__DOT__pc_current{this, Verilated::catName(namep, "mips_core.pc_current")}
    , TOP__mips_core__DOT__pc_next{this, Verilated::catName(namep, "mips_core.pc_next")}
    , TOP__mips_core__DOT__phy_reg_output{this, Verilated::catName(namep, "mips_core.phy_reg_output")}
    , TOP__mips_core__DOT__reg_file_data{this, Verilated::catName(namep, "mips_core.reg_file_data")}
    , TOP__mips_core__DOT__rob_branch_commit{this, Verilated::catName(namep, "mips_core.rob_branch_commit")}
    , TOP__mips_core__DOT__rob_jump_reg_commit{this, Verilated::catName(namep, "mips_core.rob_jump_reg_commit")}
    , TOP__mips_core__DOT__rob_mem_wr{this, Verilated::catName(namep, "mips_core.rob_mem_wr")}
    , TOP__mips_core__DOT__rob_reg_wr{this, Verilated::catName(namep, "mips_core.rob_reg_wr")}
    , TOP__mips_core__DOT__rob_st_hc{this, Verilated::catName(namep, "mips_core.rob_st_hc")}
    , TOP__mips_core__DOT__rob_status{this, Verilated::catName(namep, "mips_core.rob_status")}
    , TOP__mips_core__DOT__st_data_output{this, Verilated::catName(namep, "mips_core.st_data_output")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__mips_core__DOT__alu_output = &TOP__mips_core__DOT__alu_output;
    TOP.__PVT__mips_core__DOT__alu_res_stat_output = &TOP__mips_core__DOT__alu_res_stat_output;
    TOP.__PVT__mips_core__DOT__alu_res_stat_status = &TOP__mips_core__DOT__alu_res_stat_status;
    TOP.__PVT__mips_core__DOT__branch_pred_hc = &TOP__mips_core__DOT__branch_pred_hc;
    TOP.__PVT__mips_core__DOT__cdb_output = &TOP__mips_core__DOT__cdb_output;
    TOP.__PVT__mips_core__DOT__d_cache_input = &TOP__mips_core__DOT__d_cache_input;
    TOP.__PVT__mips_core__DOT__d_cache_output = &TOP__mips_core__DOT__d_cache_output;
    TOP.__PVT__mips_core__DOT__d_hc = &TOP__mips_core__DOT__d_hc;
    TOP.__PVT__mips_core__DOT__decoder_output = &TOP__mips_core__DOT__decoder_output;
    TOP.__PVT__mips_core__DOT__e_hc = &TOP__mips_core__DOT__e_hc;
    TOP.__PVT__mips_core__DOT__i_hc = &TOP__mips_core__DOT__i_hc;
    TOP.__PVT__mips_core__DOT__i_load_pc = &TOP__mips_core__DOT__i_load_pc;
    TOP.__PVT__mips_core__DOT__inst_q_output = &TOP__mips_core__DOT__inst_q_output;
    TOP.__PVT__mips_core__DOT__m_hc = &TOP__mips_core__DOT__m_hc;
    TOP.__PVT__mips_core__DOT__mem_res_stat_status = &TOP__mips_core__DOT__mem_res_stat_status;
    TOP.__PVT__mips_core__DOT__pc_current = &TOP__mips_core__DOT__pc_current;
    TOP.__PVT__mips_core__DOT__pc_next = &TOP__mips_core__DOT__pc_next;
    TOP.__PVT__mips_core__DOT__phy_reg_output = &TOP__mips_core__DOT__phy_reg_output;
    TOP.__PVT__mips_core__DOT__reg_file_data = &TOP__mips_core__DOT__reg_file_data;
    TOP.__PVT__mips_core__DOT__rob_branch_commit = &TOP__mips_core__DOT__rob_branch_commit;
    TOP.__PVT__mips_core__DOT__rob_jump_reg_commit = &TOP__mips_core__DOT__rob_jump_reg_commit;
    TOP.__PVT__mips_core__DOT__rob_mem_wr = &TOP__mips_core__DOT__rob_mem_wr;
    TOP.__PVT__mips_core__DOT__rob_reg_wr = &TOP__mips_core__DOT__rob_reg_wr;
    TOP.__PVT__mips_core__DOT__rob_st_hc = &TOP__mips_core__DOT__rob_st_hc;
    TOP.__PVT__mips_core__DOT__rob_status = &TOP__mips_core__DOT__rob_status;
    TOP.__PVT__mips_core__DOT__st_data_output = &TOP__mips_core__DOT__st_data_output;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__mips_core__DOT__alu_output.__Vconfigure(true);
    TOP__mips_core__DOT__alu_res_stat_output.__Vconfigure(true);
    TOP__mips_core__DOT__alu_res_stat_status.__Vconfigure(true);
    TOP__mips_core__DOT__branch_pred_hc.__Vconfigure(true);
    TOP__mips_core__DOT__cdb_output.__Vconfigure(true);
    TOP__mips_core__DOT__d_cache_input.__Vconfigure(true);
    TOP__mips_core__DOT__d_cache_output.__Vconfigure(true);
    TOP__mips_core__DOT__d_hc.__Vconfigure(true);
    TOP__mips_core__DOT__decoder_output.__Vconfigure(true);
    TOP__mips_core__DOT__e_hc.__Vconfigure(false);
    TOP__mips_core__DOT__i_hc.__Vconfigure(false);
    TOP__mips_core__DOT__i_load_pc.__Vconfigure(true);
    TOP__mips_core__DOT__inst_q_output.__Vconfigure(true);
    TOP__mips_core__DOT__m_hc.__Vconfigure(false);
    TOP__mips_core__DOT__mem_res_stat_status.__Vconfigure(true);
    TOP__mips_core__DOT__pc_current.__Vconfigure(true);
    TOP__mips_core__DOT__pc_next.__Vconfigure(false);
    TOP__mips_core__DOT__phy_reg_output.__Vconfigure(true);
    TOP__mips_core__DOT__reg_file_data.__Vconfigure(true);
    TOP__mips_core__DOT__rob_branch_commit.__Vconfigure(true);
    TOP__mips_core__DOT__rob_jump_reg_commit.__Vconfigure(true);
    TOP__mips_core__DOT__rob_mem_wr.__Vconfigure(true);
    TOP__mips_core__DOT__rob_reg_wr.__Vconfigure(true);
    TOP__mips_core__DOT__rob_st_hc.__Vconfigure(false);
    TOP__mips_core__DOT__rob_status.__Vconfigure(true);
    TOP__mips_core__DOT__st_data_output.__Vconfigure(true);
    // Setup scopes
    __Vscope_mips_core__ALU.configure(this, name(), "mips_core.ALU", "ALU", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
