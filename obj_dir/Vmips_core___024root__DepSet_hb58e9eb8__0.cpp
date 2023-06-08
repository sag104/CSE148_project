// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core___024root.h"

VL_INLINE_OPT void Vmips_core___024root___sequent__TOP__2(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___sequent__TOP__2\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg] 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
        vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem
            [vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg];
    }
}

void Vmips_core___024root___sequent__TOP__0(Vmips_core___024root* vlSelf);
void Vmips_core___024root___sequent__TOP__1(Vmips_core___024root* vlSelf);
void Vmips_core___024root___combo__TOP__0(Vmips_core___024root* vlSelf);
void Vmips_core___024root___multiclk__TOP__0(Vmips_core___024root* vlSelf);
void Vmips_core___024root___combo__TOP__1(Vmips_core___024root* vlSelf);

void Vmips_core___024root___eval(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmips_core___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vmips_core___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vmips_core___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vmips_core___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vmips_core___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vmips_core___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vmips_core___024root___change_request_1(Vmips_core___024root* vlSelf);

VL_INLINE_OPT QData Vmips_core___024root___change_request(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___change_request\n"); );
    // Body
    return (Vmips_core___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vmips_core___024root___eval_debug_assertions(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->AWREADY & 0xfeU))) {
        Verilated::overWidthError("AWREADY");}
    if (VL_UNLIKELY((vlSelf->WREADY & 0xfeU))) {
        Verilated::overWidthError("WREADY");}
    if (VL_UNLIKELY((vlSelf->BVALID & 0xfeU))) {
        Verilated::overWidthError("BVALID");}
    if (VL_UNLIKELY((vlSelf->BID & 0xf0U))) {
        Verilated::overWidthError("BID");}
    if (VL_UNLIKELY((vlSelf->ARREADY & 0xfeU))) {
        Verilated::overWidthError("ARREADY");}
    if (VL_UNLIKELY((vlSelf->RVALID & 0xfeU))) {
        Verilated::overWidthError("RVALID");}
    if (VL_UNLIKELY((vlSelf->RLAST & 0xfeU))) {
        Verilated::overWidthError("RLAST");}
    if (VL_UNLIKELY((vlSelf->RID & 0xf0U))) {
        Verilated::overWidthError("RID");}
}
#endif  // VL_DEBUG
