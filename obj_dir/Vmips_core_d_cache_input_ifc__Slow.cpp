// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core__Syms.h"
#include "Vmips_core_d_cache_input_ifc.h"

void Vmips_core_d_cache_input_ifc___ctor_var_reset(Vmips_core_d_cache_input_ifc* vlSelf);

Vmips_core_d_cache_input_ifc::Vmips_core_d_cache_input_ifc(Vmips_core__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmips_core_d_cache_input_ifc___ctor_var_reset(this);
}

void Vmips_core_d_cache_input_ifc::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmips_core_d_cache_input_ifc::~Vmips_core_d_cache_input_ifc() {
}
