// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core_alu_output_ifc.h"

VL_ATTR_COLD void Vmips_core_alu_output_ifc___ctor_var_reset(Vmips_core_alu_output_ifc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmips_core_alu_output_ifc___ctor_var_reset\n"); );
    // Body
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->branch_outcome = VL_RAND_RESET_I(1);
}
