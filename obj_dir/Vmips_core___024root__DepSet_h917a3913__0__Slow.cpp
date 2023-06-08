// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core__Syms.h"
#include "Vmips_core___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vmips_core__ConstPool__TABLE_h3c90c2a4_0;

VL_ATTR_COLD void Vmips_core___024root___settle__TOP__0(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT____Vlvbound_h6ac90220__0;
    CData/*0:0*/ mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT____Vlvbound_h6ac90220__0;
    CData/*0:0*/ mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_he5ff5b59__0;
    CData/*3:0*/ mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_h076cd749__0;
    IData/*25:0*/ __Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__compare_addr;
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready[0U] = 1U;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[0U] = 1U;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[1U] = 1U;
    vlSelf->AWVALID = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid;
    vlSelf->AWID = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                    >> 0x1eU)));
    vlSelf->AWLEN = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                     >> 0x1aU)));
    vlSelf->AWADDR = (0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload));
    vlSelf->WVALID = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid;
    vlSelf->WLAST = (1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                   >> 0x20U)));
    vlSelf->WID = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                   >> 0x21U)));
    vlSelf->WDATA = (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload);
    vlSelf->ARVALID = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid;
    vlSelf->ARID = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                    >> 0x1eU)));
    vlSelf->ARLEN = (0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                     >> 0x1aU)));
    vlSelf->ARADDR = (0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload));
    vlSymsp->TOP__mips_core__DOT__rob_mem_wr.mem_wr_addr 
        = (0x3ffffffU & (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                         [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][1U] 
                         >> 2U));
    vlSymsp->TOP__mips_core__DOT__rob_reg_wr.reg_wr_addr 
        = (0x3fU & (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                    [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U] 
                    >> 1U));
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__empty_spot 
        = (1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr));
    vlSymsp->TOP__mips_core__DOT__rob_status.tag = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__empty_spot;
    mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_h076cd749__0 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0U] 
        = mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_h076cd749__0;
    mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_he5ff5b59__0 
        = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid) 
           & (0U == (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0U] 
        = mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT____Vlvbound_he5ff5b59__0;
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__full 
        = (((1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr)) 
            == (1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr) 
                     >> 1U)) != (1U & ((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr) 
                                       >> 1U))));
    vlSymsp->TOP__mips_core__DOT__rob_status.full = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__full;
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
        = (0x1ffffffffffULL & (((QData)((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
                                                [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr][1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
                                                            [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr][0U]))));
    vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__full 
        = (((1U & (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__wr_ptr)) 
            == (1U & (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__wr_ptr) 
                     >> 1U)) != (1U & ((IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr) 
                                       >> 1U))));
    vlSymsp->TOP__mips_core__DOT__inst_q_output.full 
        = vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__full;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0U] 
        = (QData)((IData)((0x10000000U | (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag) 
                                           << 0xaU) 
                                          | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                             << 4U)))));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3U] 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
            ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
            : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload;
    vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome 
        = (0U != ((vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                   [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][1U] 
                   << 0x1eU) | (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                >> 2U)));
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
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready 
        = (1U & vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
           [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U]);
    vlSymsp->TOP__mips_core__DOT__rob_mem_wr.mem_wr_en 
        = ((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready) 
           & (0x100U == (0x180U & vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                         [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U])));
    vlSymsp->TOP__mips_core__DOT__rob_reg_wr.reg_wr_en 
        = ((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready) 
           & (0x180U == (0x180U & vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                         [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U])));
    vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch 
        = ((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready) 
           & (0U == (0x180U & vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                     [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U])));
    vlSymsp->TOP__mips_core__DOT__rob_jump_reg_commit.valid_jump_reg 
        = ((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready) 
           & (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
              [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
              >> 1U));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready 
        = (1U & ((IData)(vlSelf->AWREADY) | (~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid))));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready 
        = (1U & ((IData)(vlSelf->WREADY) | (~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid))));
    vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata 
        = ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag)
            ? (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data)
            : (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready 
        = (1U & ((IData)(vlSelf->ARREADY) | (~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid))));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0U] 
        = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid) 
           & (0U == (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1U] 
        = ((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid) 
           & (1U == (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id)));
    vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata 
        = ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag)
            ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data)
            : (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data));
    {
        {
            if ((1U & (~ (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                          [0U][2U] >> 0xaU)))) {
                vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__162__Vfuncout = 0U;
                goto __Vlabel2;
            }
            if ((1U & (~ (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                          [1U][2U] >> 0xaU)))) {
                vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__162__Vfuncout = 1U;
                goto __Vlabel2;
            }
            vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__162__Vfuncout = 3U;
            goto __Vlabel1;
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__full 
        = (1U & ((IData)(vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__162__Vfuncout) 
                 >> 1U));
    {
        {
            if ((1U & (~ (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                          [0U][2U] >> 0xaU)))) {
                vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__163__Vfuncout = 0U;
                goto __Vlabel4;
            }
            if ((1U & (~ (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                          [1U][2U] >> 0xaU)))) {
                vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__163__Vfuncout = 1U;
                goto __Vlabel4;
            }
            vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__163__Vfuncout = 3U;
            goto __Vlabel3;
            __Vlabel4: ;
        }
        __Vlabel3: ;
    }
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__write_index 
        = (1U & (IData)(vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__check_full__163__Vfuncout));
    {
        {
            if ((0x400U & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                 [0U][2U])) {
                if ((1U & ((~ (IData)((0U != (3U & 
                                              (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                               [0U][0U] 
                                               >> 2U))))) 
                           & (~ (IData)((0U != (3U 
                                                & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                                [0U][0U]))))))) {
                    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__164__Vfuncout = 2U;
                    goto __Vlabel6;
                }
            }
            if ((0x400U & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                 [1U][2U])) {
                if ((1U & ((~ (IData)((0U != (3U & 
                                              (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                               [1U][0U] 
                                               >> 2U))))) 
                           & (~ (IData)((0U != (3U 
                                                & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                                [1U][0U]))))))) {
                    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__164__Vfuncout = 3U;
                    goto __Vlabel6;
                }
            }
            vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__164__Vfuncout = 0U;
            goto __Vlabel5;
            __Vlabel6: ;
        }
        __Vlabel5: ;
    }
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready 
        = (1U & ((IData)(vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__164__Vfuncout) 
                 >> 1U));
    {
        {
            if ((0x400U & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                 [0U][2U])) {
                if ((1U & ((~ (IData)((0U != (3U & 
                                              (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                               [0U][0U] 
                                               >> 2U))))) 
                           & (~ (IData)((0U != (3U 
                                                & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                                [0U][0U]))))))) {
                    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__165__Vfuncout = 2U;
                    goto __Vlabel8;
                }
            }
            if ((0x400U & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                 [1U][2U])) {
                if ((1U & ((~ (IData)((0U != (3U & 
                                              (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                               [1U][0U] 
                                               >> 2U))))) 
                           & (~ (IData)((0U != (3U 
                                                & vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                                                [1U][0U]))))))) {
                    vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__165__Vfuncout = 3U;
                    goto __Vlabel8;
                }
            }
            vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__165__Vfuncout = 0U;
            goto __Vlabel7;
            __Vlabel8: ;
        }
        __Vlabel7: ;
    }
    vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index 
        = (1U & (IData)(vlSelf->__Vfunc_mips_core__DOT__ALU_RESERVATION_STATION__DOT__get_ready_index__165__Vfuncout));
    vlSymsp->TOP__mips_core__DOT__alu_res_stat_status.full 
        = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__full;
    vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.valid 
        = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready;
    vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl 
        = (0x1fU & (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                    [vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index][2U] 
                    >> 5U));
    vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.tag 
        = (1U & (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                 [vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index][2U] 
                 >> 4U));
    vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
        = ((vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index][2U] 
            << 0x1cU) | (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                         [vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index][1U] 
                         >> 4U));
    vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2 
        = ((vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index][1U] 
            << 0x1cU) | (vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
                         [vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index][0U] 
                         >> 4U));
    vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
        = (0x3ffffffU & (IData)((vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue
                                 [(1U & (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr))] 
                                 >> 0x20U)));
    vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
        = (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue
                  [(1U & (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr))]);
    vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__empty 
        = ((IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__wr_ptr) 
           == (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr));
    vlSymsp->TOP__mips_core__DOT__inst_q_output.valid 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__empty)));
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty 
        = ((IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr) 
           == (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr));
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty_spot 
        = (1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr));
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__full 
        = (((1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr)) 
            == (1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))) 
           & ((1U & ((IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr) 
                     >> 1U)) != (1U & ((IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr) 
                                       >> 1U))));
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ready 
        = (1U & ((vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                  [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][0U] 
                  & (~ (IData)((0U != (3U & (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                                             [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][1U] 
                                             >> 2U)))))) 
                 & (~ (IData)((0U != (3U & vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                                      [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][0U]))))));
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__st_ready 
        = ((IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ready) 
           & (~ (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                 [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][3U] 
                 >> 4U)));
    vlSymsp->TOP__mips_core__DOT__st_data_output.valid_st 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__st_ready;
    vlSymsp->TOP__mips_core__DOT__st_data_output.tag 
        = (1U & (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                 [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][3U] 
                 >> 5U));
    vlSymsp->TOP__mips_core__DOT__st_data_output.mem_addr 
        = (0x3ffffffU & (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                         [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][2U] 
                         >> 4U));
    vlSymsp->TOP__mips_core__DOT__st_data_output.reg_value 
        = ((vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][1U] 
            << 0x1eU) | (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                         [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][0U] 
                         >> 2U));
    __Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__compare_addr 
        = (0x3ffffffU & (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
                         [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][2U] 
                         >> 4U));
    {
        {
            if ((1U & (IData)((vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                               [0U] >> 0x20U)))) {
                if ((__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__compare_addr 
                     == (0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                                              [0U])))) {
                    vlSelf->__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__Vfuncout = 1U;
                    goto __Vlabel10;
                }
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                               [1U] >> 0x20U)))) {
                if ((__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__compare_addr 
                     == (0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                                              [1U])))) {
                    vlSelf->__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__Vfuncout = 1U;
                    goto __Vlabel10;
                }
            }
            vlSelf->__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__Vfuncout = 0U;
            goto __Vlabel9;
            __Vlabel10: ;
        }
        __Vlabel9: ;
    }
    vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ld_ready 
        = (((IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ready) 
            & (vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
               [(1U & (IData)(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr))][3U] 
               >> 4U)) & (~ (IData)(vlSelf->__Vfunc_mips_core__DOT__MEM_RESERVATION_STATION__DOT__address_match__166__Vfuncout)));
    vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.full 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__full;
    vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.ld_ready 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ld_ready;
    vlSymsp->TOP__mips_core__DOT__d_cache_input.valid 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_input_valid_reg;
    vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_action_reg;
    vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_reg;
    vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_next_reg;
    vlSymsp->TOP__mips_core__DOT__d_cache_input.data 
        = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__data_reg;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1U] 
        = (0x40000000ULL | (QData)((IData)((0x10000000U 
                                            | (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                                << 0xaU) 
                                               | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                                  << 4U))))));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0U] 
        = (1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state));
    vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
            >> 3U) & (2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0U] 
        = (1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0U] 
        = (2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1U] 
        = (3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready
        [1U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready
        [1U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid
        [0U];
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_gshare 
        = (0xfffU & ((IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                              >> 0xfU)) ^ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb)));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_chooser 
        = (0xfffU & ((IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                              >> 0xfU)) ^ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload
        [1U];
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_correct 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome) 
           == (1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                             >> 0xdU))));
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
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid
        [1U];
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
                goto __Vlabel11;
            }
            vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j 
                = ((IData)(1U) + vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j);
        }
        __Vlabel11: ;
    }
    vlSelf->mips_core__DOT__I_CACHE__DOT__victim_wr_en 
        = ((IData)((vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits 
                    >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                 >> 4U)))) & ((0xffffU 
                                               & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                                  >> 0xaU)) 
                                              != (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata)));
    vlSymsp->TOP__mips_core__DOT__alu_output.valid = 0U;
    vlSymsp->TOP__mips_core__DOT__alu_output.result = 0U;
    vlSymsp->TOP__mips_core__DOT__alu_output.tag = 0U;
    vlSelf->done = 0U;
    if (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.valid) {
        vlSymsp->TOP__mips_core__DOT__alu_output.valid = 1U;
        vlSymsp->TOP__mips_core__DOT__alu_output.tag 
            = vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.tag;
        if ((0x10U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))) {
            if ((8U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))) {
                if (VL_UNLIKELY((4U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl)))) {
                    VL_WRITEF("%Nmips_core.ALU (%t) Illegal ALUCTL code %b\n",
                              vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                              -12,5,(IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl));
                } else if ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))) {
                    if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl)))) {
                        VL_WRITEF("%Nmips_core.ALU (%t) Illegal ALUCTL code %b\n",
                                  vlSymsp->name(),64,
                                  VL_TIME_UNITED_Q(1),
                                  -12,5,(IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl));
                    } else {
                        vlSymsp->TOP__mips_core__DOT__alu_output.result = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__alu_output.result 
                        = ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                            ? 1U : ((0U < vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1)
                                     ? 1U : 0U));
                }
            } else if ((4U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))) {
                vlSymsp->TOP__mips_core__DOT__alu_output.result 
                    = ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                        ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                            ? ((0U >= vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1)
                                ? 1U : 0U) : ((vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                               != vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                               ? 1U
                                               : 0U))
                        : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                            ? ((vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                == vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                ? 1U : 0U) : 1U));
            } else if ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))) {
                if ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))) {
                    VL_WRITEF("%Nmips_core.ALU (%t) DONE test %x\n",
                              vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                              -12,32,vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2);
                    vlSelf->done = 1U;
                } else {
                    VL_WRITEF("%Nmips_core.ALU (%t) FAIL test %x\n",
                              vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                              -12,32,vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2);
                }
            } else if (VL_UNLIKELY((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl)))) {
                VL_WRITEF("%Nmips_core.ALU (%t) PASS test %x\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12,32,vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2);
            } else {
                vlSymsp->TOP__mips_core__DOT__alu_output.result 
                    = (~ (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                          | vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2));
            }
        } else {
            vlSymsp->TOP__mips_core__DOT__alu_output.result 
                = ((8U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                    ? ((4U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                        ? ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2 
                                   >> (0x1fU & vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1))
                                : (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2 
                                   >> (0x1fU & vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1)))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2 
                                   << (0x1fU & vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1))
                                : ((0x1fU >= vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                    ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                       >> vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                    : 0U))) : ((2U 
                                                & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                                     ? 
                                                    (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                                     >> vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                                     ? 
                                                    (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                                     << vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                                    ? 
                                                   (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                                    < vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                                    : 
                                                   (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                                    < vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2))))
                    : ((4U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                        ? ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   ^ vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                : (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   | vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   & vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                : (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   - vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)))
                        : ((2U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                            ? ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   - vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                : (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   + vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2))
                            : ((1U & (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl))
                                ? (vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1 
                                   + vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2)
                                : 0U))));
        }
    }
    vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump = 0U;
    if (vlSymsp->TOP__mips_core__DOT__inst_q_output.valid) {
        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump = 1U;
                    } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump = 1U;
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump = 1U;
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 5U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 1U)))) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 0U;
        if ((vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
             >> 0x1fU)) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 1U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x10U)));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 1U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__6__immediate 
                                    = VL_EXTENDS_II(32,16, 
                                                    (0xffffU 
                                                     & vlSymsp->TOP__mips_core__DOT__inst_q_output.data));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__6__immediate;
                            } else {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__12__immediate 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__12__immediate;
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                }
                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__10__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__10__rw));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__10__rw;
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
            }
            vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 1U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
            } else if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1aU)))) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                }
            } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
            } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1aU)))) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
            }
            vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr = 0U;
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U));
                            } else {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U));
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
            }
        } else {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                     >> 0x1cU)))) {
                    if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 0x1aU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 4U)))) {
                                if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                                    } else if ((1U 
                                                & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 0x1aU)))) {
                                if ((0x17U == (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0x11U;
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 0x10U)));
                                } else if ((0x18U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0x12U;
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 0x10U)));
                                } else if ((0x19U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0x13U;
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 0x10U)));
                                } else {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                }
            } else {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                        = ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                            ? ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? 6U : 7U) : ((0x4000000U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 6U
                                                   : 5U))
                            : ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? 9U : 8U) : ((0x4000000U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 2U
                                                   : 1U)));
                } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                        = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                            ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? 0x18U : 0x17U) : 
                           ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                             ? 0x16U : 0x15U));
                } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                        = ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                            ? 6U : 0U);
                } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                        = ((0x10000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                            ? 0x19U : 0x1aU);
                } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 4U)))) {
                        if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 2U)))) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                                        = ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? 9U : 8U);
                                }
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                                = ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                        ? ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? 0x10U
                                            : 7U) : 
                                       ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                         ? 6U : 5U))
                                    : ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                        ? ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? 4U : 3U)
                                        : ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? 2U : 1U)));
                        }
                    }
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                     >> 4U)))) {
                    if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 2U)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 1U)))) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                                    = ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                        ? 6U : 0U);
                            }
                        }
                    } else if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                                = ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? 0xfU : 0xeU);
                        } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0xdU;
                        }
                    } else if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl 
                            = ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? 0xcU : 0xbU);
                    } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0xaU;
                    }
                }
                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                            = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x10U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x10U))))
                                : ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x10U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x10U)))));
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 0x1bU)))) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)));
                        } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 4U)))) {
                                if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 2U)))) {
                                        if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                                = (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U))));
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                        = ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? ((2U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U))))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U)))))
                                            : ((2U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U))))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x10U))))));
                                }
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                             >> 4U)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 3U)))) {
                                if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                            = ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                       >> 0x10U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                       >> 0x10U))));
                                    } else if ((1U 
                                                & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt 
                                            = (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 0x1aU)))) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)));
                            }
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__18__immediate 
                                    = (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                       << 0x10U);
                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__18__immediate;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__17__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__17__rw));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__17__rw;
                            } else {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__24__immediate 
                                    = (0xffffU & vlSymsp->TOP__mips_core__DOT__inst_q_output.data);
                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__24__immediate;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__22__rw 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                    = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__22__rw));
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__22__rw;
                            }
                        } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__30__immediate 
                                = (0xffffU & vlSymsp->TOP__mips_core__DOT__inst_q_output.data);
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__30__immediate;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__28__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__28__rw));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__28__rw;
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__36__immediate 
                                = (0xffffU & vlSymsp->TOP__mips_core__DOT__inst_q_output.data);
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__36__immediate;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__34__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__34__rw));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__34__rw;
                        }
                    } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__42__immediate 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__42__immediate;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__40__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__40__rw));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__40__rw;
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__48__immediate 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__48__immediate;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__46__rw 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__46__rw));
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__46__rw;
                        }
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                            = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                               >> 0x15U)));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__54__immediate 
                            = VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & vlSymsp->TOP__mips_core__DOT__inst_q_output.data));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__54__immediate;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__52__rw 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                        >> 0x10U));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__52__rw));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__52__rw;
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                            = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                               >> 0x15U)));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__60__immediate 
                            = VL_EXTENDS_II(32,16, 
                                            (0xffffU 
                                             & vlSymsp->TOP__mips_core__DOT__inst_q_output.data));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__60__immediate;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__58__rw 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                        >> 0x10U));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__58__rw));
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__58__rw;
                    }
                } else {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                            = ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U))))
                                : ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                    ? (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)))
                                    : (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)))));
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 0x1bU)))) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                = (0U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                        } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 4U)))) {
                                if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 2U)))) {
                                        if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                                = (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U))));
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                        = ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? ((2U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U))))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U)))))
                                            : ((2U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U))))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                    ? 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U)))
                                                    : 
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0x15U))))));
                                }
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                             >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 1U)))) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                            = ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                ? (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                       >> 0x15U)))
                                                : (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                       >> 0x15U))));
                                    }
                                }
                            } else if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                        = ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                            ? (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)))
                                            : (0U != 
                                               (0x1fU 
                                                & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U))));
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                        = (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 0x15U)));
                                }
                            } else if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                    = ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                        ? (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 0x10U)))
                                        : (0U != (0x1fU 
                                                  & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 0x10U))));
                            } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs 
                                    = (0U != (0x1fU 
                                              & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x10U)));
                            }
                        }
                    }
                    vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__70__immediate 
                                    = ((IData)(8U) 
                                       + vlSymsp->TOP__mips_core__DOT__inst_q_output.pc);
                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__70__immediate;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 1U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0x1fU;
                            } else {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                             >> 0x1aU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 4U)))) {
                                    if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__125__immediate 
                                                        = 
                                                        ((IData)(8U) 
                                                         + vlSymsp->TOP__mips_core__DOT__inst_q_output.pc);
                                                    vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__125__immediate;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 2U)))) {
                                        if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            if ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__147__immediate 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 6U));
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__147__immediate;
                                            } else {
                                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__153__immediate 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 6U));
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__153__immediate;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__159__immediate 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 6U));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.immediate 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__immediate_raw__159__immediate;
                                        }
                                    }
                                }
                            }
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                            if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 4U)))) {
                                    if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                if (
                                                    (1U 
                                                     & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__77__rw 
                                                        = 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                            >> 0xbU));
                                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                        = 
                                                        (0U 
                                                         != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__77__rw));
                                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__77__rw;
                                                } else {
                                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__82__rw 
                                                        = 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                            >> 0xbU));
                                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                        = 
                                                        (0U 
                                                         != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__82__rw));
                                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__82__rw;
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            if ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__87__rw 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0xbU));
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                    = 
                                                    (0U 
                                                     != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__87__rw));
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__87__rw;
                                            } else {
                                                vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__92__rw 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                        >> 0xbU));
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                    = 
                                                    (0U 
                                                     != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__92__rw));
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                    = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__92__rw;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__97__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__97__rw));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__97__rw;
                                        } else {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__102__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__102__rw));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__102__rw;
                                        }
                                    } else if ((2U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        if ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__107__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__107__rw));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__107__rw;
                                        } else {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__112__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__112__rw));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__112__rw;
                                        }
                                    } else if ((1U 
                                                & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__117__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__117__rw));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__117__rw;
                                    } else {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__122__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__122__rw));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__122__rw;
                                    }
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 4U)))) {
                                if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 1U;
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0x1fU;
                                            }
                                        }
                                    }
                                } else if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        if ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__131__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__131__rw));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__131__rw;
                                        } else {
                                            vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__136__rw 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                      >> 0xbU));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                                = (0U 
                                                   != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__136__rw));
                                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                                = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__136__rw;
                                        }
                                    } else if ((1U 
                                                & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__141__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__141__rw));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__141__rw;
                                    }
                                } else if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__145__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__145__rw));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__145__rw;
                                    } else {
                                        vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__151__rw 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                            = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__151__rw));
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                            = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__151__rw;
                                    }
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                    vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__157__rw 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0xbU));
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw 
                                        = (0U != (IData)(vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__157__rw));
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr 
                                        = vlSelf->__Vtask_mips_core__DOT__DECODER__DOT__rw_raw__157__rw;
                                }
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
                    }
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
            }
            vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 1U;
            if ((0x40000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                } else if ((0x17U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                               >> 0xbU)))) {
                    if ((0x18U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0xbU)))) {
                        if ((0x19U != (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0xbU)))) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                        }
                    }
                }
                vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr = 0U;
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 0x1aU)))) {
                                if ((0x17U == (0x1fU 
                                               & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                                } else if ((0x18U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                                } else if ((0x19U == 
                                            (0x1fU 
                                             & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0xbU)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                 >> 0x1dU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 0x1aU)))) {
                            if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((0x10U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                } else if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 1U)))) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                    }
                                }
                            } else if ((0x10U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                            } else if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                } else if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                }
                            } else if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 1U)))) {
                                    if ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                    }
                                }
                            } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 1U)))) {
                                if ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
                                }
                            }
                        }
                    }
                }
                vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr = 0U;
                if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                        = (0x1fU & ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                     ? ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U)
                                         : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U))
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U)
                                         : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U))));
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                     >> 0x1bU)))) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                        >> 0x10U));
                    } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                            = (0x1fU 
                                               & ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                    = (0x1fU & ((4U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                 ? 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)))
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x10U)))));
                            }
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 4U)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 3U)))) {
                            if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                        = (0x1fU & 
                                           ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U)
                                             : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U)));
                                } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                                }
                            }
                        }
                    }
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr = 0U;
            }
            vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 0x1aU)))) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U));
                            }
                        } else {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                = (0x1fU & ((0x4000000U 
                                             & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U)));
                        }
                    } else {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                            = (0x1fU & ((0x8000000U 
                                         & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                         ? ((0x4000000U 
                                             & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U))
                                         : ((0x4000000U 
                                             & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U))));
                    }
                } else if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                        = (0x1fU & ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                     ? ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x15U)
                                         : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x15U))
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                         ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x15U)
                                         : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x15U))));
                } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                     >> 0x1bU)))) {
                    if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                            = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                        >> 0x15U));
                    } else if ((0x20U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 4U)))) {
                            if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 2U)))) {
                                    if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                            = (0x1fU 
                                               & ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                    = (0x1fU & ((4U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                 ? 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)))
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                   ? 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                   >> 0x15U)))));
                            }
                        }
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 4U)))) {
                        if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 1U)))) {
                                    vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                        = (0x1fU & 
                                           ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U)
                                             : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U)));
                                }
                            }
                        } else if ((4U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                    = (0x1fU & ((1U 
                                                 & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                 ? 
                                                (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)
                                                 : 
                                                (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 >> 0x15U)));
                            } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                                vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                    = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x15U));
                            }
                        } else if ((2U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                = (0x1fU & ((1U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                             ? (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U)
                                             : (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                >> 0x10U)));
                        } else if ((1U & (~ vlSymsp->TOP__mips_core__DOT__inst_q_output.data))) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr 
                                = (0x1fU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                            >> 0x10U));
                        }
                    }
                }
            }
        }
        vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump_reg = 0U;
        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                  >> 4U)))) {
                                        if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                         >> 1U)))) {
                                                    vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump_reg = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target = 0U;
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target 
                            = (0x3ffffffU & ((0x8000000U 
                                              & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                              ? ((0x4000000U 
                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) 
                                                    << 2U)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) 
                                                    << 2U))))
                                              : ((0x4000000U 
                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) 
                                                    << 2U)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + 
                                                  (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                                                   + 
                                                   (VL_EXTENDS_II(26,16, 
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) 
                                                    << 2U))))));
                    } else if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target 
                            = ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)
                                ? (0x3fffffcU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 << 2U))
                                : (0x3fffffcU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                 << 2U)));
                    } else if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target 
                            = (0x3ffffffU & ((IData)(4U) 
                                             + (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                                                + (
                                                   VL_EXTENDS_II(26,16, 
                                                                 (0xffffU 
                                                                  & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) 
                                                   << 2U))));
                    }
                    vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 0U;
                    if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                  >> 0x1cU)))) {
                        if ((0x8000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 1U;
                        } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                             >> 0x1aU)))) {
                            if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                              >> 4U)))) {
                                    if ((8U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                                     >> 1U)))) {
                                                vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x10000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                        vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch = 1U;
                    } else if ((1U & (~ (vlSymsp->TOP__mips_core__DOT__inst_q_output.data 
                                         >> 0x1bU)))) {
                        if ((0x4000000U & vlSymsp->TOP__mips_core__DOT__inst_q_output.data)) {
                            vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch = 1U;
                        }
                    }
                } else {
                    vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target = 0U;
                    vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 0U;
                }
            } else {
                vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target = 0U;
                vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 0U;
            }
        } else {
            vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target = 0U;
            vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 0U;
        }
    } else {
        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action = 1U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.immediate = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.valid = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump_reg = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target = 0U;
        vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump = 0U;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0U] 
        = (QData)((IData)((0x10000000U | (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                           << 0xaU) 
                                          | (0x3f0U 
                                             & vlSymsp->TOP__mips_core__DOT__d_cache_input.addr)))));
    vlSymsp->TOP__mips_core__DOT__d_cache_output.data 
        = vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
        [(3U & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                >> 2U))];
    if ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))) {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr 
            = (0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                        >> 4U));
        vlSelf->mips_core__DOT__D_CACHE__DOT__hit = 
            (((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
              & (IData)((vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits 
                         >> (0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                      >> 4U))))) & 
             ((0xffffU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                          >> 0xaU)) == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata)));
    } else {
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr 
            = (0x3fU & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index));
        vlSelf->mips_core__DOT__D_CACHE__DOT__hit = 0U;
    }
    vlSelf->mips_core__DOT__D_CACHE__DOT__miss = ((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
                                                  & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload
        [1U];
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
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready 
        = (1U & ((~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid)) 
                 | ((0U >= (1U & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id))) 
                    & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready
                    [(1U & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id))])));
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready 
        = (1U & ((~ (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid)) 
                 | vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready
                 [(1U & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id))]));
    vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata 
        = ((0U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))
            ? vlSymsp->TOP__mips_core__DOT__d_cache_input.data
            : (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                      [1U]));
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
    vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word 
        = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select) 
            >> 3U) & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
           [0U]);
    vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word 
        = (((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select) 
            >> 3U) & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
           [1U]);
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
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_phy 
        = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res
        [vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr];
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_ready 
        = (1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_ready 
                         >> vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res
                         [vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr])));
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_tag 
        = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_phy_rob_tag
        [vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res
        [vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr]];
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_phy 
        = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res
        [vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr];
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_ready 
        = (1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_ready 
                         >> vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res
                         [vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr])));
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_tag 
        = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_phy_rob_tag
        [vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res
        [vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr]];
    vlSymsp->TOP__mips_core__DOT__phy_reg_output.rw_phy 
        = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg;
    {
        {
            if ((1U & (IData)(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x40U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 1U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x41U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 2U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x42U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 3U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x43U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 4U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x44U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 5U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x45U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 6U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x46U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 7U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x47U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 8U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x48U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 9U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x49U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xaU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x4aU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xbU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x4bU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xcU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x4cU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xdU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x4dU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xeU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x4eU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xfU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x4fU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x10U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x50U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x11U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x51U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x12U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x52U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x13U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x53U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x14U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x54U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x15U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x55U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x16U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x56U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x17U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x57U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x18U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x58U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x19U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x59U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1aU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x5aU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1bU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x5bU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1cU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x5cU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1dU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x5dU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1eU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x5eU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1fU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x5fU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x20U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x60U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x21U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x61U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x22U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x62U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x23U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x63U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x24U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x64U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x25U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x65U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x26U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x66U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x27U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x67U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x28U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x68U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x29U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x69U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2aU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x6aU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2bU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x6bU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2cU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x6cU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2dU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x6dU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2eU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x6eU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2fU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x6fU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x30U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x70U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x31U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x71U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x32U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x72U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x33U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x73U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x34U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x74U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x35U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x75U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x36U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x76U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x37U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x77U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x38U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x78U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x39U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x79U;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3aU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x7aU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3bU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x7bU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3cU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x7cU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3dU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x7dU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3eU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x7eU;
                goto __Vlabel13;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3fU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0x7fU;
                goto __Vlabel13;
            }
            vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout = 0U;
            goto __Vlabel12;
            __Vlabel13: ;
        }
        __Vlabel12: ;
    }
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__avail_reg 
        = (1U & ((IData)(vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__160__Vfuncout) 
                 >> 6U));
    {
        {
            if ((1U & (IData)(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x40U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 1U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x41U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 2U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x42U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 3U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x43U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 4U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x44U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 5U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x45U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 6U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x46U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 7U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x47U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 8U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x48U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 9U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x49U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xaU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x4aU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xbU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x4bU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xcU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x4cU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xdU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x4dU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xeU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x4eU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0xfU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x4fU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x10U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x50U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x11U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x51U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x12U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x52U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x13U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x53U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x14U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x54U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x15U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x55U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x16U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x56U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x17U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x57U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x18U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x58U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x19U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x59U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1aU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x5aU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1bU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x5bU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1cU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x5cU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1dU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x5dU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1eU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x5eU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x1fU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x5fU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x20U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x60U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x21U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x61U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x22U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x62U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x23U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x63U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x24U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x64U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x25U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x65U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x26U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x66U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x27U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x67U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x28U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x68U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x29U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x69U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2aU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x6aU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2bU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x6bU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2cU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x6cU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2dU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x6dU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2eU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x6eU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x2fU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x6fU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x30U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x70U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x31U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x71U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x32U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x72U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x33U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x73U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x34U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x74U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x35U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x75U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x36U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x76U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x37U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x77U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x38U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x78U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x39U)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x79U;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3aU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x7aU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3bU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x7bU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3cU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x7cU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3dU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x7dU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3eU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x7eU;
                goto __Vlabel15;
            }
            if ((1U & (IData)((vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg 
                               >> 0x3fU)))) {
                vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0x7fU;
                goto __Vlabel15;
            }
            vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout = 0U;
            goto __Vlabel14;
            __Vlabel15: ;
        }
        __Vlabel14: ;
    }
    vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg 
        = (0x3fU & (IData)(vlSelf->__Vfunc_mips_core__DOT__REGISTER_RENAME__DOT__first_free_phy_reg__161__Vfuncout));
    vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__input_inst_type 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw)
            ? 3U : ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch)
                     ? 0U : ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump)
                              ? 1U : (((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access) 
                                       & (~ (IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action)))
                                       ? 2U : 3U))));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__req_valid 
        = ((~ (IData)(vlSymsp->TOP__mips_core__DOT__d_hc.stall)) 
           & (IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch));
    vlSymsp->TOP__mips_core__DOT__d_hc.stall = ((((IData)(vlSymsp->TOP__mips_core__DOT__rob_status.full) 
                                                  | (IData)(vlSymsp->TOP__mips_core__DOT__alu_res_stat_status.full)) 
                                                 | (IData)(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.full)) 
                                                | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_stall));
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
    vlSelf->BREADY = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready;
    vlSelf->RREADY = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready;
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
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss 
        = (1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__hit)));
    vlSymsp->TOP__mips_core__DOT__i_hc.stall = ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss) 
                                                | (IData)(vlSymsp->TOP__mips_core__DOT__inst_q_output.full));
    vlSymsp->TOP__mips_core__DOT__reg_file_data.rs_data 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs)
            ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
           [vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_phy]
            : 0U);
    vlSymsp->TOP__mips_core__DOT__reg_file_data.rt_data 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt)
            ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
           [vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_phy]
            : 0U);
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload = 0ULL;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload
            [0U];
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload = 0ULL;
    if (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid
        [0U]) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload 
            = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload
            [0U];
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0U] = 0U;
    mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT____Vlvbound_h6ac90220__0 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready;
    if ((0U >= (1U & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id))) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[(1U 
                                                                                & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id)] 
            = mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT____Vlvbound_h6ac90220__0;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0U] = 0U;
    mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT____Vlvbound_h6ac90220__0 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready;
    if ((0U >= (1U & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id))) {
        vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[(1U 
                                                                                & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id)] 
            = mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT____Vlvbound_h6ac90220__0;
    }
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1U] = 0U;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0U] = 0U;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[(1U 
                                                                                & vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id)] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready;
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready
        [0U];
    vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1U] 
        = vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready
        [1U];
    __Vtableidx1 = (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word) 
                     << 4U) | ((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                [0U] << 3U) | (((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__miss) 
                                                << 2U) 
                                               | (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
    vlSelf->mips_core__DOT__I_CACHE__DOT__next_state 
        = Vmips_core__ConstPool__TABLE_h3c90c2a4_0[__Vtableidx1];
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
        vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr 
            = (0x3fU & ((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state))
                         ? (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                            >> 4U) : (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
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
                         ? (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
                            >> 4U) : (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index)));
    }
}

VL_ATTR_COLD void Vmips_core___024root___settle__TOP__1(Vmips_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_gshare 
        = (0xfffU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                     ^ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory)));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_pred 
        = (1U & (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__bht_gshare
                 [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_gshare] 
                 >> 1U));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__two_bit_local_pred 
        = (1U & ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__counter) 
                 >> 1U));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_chooser 
        = (0xfffU & (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                     ^ (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory)));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__chooser_pred 
        = ((2U & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__bht_chooser
            [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_chooser])
            ? (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__two_bit_local_pred)
            : (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_pred));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0U] 
        = ((0x3ffffffU & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0U]) 
           | ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory) 
              << 0x1aU));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U] 
        = ((0xfffffe00U & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U]) 
           | (0x3ffffffU & ((0x3ffff00U & ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__chooser_pred) 
                                           << 8U)) 
                            | ((0x3ffff80U & ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_pred) 
                                              << 7U)) 
                               | ((0x3ffffc0U & ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__two_bit_local_pred) 
                                                 << 6U)) 
                                  | ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory) 
                                     >> 6U))))));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0U] 
        = ((0xfc000000U & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[0U]) 
           | (0x3ffffffU & ((0x100U & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U])
                             ? ((IData)(8U) + vlSymsp->TOP__mips_core__DOT__inst_q_output.pc)
                             : vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target)));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U] 
        = ((0x1ffU & vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U]) 
           | (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
              << 9U));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[2U] 
        = (7U & (vlSymsp->TOP__mips_core__DOT__inst_q_output.pc 
                 >> 0x17U));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.valid) 
           & (((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump) 
               & (~ (IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump_reg))) 
              | ((IData)(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch) 
                 & (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output[1U] 
                    >> 8U))));
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload 
        = vlSymsp->TOP__mips_core__DOT__rob_jump_reg_commit.valid_jump_reg;
    vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload 
        = ((IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch) 
           & ((1U & (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
                     [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr][1U] 
                     >> 8U)) != (IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome)));
    vlSymsp->TOP__mips_core__DOT__d_hc.flush = (((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                                                 | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload)) 
                                                | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
    vlSymsp->TOP__mips_core__DOT__branch_pred_hc.flush 
        = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload;
    vlSymsp->TOP__mips_core__DOT__i_load_pc.we = (((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                                                   | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload)) 
                                                  | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload));
    vlSymsp->TOP__mips_core__DOT__i_load_pc.new_pc 
        = (0x3ffffffU & ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload)
                          ? vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target
                          : ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload)
                              ? vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
                             [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr][0U]
                              : ((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload)
                                  ? ((vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                      [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                      << 0x1eU) | (
                                                   vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                                   [
                                                   (1U 
                                                    & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                                   >> 2U))
                                  : 0U))));
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
