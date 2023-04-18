// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_core.h for the primary calling header

#ifndef VERILATED_VMIPS_CORE_ALU_PASS_THROUGH_IFC_H_
#define VERILATED_VMIPS_CORE_ALU_PASS_THROUGH_IFC_H_  // guard

#include "verilated.h"

class Vmips_core__Syms;
VL_MODULE(Vmips_core_alu_pass_through_ifc) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ is_branch;
    CData/*0:0*/ prediction;
    CData/*0:0*/ is_mem_access;
    CData/*0:0*/ mem_action;
    CData/*0:0*/ uses_rw;
    CData/*4:0*/ rw_addr;
    IData/*25:0*/ recovery_target;
    IData/*31:0*/ sw_data;

    // INTERNAL VARIABLES
    Vmips_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmips_core_alu_pass_through_ifc(Vmips_core__Syms* symsp, const char* name);
    ~Vmips_core_alu_pass_through_ifc();
    VL_UNCOPYABLE(Vmips_core_alu_pass_through_ifc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
