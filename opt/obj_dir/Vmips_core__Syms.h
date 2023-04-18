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
#include "Vmips_core_cache_output_ifc.h"
#include "Vmips_core_alu_pass_through_ifc.h"
#include "Vmips_core_d_cache_pass_through_ifc.h"
#include "Vmips_core_write_back_ifc.h"
#include "Vmips_core_hazard_control_ifc.h"
#include "Vmips_core_alu_input_ifc.h"
#include "Vmips_core_alu_output_ifc.h"
#include "Vmips_core_d_cache_input_ifc.h"
#include "Vmips_core_decoder_output_ifc.h"
#include "Vmips_core_reg_file_output_ifc.h"
#include "Vmips_core_pc_ifc.h"
#include "Vmips_core_branch_decoded_ifc.h"

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
    Vmips_core_alu_input_ifc       TOP__mips_core__DOT__d2e_alu_input;
    Vmips_core_alu_pass_through_ifc TOP__mips_core__DOT__d2e_alu_pass_through;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__d2e_pc;
    Vmips_core_branch_decoded_ifc  TOP__mips_core__DOT__dec_branch_decoded;
    Vmips_core_decoder_output_ifc  TOP__mips_core__DOT__dec_decoder_output;
    Vmips_core_reg_file_output_ifc TOP__mips_core__DOT__dec_forward_unit_output;
    Vmips_core_d_cache_input_ifc   TOP__mips_core__DOT__e2m_d_cache_input;
    Vmips_core_d_cache_pass_through_ifc TOP__mips_core__DOT__e2m_d_cache_pass_through;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__e2m_pc;
    Vmips_core_alu_output_ifc      TOP__mips_core__DOT__ex_alu_output;
    Vmips_core_cache_output_ifc    TOP__mips_core__DOT__i2d_inst;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__i2d_pc;
    Vmips_core_hazard_control_ifc  TOP__mips_core__DOT__i2i_hc;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__if_pc_current;
    Vmips_core_pc_ifc              TOP__mips_core__DOT__if_pc_next;
    Vmips_core_write_back_ifc      TOP__mips_core__DOT__m2w_write_back;
    Vmips_core_write_back_ifc      TOP__mips_core__DOT__mem_write_back;

    // SCOPE NAMES
    VerilatedScope __Vscope_mips_core__ALU;

    // CONSTRUCTORS
    Vmips_core__Syms(VerilatedContext* contextp, const char* namep, Vmips_core* modelp);
    ~Vmips_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
