// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core___024root.h"

VL_ATTR_COLD void Vmips_core___024root___initial__TOP__0(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__counter = 0U;
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i)) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__bht_gshare[(0xfffU 
                                                                                & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i)] = 1U;
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__bht_chooser[(0xfffU 
                                                                                & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i)] = 1U;
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vmips_core___024root___eval_initial(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vmips_core___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmips_core___024root___settle__TOP__0(Vmips_core___024root* vlSelf);
VL_ATTR_COLD void Vmips_core___024root___settle__TOP__1(Vmips_core___024root* vlSelf);

VL_ATTR_COLD void Vmips_core___024root___eval_settle(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___eval_settle\n"); );
    // Body
    Vmips_core___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vmips_core___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vmips_core___024root___final(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___final\n"); );
}

VL_ATTR_COLD void Vmips_core___024root___ctor_var_reset(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->AWREADY = VL_RAND_RESET_I(1);
    vlSelf->AWVALID = VL_RAND_RESET_I(1);
    vlSelf->AWID = VL_RAND_RESET_I(4);
    vlSelf->AWLEN = VL_RAND_RESET_I(4);
    vlSelf->AWADDR = VL_RAND_RESET_I(26);
    vlSelf->WREADY = VL_RAND_RESET_I(1);
    vlSelf->WVALID = VL_RAND_RESET_I(1);
    vlSelf->WLAST = VL_RAND_RESET_I(1);
    vlSelf->WID = VL_RAND_RESET_I(4);
    vlSelf->WDATA = VL_RAND_RESET_I(32);
    vlSelf->BREADY = VL_RAND_RESET_I(1);
    vlSelf->BVALID = VL_RAND_RESET_I(1);
    vlSelf->BID = VL_RAND_RESET_I(4);
    vlSelf->ARREADY = VL_RAND_RESET_I(1);
    vlSelf->ARVALID = VL_RAND_RESET_I(1);
    vlSelf->ARID = VL_RAND_RESET_I(4);
    vlSelf->ARLEN = VL_RAND_RESET_I(4);
    vlSelf->ARADDR = VL_RAND_RESET_I(26);
    vlSelf->RREADY = VL_RAND_RESET_I(1);
    vlSelf->RVALID = VL_RAND_RESET_I(1);
    vlSelf->RLAST = VL_RAND_RESET_I(1);
    vlSelf->RID = VL_RAND_RESET_I(4);
    vlSelf->RDATA = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__I_CACHE__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__I_CACHE__DOT__r_index = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select = VL_RAND_RESET_I(4);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_tag = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_tag_output = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_wr_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_wdata = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits = VL_RAND_RESET_Q(64);
    vlSelf->mips_core__DOT__I_CACHE__DOT__main_cache_hit = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__empty = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(135, vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer[__Vi0]);
    }
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__ch_wr_ptr = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__ch_rd_ptr = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_phy_rob_tag[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_ready = VL_RAND_RESET_Q(64);
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__avail_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk6__DOT__j = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk8__DOT__j = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk4__DOT__k = 0;
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT____Vlvbound_hd1090cd5__0 = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT____Vlvbound_h52e43eaf__0 = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__INSTRUCTION_TYPE = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(73, vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo[__Vi0]);
    }
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__empty_spot = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__input_inst_type = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__REG_FILE__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(75, vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table[__Vi0]);
    }
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__write_index = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__unnamedblk3__DOT__a = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(103, vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue[__Vi0] = VL_RAND_RESET_Q(33);
    }
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__sq_wr_ptr = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__sq_rd_ptr = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty_spot = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__st_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ld_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_input_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_action_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_reg = VL_RAND_RESET_I(26);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_next_reg = VL_RAND_RESET_I(26);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__data_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__tag_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__unnamedblk1__DOT__a = 0;
    vlSelf->mips_core__DOT__D_CACHE__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->mips_core__DOT__D_CACHE__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__r_index = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select = VL_RAND_RESET_I(4);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we = VL_RAND_RESET_I(4);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits = VL_RAND_RESET_Q(64);
    vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__JR_STATE_LOGIC = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(67, vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer[__Vi0]);
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_wr_ptr = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dc_miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__inst_q_full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__rob_full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__alu_res_full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__mem_res_full = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ld_ready_st_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_state = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_flush = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__mem_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__mem_flush = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__TAKEN_COUNTER = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__GSHARE_VS_2BIT_COUNTER = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__bht_chooser[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__bht_gshare[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory = VL_RAND_RESET_I(12);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_gshare = VL_RAND_RESET_I(12);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_chooser = VL_RAND_RESET_I(12);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_gshare = VL_RAND_RESET_I(12);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_chooser = VL_RAND_RESET_I(12);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_pred = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__two_bit_local_pred = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__chooser_pred = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_correct = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__cur_pred = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload = VL_RAND_RESET_Q(34);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload = VL_RAND_RESET_Q(37);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload = VL_RAND_RESET_Q(34);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[__Vi0] = VL_RAND_RESET_Q(37);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload = VL_RAND_RESET_Q(34);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload = VL_RAND_RESET_Q(37);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload = VL_RAND_RESET_I(4);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id = VL_RAND_RESET_I(4);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload = VL_RAND_RESET_Q(34);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id = VL_RAND_RESET_I(32);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload = VL_RAND_RESET_Q(37);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__6__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__10__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__12__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__17__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__18__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__22__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__24__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__28__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__30__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__34__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__36__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__40__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__42__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__46__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__48__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__52__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__54__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__58__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__60__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__70__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__77__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__82__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__87__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__92__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__97__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__102__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__107__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__112__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__117__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__122__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__125__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__131__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__136__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__141__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__145__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__147__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__151__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__153__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__157__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__159__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__162__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__163__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__164__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__165__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__Vfuncout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vchglast__TOP__mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(67, vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output);
    vlSelf->__Vchglast__TOP__mips_core__DOT__d_hc__stall = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
