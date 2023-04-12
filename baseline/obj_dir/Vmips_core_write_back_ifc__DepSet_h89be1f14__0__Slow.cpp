// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core_write_back_ifc.h"

VL_ATTR_COLD void Vmips_core_write_back_ifc___ctor_var_reset(Vmips_core_write_back_ifc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmips_core_write_back_ifc___ctor_var_reset\n"); );
    // Body
    vlSelf->uses_rw = VL_RAND_RESET_I(1);
    vlSelf->rw_addr = VL_RAND_RESET_I(5);
    vlSelf->rw_data = VL_RAND_RESET_I(32);
}
