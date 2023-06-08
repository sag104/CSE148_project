// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMIPS_CORE__SYMS_H_
#define VERILATED_VMIPS_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmips_core.h"

// INCLUDE MODULE CLASSES
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

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vmips_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmips_core* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmips_core___024root           TOP;
    Vmips_core___024unit           TOP____024unit;
    Vmips_core_alu_output_ifc      TOP__mips_core__DOT__alu_output;
    Vmips_core_alu_res_stat_output_ifc TOP__mips_core__DOT__alu_res_stat_output;
    Vmips_core_alu_res_stat_status_ifc TOP__mips_core__DOT__alu_res_stat_status;
    Vmips_core_branch_pred_hc_ifc  TOP__mips_core__DOT__branch_pred_hc;
    Vmips_core_common_data_bus_ifc TOP__mips_core__DOT__cdb_output;
    Vmips_core_d_cache_input_ifc   TOP__mips_core__DOT__d_cache_input;
    Vmips_core_d_cache_output_ifc  TOP__mips_core__DOT__d_cache_output;
    Vmips_core_hazard_control_ifc  TOP__mips_core__DOT__d_hc;
    Vmips_core_decoder_output_ifc  TOP__mips_core__DOT__decoder_output;
    Vmips_core_hazard_control_ifc  TOP__mips_core__DOT__e_hc;
    Vmips_core_hazard_control_ifc  TOP__mips_core__DOT__i_hc;
    Vmips_core_load_pc_ifc         TOP__mips_core__DOT__i_load_pc;
    Vmips_core_inst_q_output_ifc   TOP__mips_core__DOT__inst_q_output;
    Vmips_core_hazard_control_ifc  TOP__mips_core__DOT__m_hc;
    Vmips_core_mem_res_stat_status_ifc TOP__mips_core__DOT__mem_res_stat_status;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__pc_current;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__pc_next;
    Vmips_core_register_rename_ifc TOP__mips_core__DOT__phy_reg_output;
    Vmips_core_reg_file_output_ifc TOP__mips_core__DOT__reg_file_data;
    Vmips_core_rob_branch_commit_ifc TOP__mips_core__DOT__rob_branch_commit;
    Vmips_core_rob_jump_reg_commit_ifc TOP__mips_core__DOT__rob_jump_reg_commit;
    Vmips_core_rob_mem_wr_ifc      TOP__mips_core__DOT__rob_mem_wr;
    Vmips_core_rob_reg_wr_ifc      TOP__mips_core__DOT__rob_reg_wr;
    Vmips_core_hazard_control_ifc  TOP__mips_core__DOT__rob_st_hc;
    Vmips_core_rob_status_ifc      TOP__mips_core__DOT__rob_status;
    Vmips_core_mem_addr_unit_st_output_ifc TOP__mips_core__DOT__st_data_output;

    // SCOPE NAMES
    VerilatedScope __Vscope_mips_core__ALU;

    // CONSTRUCTORS
    Vmips_core__Syms(VerilatedContext* contextp, const char* namep, Vmips_core* modelp);
    ~Vmips_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
