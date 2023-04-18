// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core__Syms.h"
#include "Vmips_core___024root.h"

void Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(std::string e);
void Vmips_core___024unit____Vdpiimwrap_pc_event_TOP____024unit(IData/*31:0*/ pc);
void Vmips_core___024unit____Vdpiimwrap_wb_event_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data);
void Vmips_core___024unit____Vdpiimwrap_ls_event_TOP____024unit(IData/*31:0*/ op, IData/*31:0*/ addr, IData/*31:0*/ data);

VL_INLINE_OPT void Vmips_core___024root___sequent__TOP__1(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_he5ff5b59__0;
    CData/*3:0*/ mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_h076cd749__0;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0;
    CData/*0:0*/ __Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v1;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v2;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3;
    CData/*0:0*/ __Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v4;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v5;
    IData/*31:0*/ __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v6;
    CData/*5:0*/ __Vdly__mips_core__DOT__D_CACHE__DOT__r_index;
    CData/*3:0*/ __Vdly__mips_core__DOT__D_CACHE__DOT__databank_select;
    // Body
    __Vdly__mips_core__DOT__D_CACHE__DOT__r_index = vlSelf->mips_core__DOT__D_CACHE__DOT__r_index;
    __Vdly__mips_core__DOT__D_CACHE__DOT__databank_select 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select;
    __Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0 = 0U;
    __Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3 = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg = 0U;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
                    >> 1U)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                    >> 1U)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                    >> 2U)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                    >> 3U)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                    >> 1U)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                    >> 2U)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                    >> 3U)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr;
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = (0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                    >> 4U));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = (0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                    >> 4U));
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg 
        = (0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                    >> 4U));
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__r_index;
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("ic_miss"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("ds_miss"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("dec_overload"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("ex_overload"));
    }
    if (vlSelf->mips_core__DOT__lw_hazard) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("lw_hazard"));
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("dc_miss"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("if_stall"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("if_flush"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("dec_stall"));
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("dec_flush"));
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("ex_stall"));
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("mem_stall"));
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))) {
        Vmips_core___024unit____Vdpiimwrap_stats_event_TOP____024unit(
                                                                      std::string("mem_flush"));
    }
    if (vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw) {
        vlSelf->mips_core__DOT__REG_FILE__DOT__regs[vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr] 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data;
    }
    if (((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)) 
         & (2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i = 4U;
    }
    if (((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)) 
         & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
         [0U])) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i = 3U;
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__r_index;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__r_index;
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag;
    if (((((~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall)) 
           & (~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush))) 
          & (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid)) 
         & (0U != vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
        Vmips_core___024unit____Vdpiimwrap_pc_event_TOP____024unit(vlSymsp->TOP__mips_core__DOT__i2d_pc.pc);
    }
    if (vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw) {
        Vmips_core___024unit____Vdpiimwrap_wb_event_TOP____024unit(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr, vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data);
    }
    if (((IData)(vlSelf->mips_core__DOT__mem_done) 
         & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit))) {
        if (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action) {
            Vmips_core___024unit____Vdpiimwrap_ls_event_TOP____024unit(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action, vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr, 
                                                                       vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
                                                                       [
                                                                       (3U 
                                                                        & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                                           >> 2U))]);
        } else {
            Vmips_core___024unit____Vdpiimwrap_ls_event_TOP____024unit(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action, vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr, vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data);
        }
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data 
        = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                  [0U]);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
            >> 3U) & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr) 
                      == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
            >> 2U) & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr) 
                      == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
            >> 1U) & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr) 
                      == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
           & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr) 
              == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr)));
    if (vlSelf->rst_n) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready) 
                & (IData)(vlSelf->BVALID)) ? (IData)(vlSelf->BID)
                : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload));
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid 
            = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready)
                ? (IData)(vlSelf->BVALID) : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready) 
                & (IData)(vlSelf->BVALID)) ? (IData)(vlSelf->BID)
                : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id));
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready) 
                & (IData)(vlSelf->RVALID)) ? (((QData)((IData)(vlSelf->RID)) 
                                               << 0x21U) 
                                              | (((QData)((IData)(vlSelf->RLAST)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->RDATA))))
                : vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload);
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready) 
                & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid))
                ? vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload
                : vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload);
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready) 
                & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid))
                ? vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload
                : vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload);
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)
                    ? 0U : vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target);
        }
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready) 
                & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid))
                ? vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload
                : vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload);
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction = 0U;
        }
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid 
            = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready)
                ? (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid)
                : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid 
            = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready)
                ? (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid)
                : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch 
                = ((~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)) 
                   & ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump) 
                      & (~ (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump))));
        }
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid 
            = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready)
                ? (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid)
                : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
    } else {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction = 0U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid = 0U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch = 0U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid = 0U;
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
            >> 3U) & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr) 
                      == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
            >> 2U) & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr) 
                      == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
            >> 1U) & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr) 
                      == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
           & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr) 
              == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr)));
    if (vlSelf->rst_n) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid 
            = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready)
                ? (IData)(vlSelf->RVALID) : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id 
            = (((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready) 
                & (IData)(vlSelf->RVALID)) ? (IData)(vlSelf->RID)
                : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id));
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__e2m_pc.pc 
                = vlSymsp->TOP__mips_core__DOT__d2e_pc.pc;
        }
    } else {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid = 0U;
        vlSymsp->TOP__mips_core__DOT__e2m_pc.pc = 0U;
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word) 
           & ((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                        >> 4U)) == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index)));
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid 
                = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access;
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result 
                = vlSymsp->TOP__mips_core__DOT__ex_alu_output.result;
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid = 0U;
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result = 0U;
    }
    if (vlSelf->mips_core__DOT__I_CACHE__DOT__hit) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits 
            = (((~ ((IData)(1U) << (0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                             >> 4U)))) 
                & vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits) 
               | (0xffffffffULL & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit0) 
                                   << (0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                                >> 4U)))));
    }
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access 
                = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access;
            vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)
                    ? 0U : (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl));
            vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid 
                = ((~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)) 
                   & (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid));
            if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush) {
                vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 = 0U;
                vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2 = 0U;
            } else {
                vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                    = vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data;
                vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2 
                    = ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate)
                        ? vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate
                        : vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data);
            }
        }
        if ((1U & (~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall)))) {
            vlSymsp->TOP__mips_core__DOT__i2d_inst.valid 
                = ((~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush)) 
                   & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
        }
        if (((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)) 
             & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
             [0U])) {
            vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response = 1U;
        } else if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                   [0U]) {
            vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response = 0U;
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2 = 0U;
        vlSymsp->TOP__mips_core__DOT__i2d_inst.valid = 0U;
        vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response = 0U;
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag;
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data_flag 
        = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
            >> 1U) & ((0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                                >> 4U)) == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data_flag 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
           & ((0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                        >> 4U)) == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag;
    if (((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)) 
         & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
         [0U])) {
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
            [1U];
        __Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0 = 1U;
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v1 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
            [2U];
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v2 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
            [3U];
    }
    if (((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)) 
         & (2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state)))) {
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
            [0U];
        __Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3 = 1U;
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v4 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
            [1U];
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v5 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
            [2U];
        __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v6 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
            [3U];
    }
    if (__Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v0;
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v1;
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v2;
    }
    if (__Vdlyvset__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v3;
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v4;
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v5;
        vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3U] 
            = __Vdlyvval__mips_core__DOT__D_CACHE__DOT__shift_rdata__v6;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data 
                = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data;
            vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data 
                = vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data;
            vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw 
                = vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw;
            vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr 
                = vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr;
        } else {
            vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data = 0U;
            vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw = 0U;
            vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall)))) {
            vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush)
                    ? 0U : vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                   [(3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                           >> 2U))]);
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data = 0U;
        vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data = 0U;
        vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw = 0U;
        vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr = 0U;
        vlSymsp->TOP__mips_core__DOT__i2d_inst.data = 0U;
    }
    mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_h076cd749__0 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0U] 
        = mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_h076cd749__0;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready 
        = (1U & ((~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid)) 
                 | ((0U >= (1U & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id))) 
                    & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready
                    [(1U & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id))])));
    mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_he5ff5b59__0 
        = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid) 
           & (0U == (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0U] 
        = mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_he5ff5b59__0;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload;
    vlSelf->WLAST = (1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                   >> 0x20U)));
    vlSelf->WID = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                   >> 0x21U)));
    vlSelf->WDATA = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload);
    vlSelf->AWID = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                    >> 0x1eU)));
    vlSelf->AWLEN = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                     >> 0x1aU)));
    vlSelf->AWADDR = (0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload));
    vlSelf->ARID = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                    >> 0x1eU)));
    vlSelf->ARLEN = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                     >> 0x1aU)));
    vlSelf->ARADDR = (0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload));
    vlSelf->WVALID = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid;
    vlSelf->AWVALID = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid;
    vlSelf->ARVALID = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready 
        = (1U & ((~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid)) 
                 | vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready
                 [(1U & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id))]));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0U] 
        = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid) 
           & (0U == (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1U] 
        = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid) 
           & (1U == (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id)));
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_pc.pc 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)
                    ? 0U : vlSymsp->TOP__mips_core__DOT__i2d_pc.pc);
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access 
                = ((~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)) 
                   & (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access));
        }
        if ((0U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__I_CACHE__DOT__miss) {
                vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag 
                    = (0x1ffffU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                   >> 9U));
                vlSelf->mips_core__DOT__I_CACHE__DOT__r_index 
                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                >> 4U));
            }
        } else if ((1U != (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))) {
            if ((2U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))) {
                if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                    [0U]) {
                    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select 
                        = ((0xeU & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select) 
                                    << 1U)) | (1U & 
                                               ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select) 
                                                >> 3U)));
                    vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits 
                        = (((~ (1ULL << (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr))) 
                            & vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits) 
                           | ((QData)((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word)) 
                              << (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr)));
                }
            }
        }
        if ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__D_CACHE__DOT__miss) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag 
                    = (0xffffU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                  >> 0xaU));
                __Vdly__mips_core__DOT__D_CACHE__DOT__r_index 
                    = (0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                >> 4U));
            } else if ((1U & (~ (IData)(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action)))) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits 
                    = (vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits 
                       | ((QData)((IData)(1U)) << (0x3fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                      >> 4U))));
            }
        } else if ((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                [0U]) {
                __Vdly__mips_core__DOT__D_CACHE__DOT__databank_select 
                    = ((0xeU & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
                                << 1U)) | (1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
                                                 >> 3U)));
            }
        } else if ((4U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                [1U]) {
                __Vdly__mips_core__DOT__D_CACHE__DOT__databank_select 
                    = ((0xeU & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
                                << 1U)) | (1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
                                                 >> 3U)));
            }
            if (vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                    = (vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                       | ((QData)((IData)(1U)) << (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index)));
                vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits 
                    = ((~ (1ULL << (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index))) 
                       & vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits);
            }
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__d2e_pc.pc = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access = 0U;
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select = 1U;
        vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits = 0ULL;
        __Vdly__mips_core__DOT__D_CACHE__DOT__databank_select = 1U;
        vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits = 0ULL;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload
        [0U];
    vlSelf->BREADY = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload
        [1U];
    vlSelf->RREADY = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready;
    vlSelf->mips_core__DOT__D_CACHE__DOT__r_index = __Vdly__mips_core__DOT__D_CACHE__DOT__r_index;
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select 
        = __Vdly__mips_core__DOT__D_CACHE__DOT__databank_select;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid
        [1U];
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)
                    ? 0U : vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data);
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw 
                = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw;
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr 
                = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr;
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data = 0U;
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw = 0U;
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr = 0U;
    }
    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access = 0U;
    if (vlSymsp->TOP__mips_core__DOT__i2d_inst.valid) {
        if ((vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
             >> 0x1fU)) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access = 1U;
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 1U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
            } else if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1aU)))) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                }
            } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
            } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1aU)))) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 0U;
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 1U;
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 1U;
                        } else {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
            }
        } else {
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 1U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                } else if ((0x17U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                               >> 0xbU)))) {
                    if ((0x18U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0xbU)))) {
                        if ((0x19U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                 >> 0x1dU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((0x10U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                } else if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                    >> 1U)))) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                    }
                                }
                            } else if ((0x10U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                            } else if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                } else if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                }
                            } else if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 1U)))) {
                                    if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                    }
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 1U)))) {
                                if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 0U;
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 0x1aU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 4U)))) {
                                if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                                    } else if ((1U 
                                                & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 0x1aU)))) {
                                if ((0x17U == (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0x11U;
                                } else if ((0x18U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0x12U;
                                } else if ((0x19U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0x13U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                    = ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                        ? ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                            ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? 6U : 7U) : ((0x4000000U 
                                               & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                               ? 6U
                                               : 5U))
                        : ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                            ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? 9U : 8U) : ((0x4000000U 
                                               & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                               ? 2U
                                               : 1U)));
            } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                    = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                        ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                            ? 0x18U : 0x17U) : ((0x4000000U 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                 ? 0x16U
                                                 : 0x15U));
            } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                    = ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                        ? 6U : 0U);
            } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                    = ((0x10000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                        ? 0x19U : 0x1aU);
            } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                                    = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? 9U : 8U);
                            }
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                            = ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? 0x10U : 7U)
                                    : ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? 6U : 5U))
                                : ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? 4U : 3U) : 
                                   ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                     ? 2U : 1U)));
                    }
                }
            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                 >> 4U)))) {
                if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 1U)))) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                                = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? 6U : 0U);
                        }
                    }
                } else if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                            = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? 0xfU : 0xeU);
                    } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0xdU;
                    }
                } else if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl 
                        = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                            ? 0xcU : 0xbU);
                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0xaU;
                }
            }
        }
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump = 0U;
        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump = 1U;
                        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                             >> 0x1aU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 4U)))) {
                                    if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 1U)))) {
                                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 0U;
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 4U)))) {
                                        if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                         >> 1U)))) {
                                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 0U;
                    }
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 0U;
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 1U;
                    } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 1U;
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 1U;
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 5U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 1U)))) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 0U;
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 0U;
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 0U;
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 0U;
            }
        } else {
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 0U;
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 0U;
        }
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr = 0U;
        if ((vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
             >> 0x1fU)) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x10U)));
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)));
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                    }
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 0x1aU)))) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U));
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                = (0x1fU & ((0x4000000U 
                                             & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U)));
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                            = (0x1fU & ((0x8000000U 
                                         & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                         ? ((0x4000000U 
                                             & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U))
                                         : ((0x4000000U 
                                             & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U))));
                    }
                } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                        = (0x1fU & ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                     ? ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x15U)
                                         : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x15U))
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x15U)
                                         : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x15U))));
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1bU)))) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                        >> 0x15U));
                    } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                            = (0x1fU 
                                               & ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                    = (0x1fU & ((4U 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                 ? 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)))
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)))));
                            }
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 4U)))) {
                        if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 1U)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                        = (0x1fU & 
                                           ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U)));
                                }
                            }
                        } else if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                    = (0x1fU & ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                 ? 
                                                (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)
                                                 : 
                                                (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)));
                            } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x15U));
                            }
                        } else if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                = (0x1fU & ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U)
                                             : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U)));
                        } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 0x1aU)))) {
                                if ((0x17U == (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                                } else if ((0x18U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                                } else if ((0x19U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                 >> 0x1dU)))) {
                if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                        = (0x1fU & ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                     ? ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U)
                                         : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U))
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U)
                                         : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U))));
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1bU)))) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                        >> 0x10U));
                    } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                            = (0x1fU 
                                               & ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                    = (0x1fU & ((4U 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                 ? 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)))
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)))));
                            }
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 4U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 3U)))) {
                            if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                        = (0x1fU & 
                                           ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U)
                                             : (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U)));
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 0x1aU)))) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)));
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                = ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U))));
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                            = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U))))
                                : ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)))));
                    }
                } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                        = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                            ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)))
                                : (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U))))
                            : ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)))
                                : (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)))));
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1bU)))) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                            = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                               >> 0x15U)));
                    } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                            = ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                    = ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                            ? ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U))))
                                            : ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U)))))
                                        : ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                            ? ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U))))
                                            : ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x15U))))));
                            }
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 4U)))) {
                        if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 1U)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                        = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                            ? (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U)))
                                            : (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x15U))));
                                }
                            }
                        } else if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                    = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 0x15U)))
                                        : (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 0x15U))));
                            } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x15U)));
                            }
                        } else if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x10U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 0x10U))));
                        } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)));
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 0x1aU)))) {
                                if ((0x17U == (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 0x10U)));
                                } else if ((0x18U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 0x10U)));
                                } else if ((0x19U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 0x10U)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                 >> 0x1dU)))) {
                if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                        = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                            ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)))
                                : (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U))))
                            : ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)))
                                : (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)))));
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1bU)))) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                            = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                               >> 0x10U)));
                    } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                            = ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                    = ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                        ? ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                            ? ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U))))
                                            : ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U)))))
                                        : ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                            ? ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U))))
                                            : ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                       >> 0x10U))))));
                            }
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 4U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 3U)))) {
                            if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                        = ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                            ? (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U)))
                                            : (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                   >> 0x10U))));
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                     >> 0x10U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs = 0U;
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt = 0U;
    }
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall)))) {
            vlSymsp->TOP__mips_core__DOT__i2d_pc.pc 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush)
                    ? 0U : vlSymsp->TOP__mips_core__DOT__if_pc_current.pc);
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__i2d_pc.pc = 0U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0U] 
        = (QData)((IData)((0x10000000U | ((vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag 
                                           << 9U) | 
                                          ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                           << 4U)))));
    vlSelf->mips_core__DOT__I_CACHE__DOT__state = ((IData)(vlSelf->rst_n)
                                                    ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state)
                                                    : 0U);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1U] 
        = (0x40000000ULL | (QData)((IData)((0x10000000U 
                                            | (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                                << 0xaU) 
                                               | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                                  << 4U))))));
    vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word 
        = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select) 
            >> 3U) & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
           [0U]);
    vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
            >> 3U) & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
           [1U]);
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action 
                = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action;
            vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                = (0x3ffffffU & vlSymsp->TOP__mips_core__DOT__ex_alu_output.result);
        }
        vlSelf->mips_core__DOT__D_CACHE__DOT__state 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__next_state;
    } else {
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action = 1U;
        vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr = 0U;
        vlSelf->mips_core__DOT__D_CACHE__DOT__state = 0U;
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump) 
           & (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload
        [1U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word)
            ? ((2U & ((vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits 
                       >> (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index)) 
                      << 1U)) | (1U & (~ (vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits 
                                          >> (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index)))))
            : 0U);
    vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid = 0U;
    vlSymsp->TOP__mips_core__DOT__ex_alu_output.result = 0U;
    vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome = 0U;
    vlSelf->done = 0U;
    if (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid) {
        vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid = 1U;
        if ((0x10U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))) {
            if ((8U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))) {
                if (VL_UNLIKELY((4U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl)))) {
                    VL_WRITEF("%Nmips_core.ALU (%t) Illegal ALUCTL code %b\n",
                              vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                              -12,5,(IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl));
                } else if ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))) {
                    if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl)))) {
                        VL_WRITEF("%Nmips_core.ALU (%t) Illegal ALUCTL code %b\n",
                                  vlSymsp->name(),64,
                                  VL_TIME_UNITED_Q(1),
                                  -12,5,(IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl));
                    } else {
                        vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome 
                            = VL_GTS_III(32, 0U, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1);
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome 
                        = ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                            ? VL_LTES_III(32, 0U, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1)
                            : VL_LTS_III(32, 0U, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1));
                }
            } else if ((4U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))) {
                vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome 
                    = (1U & ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                              ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                  ? VL_GTES_III(32, 0U, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1)
                                  : (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                     != vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2))
                              : ((~ (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl)) 
                                 | (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                    == vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2))));
            } else if ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))) {
                if ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))) {
                    VL_WRITEF("%Nmips_core.ALU (%t) DONE test %x\n",
                              vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                              -12,32,vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2);
                    vlSelf->done = 1U;
                } else {
                    VL_WRITEF("%Nmips_core.ALU (%t) FAIL test %x\n",
                              vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                              -12,32,vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2);
                }
            } else if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl)))) {
                VL_WRITEF("%Nmips_core.ALU (%t) PASS test %x\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12,32,vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2);
            } else {
                vlSymsp->TOP__mips_core__DOT__ex_alu_output.result 
                    = (~ (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                          | vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2));
            }
        } else {
            vlSymsp->TOP__mips_core__DOT__ex_alu_output.result 
                = ((8U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                    ? ((4U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                        ? ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2, 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1))
                                : (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2 
                                   >> (0x1fU & vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1)))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2 
                                   << (0x1fU & vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1))
                                : ((0x1fU >= vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                    ? VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                    : (- (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                          >> 0x1fU)))))
                        : ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? ((0x1fU >= vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                    ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                       >> vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                    : 0U) : ((0x1fU 
                                              >= vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                              ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                                 << vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                              : 0U))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   < vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                : VL_LTS_III(32, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1, vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2))))
                    : ((4U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                        ? ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   ^ vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                : (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   | vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   & vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                : (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   - vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)))
                        : ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   - vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                : (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   + vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1 
                                   + vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2)
                                : 0U))));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw 
                = ((~ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)) 
                   & (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw));
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush)
                    ? 0U : (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr));
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw = 0U;
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr = 0U;
    }
    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate = 0U;
    if (vlSymsp->TOP__mips_core__DOT__i2d_inst.valid) {
        if ((vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
             >> 0x1fU)) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__7__immediate 
                                    = VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__mips_core__DOT__i2d_inst.data));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__7__immediate;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__13__immediate 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__13__immediate;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                             >> 0x1eU)))) {
            if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__19__immediate 
                                = (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                   << 0x10U);
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__19__immediate;
                        } else {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__25__immediate 
                                = (0xffffU & vlSymsp->TOP__mips_core__DOT__i2d_inst.data);
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__25__immediate;
                        }
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__31__immediate 
                            = (0xffffU & vlSymsp->TOP__mips_core__DOT__i2d_inst.data);
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__31__immediate;
                    } else {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__37__immediate 
                            = (0xffffU & vlSymsp->TOP__mips_core__DOT__i2d_inst.data);
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__37__immediate;
                    }
                } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__43__immediate 
                            = VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & vlSymsp->TOP__mips_core__DOT__i2d_inst.data));
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__43__immediate;
                    } else {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__49__immediate 
                            = VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & vlSymsp->TOP__mips_core__DOT__i2d_inst.data));
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__49__immediate;
                    }
                } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__55__immediate 
                        = VL_EXTENDS_II(32,16, (0xffffU 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data));
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__55__immediate;
                } else {
                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__61__immediate 
                        = VL_EXTENDS_II(32,16, (0xffffU 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data));
                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__61__immediate;
                }
            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                 >> 0x1cU)))) {
                if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__71__immediate 
                            = ((IData)(8U) + vlSymsp->TOP__mips_core__DOT__i2d_pc.pc);
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__71__immediate;
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 5U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 1U)))) {
                                        if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__126__immediate 
                                                = ((IData)(8U) 
                                                   + vlSymsp->TOP__mips_core__DOT__i2d_pc.pc);
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__126__immediate;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 >> 2U)))) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__148__immediate 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 6U));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__148__immediate;
                                    } else {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__154__immediate 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 6U));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__154__immediate;
                                    }
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__160__immediate 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 6U));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__160__immediate;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target = 0U;
        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target 
                            = (0x3ffffffU & ((0x8000000U 
                                              & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                              ? ((0x4000000U 
                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_pc.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) 
                                                    << 2U)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_pc.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) 
                                                    << 2U))))
                                              : ((0x4000000U 
                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_pc.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) 
                                                    << 2U)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__i2d_pc.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) 
                                                    << 2U))))));
                    } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target 
                            = ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)
                                ? (0x3fffffcU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 << 2U))
                                : (0x3fffffcU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                 << 2U)));
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target 
                            = (0x3ffffffU & ((IData)(4U) 
                                             + (vlSymsp->TOP__mips_core__DOT__i2d_pc.pc 
                                                + (
                                                   VL_EXTENDS_II(26,16, 
                                                                 (0xffffU 
                                                                  & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) 
                                                   << 2U))));
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target = 0U;
    }
    vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
        = ((IData)(vlSelf->rst_n) ? vlSymsp->TOP__mips_core__DOT__if_pc_next.pc
            : 0U);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0U] 
        = (1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state));
    if (vlSelf->rst_n) {
        if (vlSelf->mips_core__DOT__mem_done) {
            vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action 
                = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush) 
                   | (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action));
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action = 1U;
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload 
        = (((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
            & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch)) 
           & ((IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction) 
              != (IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome)));
    if ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata 
            = vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data;
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr 
            = (0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                        >> 4U));
    } else {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata 
            = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                      [1U]);
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr 
            = (0x3fU & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index));
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
            >> 3U) & (2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0U] 
        = (1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0U] 
        = (2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1U] 
        = (3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state));
    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw = 0U;
    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr = 0U;
    if (vlSymsp->TOP__mips_core__DOT__i2d_inst.valid) {
        if ((vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
             >> 0x1fU)) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__11__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__11__rw));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__11__rw;
                            }
                        }
                    }
                }
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action = 1U;
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action = 1U;
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__18__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__18__rw));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__18__rw;
                            } else {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__23__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__23__rw));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__23__rw;
                            }
                        } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__29__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__29__rw));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__29__rw;
                        } else {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__35__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__35__rw));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__35__rw;
                        }
                    } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__41__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__41__rw));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__41__rw;
                        } else {
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__47__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__47__rw));
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__47__rw;
                        }
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__53__rw 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                        >> 0x10U));
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__53__rw));
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__53__rw;
                    } else {
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__59__rw 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                        >> 0x10U));
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__59__rw));
                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__59__rw;
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw = 1U;
                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr = 0x1fU;
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                         >> 0x1aU)))) {
                        if ((0x20U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                          >> 4U)))) {
                                if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 2U)))) {
                                        if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                            if ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__78__rw 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                        >> 0xbU));
                                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                                    = 
                                                    (0U 
                                                     != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__78__rw));
                                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__78__rw;
                                            } else {
                                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__83__rw 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                        >> 0xbU));
                                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                                    = 
                                                    (0U 
                                                     != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__83__rw));
                                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__83__rw;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__88__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__88__rw));
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__88__rw;
                                        } else {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__93__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__93__rw));
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__93__rw;
                                        }
                                    } else if ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__98__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__98__rw));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__98__rw;
                                    } else {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__103__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__103__rw));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__103__rw;
                                    }
                                } else if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__108__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__108__rw));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__108__rw;
                                    } else {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__113__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__113__rw));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__113__rw;
                                    }
                                } else if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__118__rw 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0xbU));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                        = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__118__rw));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__118__rw;
                                } else {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__123__rw 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0xbU));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                        = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__123__rw));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__123__rw;
                                }
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                             >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 1U)))) {
                                        if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw = 1U;
                                            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr = 0x1fU;
                                        }
                                    }
                                }
                            } else if ((4U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__132__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__132__rw));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__132__rw;
                                    } else {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__137__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__137__rw));
                                        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__137__rw;
                                    }
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__142__rw 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0xbU));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                        = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__142__rw));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__142__rw;
                                }
                            } else if ((2U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                if ((1U & vlSymsp->TOP__mips_core__DOT__i2d_inst.data)) {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__146__rw 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0xbU));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                        = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__146__rw));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__146__rw;
                                } else {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__152__rw 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                            >> 0xbU));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                        = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__152__rw));
                                    vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__152__rw;
                                }
                            } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__i2d_inst.data))) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__158__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__i2d_inst.data 
                                                >> 0xbU));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__158__rw));
                                vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__158__rw;
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action = 1U;
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action = 1U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0U] 
        = (((QData)((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word)) 
            << 0x20U) | (QData)((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                        [0U])));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid
        [1U];
    vlSelf->mips_core__DOT__lw_hazard = ((((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
                                           & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw)) 
                                          & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access)) 
                                         & (((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs) 
                                             & ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr) 
                                                == (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr))) 
                                            | ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt) 
                                               & ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr) 
                                                  == (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr)))));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid = 0U;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid = 1U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id = 0U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id = 0U;
    } else {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id = 0U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid = 0U;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid = 1U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id = 0U;
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id = 0U;
    } else {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id = 0U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid = 0U;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid
        [1U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid = 1U;
    }
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid = 1U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload = 0ULL;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid
        [1U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload
            [1U];
    }
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload
            [0U];
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id = 0U;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid
        [1U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id = 1U;
    }
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id = 0U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload = 0ULL;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload
            [0U];
    }
}

VL_INLINE_OPT void Vmips_core___024root___multiclk__TOP__0(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___multiclk__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rs;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rt;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rs_addr;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rt_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__uses_rs;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__rs_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__uses_rt;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__rt_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__uses_rs;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__uses_rt;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__rs_addr;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__rt_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__uses_rs;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__rs_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__uses_rt;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__rt_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__uses_rs;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__uses_rt;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__rs_addr;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__rt_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__uses_rs;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__rs_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__d_source;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__uses_rt;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__rt_addr;
    CData/*0:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__condition;
    CData/*4:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__r_source;
    IData/*31:0*/ __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__d_source;
    // Body
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata[1U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata[0U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag)
            ? (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data)
            : (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data);
    vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
           [(3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                   >> 2U))] : vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result);
    vlSelf->mips_core__DOT__I_CACHE__DOT__hit0 = (((IData)(
                                                           (vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits 
                                                            >> 
                                                            (0x3eU 
                                                             & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                                                >> 3U)))) 
                                                   & ((0x1ffffU 
                                                       & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                                          >> 9U)) 
                                                      == 
                                                      vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata
                                                      [0U])) 
                                                  & (0U 
                                                     == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__hit1 = (((IData)(
                                                           (vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(1U) 
                                                                + 
                                                                (0x3eU 
                                                                 & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                                                    >> 3U)))))) 
                                                   & ((0x1ffffU 
                                                       & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                                          >> 9U)) 
                                                      == 
                                                      vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata
                                                      [1U])) 
                                                  & (0U 
                                                     == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__hit = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit0) 
                                                 | (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit1));
    vlSelf->mips_core__DOT__I_CACHE__DOT__miss = (1U 
                                                  & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0U] 
        = (QData)((IData)((0x10000000U | (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                           << 0xaU) 
                                          | (0x3f0U 
                                             & vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr)))));
    vlSelf->mips_core__DOT__D_CACHE__DOT__hit = ((((IData)(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid) 
                                                   & (IData)(
                                                             (vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                                                              >> 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                                  >> 4U))))) 
                                                  & ((0xffffU 
                                                      & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                         >> 0xaU)) 
                                                     == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__miss = ((IData)(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid) 
                                                  & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)));
    vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs)
            ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
           [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr]
            : 0U);
    if (vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data 
            = vlSelf->mips_core__DOT__REG_FILE__DOT__regs
            [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr];
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__d_source 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__r_source 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__condition 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rt_addr 
            = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rs_addr 
            = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rt = 1U;
    } else {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data = 0U;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__d_source 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__r_source 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__condition 
            = vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rt_addr 
            = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rs_addr 
            = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr;
        __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rt = 0U;
    }
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rs 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__d_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__d_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__r_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__r_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__condition 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__condition;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__rs_addr 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rs_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__uses_rs 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rs;
    if ((((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__uses_rs) 
          & ((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__rs_addr) 
             == (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__r_source))) 
         & (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__condition))) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data 
            = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__162__d_source;
    }
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__d_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__d_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__r_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__r_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__condition 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__condition;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__rt_addr 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__rt_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__uses_rt 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__161__uses_rt;
    if ((((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__uses_rt) 
          & ((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__rt_addr) 
             == (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__r_source))) 
         & (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__condition))) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data 
            = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__163__d_source;
    }
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__d_source 
        = vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__r_source 
        = vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__condition 
        = vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__rt_addr 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__rs_addr 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__uses_rt 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__uses_rs 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__d_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__d_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__r_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__r_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__condition 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__condition;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__rs_addr 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__rs_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__uses_rs 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__uses_rs;
    if ((((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__uses_rs) 
          & ((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__rs_addr) 
             == (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__r_source))) 
         & (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__condition))) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data 
            = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__165__d_source;
    }
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__d_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__d_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__r_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__r_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__condition 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__condition;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__rt_addr 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__rt_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__uses_rt 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__164__uses_rt;
    if ((((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__uses_rt) 
          & ((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__rt_addr) 
             == (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__r_source))) 
         & (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__condition))) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data 
            = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__166__d_source;
    }
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__d_source 
        = vlSymsp->TOP__mips_core__DOT__ex_alu_output.result;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__r_source 
        = vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__condition 
        = (((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
            & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw)) 
           & (~ (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access)));
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__rt_addr 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__rs_addr 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__uses_rt 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__uses_rs 
        = vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__d_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__d_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__r_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__r_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__condition 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__condition;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__rs_addr 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__rs_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__uses_rs 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__uses_rs;
    if ((((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__uses_rs) 
          & ((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__rs_addr) 
             == (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__r_source))) 
         & (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__condition))) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data 
            = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rs__168__d_source;
    }
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__d_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__d_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__r_source 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__r_source;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__condition 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__condition;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__rt_addr 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__rt_addr;
    __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__uses_rt 
        = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward__167__uses_rt;
    if ((((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__uses_rt) 
          & ((IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__rt_addr) 
             == (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__r_source))) 
         & (IData)(__Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__condition))) {
        vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data 
            = __Vtask_mips_core__DOT__FORWARD_UNIT__DOT__check_forward_rt__169__d_source;
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit)));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss 
        = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss) 
           & (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload
        [0U];
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we = 0U;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
        [1U]) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select;
    } else if (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit) 
                & (~ (IData)(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we 
            = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
               | (0xfU & ((IData)(1U) << (3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                >> 2U)))));
    }
    vlSelf->mips_core__DOT__mem_done = (1U & ((~ (IData)(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access)) 
                                              | (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)));
    vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target 
        = (0x3ffffffU & ((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg)
                          ? vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data
                          : vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush = 0U;
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush = 1U;
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush = 1U;
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush = 0U;
    if (((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss) 
         | (IData)(vlSelf->mips_core__DOT__lw_hazard))) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush = 1U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload = 0ULL;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload
            [0U];
    }
    vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
        = (0x3ffffffU & ((IData)(vlSelf->mips_core__DOT__mem_done)
                          ? vlSymsp->TOP__mips_core__DOT__ex_alu_output.result
                          : vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall = 0U;
    if (((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss) 
         | (IData)(vlSelf->mips_core__DOT__lw_hazard))) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall = 1U;
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall = 0U;
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall = 1U;
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall = 0U;
    }
    if (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall) {
        vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall = 1U;
    }
    vlSymsp->TOP__mips_core__DOT__if_pc_next.pc = (0x3ffffffU 
                                                   & ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall)
                                                       ? vlSymsp->TOP__mips_core__DOT__if_pc_current.pc
                                                       : 
                                                      (((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                                                        | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload))
                                                        ? 
                                                       ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload)
                                                         ? vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target
                                                         : vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target)
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSymsp->TOP__mips_core__DOT__if_pc_current.pc))));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we 
        = (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
           [0U] ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select)
            : 0U);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr 
        = (0x3fU & (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                     << 1U) + (1U & (vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits 
                                     >> (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index)))));
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr 
        = (0x3fU & ((0U != (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))
                     ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr)
                     : ((0x3eU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                                  >> 3U)) + (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit1))));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vmips_core__ConstPool__TABLE_h561948b9_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vmips_core__ConstPool__TABLE_h052b3883_0;

VL_INLINE_OPT void Vmips_core___024root___combo__TOP__1(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___combo__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word) 
                     << 4U) | ((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                [0U] << 3U) | (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__miss) 
                                                << 2U) 
                                               | (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
    if (Vmips_core__ConstPool__TABLE_h561948b9_0[__Vtableidx1]) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__next_state 
            = Vmips_core__ConstPool__TABLE_h052b3883_0
            [__Vtableidx1];
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__next_state 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__state;
    if ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
        if (vlSelf->mips_core__DOT__D_CACHE__DOT__miss) {
            vlSelf->mips_core__DOT__D_CACHE__DOT__next_state 
                = ((1U & ((IData)((vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                                   >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                >> 4U)))) 
                          & (IData)((vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits 
                                     >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                                  >> 4U))))))
                    ? 1U : 3U);
        }
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr 
            = (0x3fU & ((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state))
                         ? (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                            >> 4U) : (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                                      >> 4U)));
    } else {
        if ((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                [0U]) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__next_state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word) 
                 & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                 [0U])) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__next_state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                [1U]) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__next_state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
            if (vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word) {
                vlSelf->mips_core__DOT__D_CACHE__DOT__next_state = 0U;
            }
        }
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr 
            = (0x3fU & ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state))
                         ? (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                            >> 4U) : (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index)));
    }
}
