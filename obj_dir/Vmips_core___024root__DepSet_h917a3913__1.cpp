// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core__Syms.h"
#include "Vmips_core___024root.h"

VL_INLINE_OPT void Vmips_core___024root___multiclk__TOP__0(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___multiclk__TOP__0\n"); );
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
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0U] 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag)
            ? (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data)
            : (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data));
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag)
            ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data)
            : (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data));
    vlSymsp->TOP__mips_core__DOT__d_cache_output.data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
        [(3U & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                >> 2U))];
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[0U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
        [0U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[1U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
        [1U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[2U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
        [2U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[3U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
        [3U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0U] 
        = (QData)((IData)((0x10000000U | (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                           << 0xaU) 
                                          | (0x3f0U 
                                             & vlSymsp->TOP__mips_core__DOT__d_cache_input.addr)))));
    vlSelf->mips_core__DOT__D_CACHE__DOT__hit = ((((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
                                                   & (IData)(
                                                             (vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                                                              >> 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                                                  >> 4U))))) 
                                                  & ((0xffffU 
                                                      & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                                         >> 0xaU)) 
                                                     == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__miss = ((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
                                                  & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_wr_en 
        = ((IData)((vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits 
                    >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                 >> 4U)))) & ((0xffffU 
                                               & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                                  >> 0xaU)) 
                                              != (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata)));
    vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[0U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline
        [0U];
    vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[1U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline
        [1U];
    vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[2U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline
        [2U];
    vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[3U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline
        [3U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload
        [0U];
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we = 0U;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
        [1U]) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we 
            = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select;
    } else if (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit) 
                & (~ (IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action)))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we 
            = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
               | (0xfU & ((IData)(1U) << (3U & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                                >> 2U)))));
    }
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dc_miss 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
           & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)));
    vlSymsp->TOP__mips_core__DOT__m_hc.stall = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dc_miss;
    vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid 
        = (((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
            & (IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action)) 
           & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
    vlSymsp->TOP__mips_core__DOT__cdb_output.valid 
        = ((IData)(vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid) 
           | (IData)(vlSymsp->TOP__mips_core__DOT__alu_output.valid));
    vlSymsp->TOP__mips_core__DOT__cdb_output.tag = 
        (1U & (IData)((((IData)(vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid)
                         ? (((QData)((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.tag)) 
                             << 0x20U) | (QData)((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_output.data)))
                         : ((IData)(vlSymsp->TOP__mips_core__DOT__alu_output.valid)
                             ? (((QData)((IData)(vlSymsp->TOP__mips_core__DOT__alu_output.tag)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__mips_core__DOT__alu_output.result)))
                             : 0ULL)) >> 0x20U)));
    vlSymsp->TOP__mips_core__DOT__cdb_output.data = (IData)(
                                                            ((IData)(vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid)
                                                              ? 
                                                             (((QData)((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.tag)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_output.data)))
                                                              : 
                                                             ((IData)(vlSymsp->TOP__mips_core__DOT__alu_output.valid)
                                                               ? 
                                                              (((QData)((IData)(vlSymsp->TOP__mips_core__DOT__alu_output.tag)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSymsp->TOP__mips_core__DOT__alu_output.result)))
                                                               : 0ULL)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload = 0ULL;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload
            [0U];
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vmips_core__ConstPool__TABLE_h3c90c2a4_0;

VL_INLINE_OPT void Vmips_core___024root___combo__TOP__1(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___combo__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j)) {
            if ((((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata) 
                  == vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag
                  [(3U & vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j)]) 
                 & vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                 [(3U & vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j)])) {
                vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim 
                    = (3U & vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j);
                vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit = 1U;
                vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[(3U 
                                                                                & vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j)] = 0U;
                vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[0U] 
                    = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1
                    [vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim];
                vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[1U] 
                    = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2
                    [vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim];
                vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[2U] 
                    = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3
                    [vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim];
                vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[3U] 
                    = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4
                    [vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim];
                goto __Vlabel15;
            }
            vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j 
                = ((IData)(1U) + vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j);
        }
        __Vlabel15: ;
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__next_state 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__state;
    if ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
        if (vlSelf->mips_core__DOT__D_CACHE__DOT__miss) {
            vlSelf->mips_core__DOT__D_CACHE__DOT__next_state 
                = ((1U & ((IData)((vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                                   >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                                >> 4U)))) 
                          & (IData)((vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits 
                                     >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                                  >> 4U))))))
                    ? 1U : 3U);
        }
    } else if ((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
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
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[0U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out
        [0U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[1U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out
        [1U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[2U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out
        [2U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[3U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out
        [3U];
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_wdata 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit)
            ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_tag)
            : (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag));
    vlSelf->mips_core__DOT__I_CACHE__DOT__main_cache_hit 
        = ((IData)((vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits 
                    >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                 >> 4U)))) & ((0xffffU 
                                               & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                                  >> 0xaU)) 
                                              == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__hit = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__main_cache_hit) 
                                                  | (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__miss = (1U 
                                                  & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit)));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr 
        = (0x3fU & ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))
                     ? ((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state))
                         ? (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                            >> 4U) : (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
                                      >> 4U)) : ((0U 
                                                  == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state))
                                                  ? 
                                                 (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
                                                  >> 4U)
                                                  : (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index))));
    if (vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit) {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[0U] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline
            [0U];
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[1U] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline
            [1U];
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[2U] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline
            [2U];
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[3U] 
            = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline
            [3U];
    } else {
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[0U] 
            = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                      [0U]);
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[1U] 
            = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                      [0U]);
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[2U] 
            = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                      [0U]);
        vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[3U] 
            = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                      [0U]);
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we 
        = (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
           [0U] ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select)
            : (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit) 
                & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__main_cache_hit)))
                ? 0xfU : 0U));
    __Vtableidx1 = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word) 
                     << 4U) | ((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                [0U] << 3U) | (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__miss) 
                                                << 2U) 
                                               | (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
    vlSelf->mips_core__DOT__I_CACHE__DOT__next_state 
        = Vmips_core__ConstPool__TABLE_h3c90c2a4_0[__Vtableidx1];
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit)));
    vlSymsp->TOP__mips_core__DOT__i_hc.stall = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss) 
                                                | (IData)(vlSymsp->TOP__mips_core__DOT__inst_q_output.full));
    vlSymsp->TOP__mips_core__DOT__pc_next.pc = (0x3ffffffU 
                                                & ((IData)(vlSymsp->TOP__mips_core__DOT__i_hc.stall)
                                                    ? vlSymsp->TOP__mips_core__DOT__pc_current.pc
                                                    : 
                                                   ((IData)(vlSymsp->TOP__mips_core__DOT__i_load_pc.we)
                                                     ? vlSymsp->TOP__mips_core__DOT__i_load_pc.new_pc
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__mips_core__DOT__pc_current.pc))));
}

VL_INLINE_OPT QData Vmips_core___024root___change_request_1(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
               [0U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
               [0U])
         | (vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
            [1U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
            [1U])
         | (vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
            [2U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
            [2U])
         | (vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
            [3U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
            [3U])
         | (vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg ^ vlSelf->__Vchglast__TOP__mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg)
         | (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0]) | (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1]) | (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2])
         | (vlSymsp->TOP__mips_core__DOT__d_hc.stall ^ vlSelf->__Vchglast__TOP__mips_core__DOT__d_hc__stall));
    VL_DEBUG_IF( if(__req && ((vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [0U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [0U]))) VL_DBG_MSGF("        CHANGE: mips_core/i_cache.sv:318\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [1U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [1U]))) VL_DBG_MSGF("        CHANGE: mips_core/i_cache.sv:318\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [2U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [2U]))) VL_DBG_MSGF("        CHANGE: mips_core/i_cache.sv:318\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [3U] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
                               [3U]))) VL_DBG_MSGF("        CHANGE: mips_core/i_cache.sv:318\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg ^ vlSelf->__Vchglast__TOP__mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg))) VL_DBG_MSGF("        CHANGE: mips_core/register_rename.sv:19: mips_core.REGISTER_RENAME.free_phy_reg\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0]) | (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1]) | (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2] ^ vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2]))) VL_DBG_MSGF("        CHANGE: mips_core/hazard_controller.sv:38: mips_core.HAZARD_CONTROLLER.branch_pred_output\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__mips_core__DOT__d_hc.stall ^ vlSelf->__Vchglast__TOP__mips_core__DOT__d_hc__stall))) VL_DBG_MSGF("        CHANGE: mips_core/mips_core_interfaces.sv:6: stall\n"); );
    // Final
    vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[0U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
        [0U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[1U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
        [1U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[2U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
        [2U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[3U] 
        = vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid
        [3U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg 
        = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg;
    vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0U] 
        = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U] 
        = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2U] 
        = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2U];
    vlSelf->__Vchglast__TOP__mips_core__DOT__d_hc__stall 
        = vlSymsp->TOP__mips_core__DOT__d_hc.stall;
    return __req;
}
