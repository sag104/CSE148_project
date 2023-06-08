// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_core.h for the primary calling header

#ifndef VERILATED_VMIPS_CORE_LOAD_PC_IFC_H_
#define VERILATED_VMIPS_CORE_LOAD_PC_IFC_H_  // guard

#include "verilated.h"

class Vmips_core__Syms;
VL_MODULE(Vmips_core_load_pc_ifc) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ we;
    IData/*25:0*/ new_pc;

    // INTERNAL VARIABLES
    Vmips_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmips_core_load_pc_ifc(Vmips_core__Syms* symsp, const char* name);
    ~Vmips_core_load_pc_ifc();
    VL_UNCOPYABLE(Vmips_core_load_pc_ifc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
