// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core_mem_res_stat_status_ifc.h"

VL_ATTR_COLD void Vmips_core_mem_res_stat_status_ifc___ctor_var_reset(Vmips_core_mem_res_stat_status_ifc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmips_core_mem_res_stat_status_ifc___ctor_var_reset\n"); );
    // Body
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->ld_ready = VL_RAND_RESET_I(1);
}
