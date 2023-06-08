// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_core.h for the primary calling header

#ifndef VERILATED_VMIPS_CORE_REGISTER_RENAME_IFC_H_
#define VERILATED_VMIPS_CORE_REGISTER_RENAME_IFC_H_  // guard

#include "verilated.h"

class Vmips_core__Syms;
VL_MODULE(Vmips_core_register_rename_ifc) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*5:0*/ rs_phy;
    CData/*0:0*/ rs_ready;
    CData/*0:0*/ rs_tag;
    CData/*5:0*/ rt_phy;
    CData/*0:0*/ rt_ready;
    CData/*0:0*/ rt_tag;
    CData/*5:0*/ rw_phy;

    // INTERNAL VARIABLES
    Vmips_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmips_core_register_rename_ifc(Vmips_core__Syms* symsp, const char* name);
    ~Vmips_core_register_rename_ifc();
    VL_UNCOPYABLE(Vmips_core_register_rename_ifc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
