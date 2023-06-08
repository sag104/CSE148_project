// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_core.h for the primary calling header

#ifndef VERILATED_VMIPS_CORE_ROB_STATUS_IFC_H_
#define VERILATED_VMIPS_CORE_ROB_STATUS_IFC_H_  // guard

#include "verilated.h"

class Vmips_core__Syms;
VL_MODULE(Vmips_core_rob_status_ifc) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ full;
    CData/*0:0*/ tag;

    // INTERNAL VARIABLES
    Vmips_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmips_core_rob_status_ifc(Vmips_core__Syms* symsp, const char* name);
    ~Vmips_core_rob_status_ifc();
    VL_UNCOPYABLE(Vmips_core_rob_status_ifc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
