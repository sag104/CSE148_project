// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core___024root.h"

VL_ATTR_COLD void Vmips_core___024root___eval_initial(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vmips_core___024root___settle__TOP__0(Vmips_core___024root* vlSelf);

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
    vlSelf->mips_core__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__lw_hazard = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__I_CACHE__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->mips_core__DOT__I_CACHE__DOT__r_index = VL_RAND_RESET_I(6);
    vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag = VL_RAND_RESET_I(16);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select = VL_RAND_RESET_I(4);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits = VL_RAND_RESET_Q(64);
    vlSelf->mips_core__DOT__I_CACHE__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word = VL_RAND_RESET_I(1);
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
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->mips_core__DOT__REG_FILE__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
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
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall = VL_RAND_RESET_I(1);
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush = VL_RAND_RESET_I(1);
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
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__7__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__11__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__13__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__18__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__19__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__23__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__25__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__29__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__31__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__35__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__37__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__41__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__43__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__47__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__49__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__53__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__55__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__59__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__61__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__71__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__78__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__83__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__88__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__93__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__98__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__103__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__108__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__113__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__118__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__123__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__126__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__132__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__137__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__142__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__146__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__148__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__152__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__154__immediate = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__158__rw = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__160__immediate = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
