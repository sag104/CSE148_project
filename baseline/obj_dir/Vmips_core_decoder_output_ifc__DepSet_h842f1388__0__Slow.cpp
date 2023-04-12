// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core_decoder_output_ifc.h"

VL_ATTR_COLD void Vmips_core_decoder_output_ifc___ctor_var_reset(Vmips_core_decoder_output_ifc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmips_core_decoder_output_ifc___ctor_var_reset\n"); );
    // Body
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->alu_ctl = VL_RAND_RESET_I(5);
    vlSelf->is_branch_jump = VL_RAND_RESET_I(1);
    vlSelf->is_jump = VL_RAND_RESET_I(1);
    vlSelf->is_jump_reg = VL_RAND_RESET_I(1);
    vlSelf->branch_target = VL_RAND_RESET_I(26);
    vlSelf->is_mem_access = VL_RAND_RESET_I(1);
    vlSelf->mem_action = VL_RAND_RESET_I(1);
    vlSelf->uses_rs = VL_RAND_RESET_I(1);
    vlSelf->rs_addr = VL_RAND_RESET_I(5);
    vlSelf->uses_rt = VL_RAND_RESET_I(1);
    vlSelf->rt_addr = VL_RAND_RESET_I(5);
    vlSelf->uses_immediate = VL_RAND_RESET_I(1);
    vlSelf->immediate = VL_RAND_RESET_I(32);
    vlSelf->uses_rw = VL_RAND_RESET_I(1);
    vlSelf->rw_addr = VL_RAND_RESET_I(5);
}
