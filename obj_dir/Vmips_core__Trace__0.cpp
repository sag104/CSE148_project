// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmips_core__Syms.h"


void Vmips_core___024root__trace_chg_sub_0(Vmips_core___024root* vlSelf, VerilatedFst* tracep);

void Vmips_core___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_chg_top_0\n"); );
    // Init
    Vmips_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmips_core___024root*>(voidSelf);
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmips_core___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vmips_core___024root__trace_chg_sub_0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h3f86df69__0;
    VlWide<3>/*95:0*/ __Vtemp_h3f86deaa__0;
    VlWide<3>/*95:0*/ __Vtemp_hbea94543__0;
    VlWide<3>/*95:0*/ __Vtemp_hbea94486__0;
    VlWide<4>/*127:0*/ __Vtemp_h7604577d__0;
    VlWide<4>/*127:0*/ __Vtemp_h760453c0__0;
    VlWide<5>/*159:0*/ __Vtemp_hb7d42c05__0;
    VlWide<5>/*159:0*/ __Vtemp_hb7d436cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h8184942a__0;
    VlWide<3>/*95:0*/ __Vtemp_h818496e9__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i),32);
        tracep->chgBit(oldp+1,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready[0]));
        tracep->chgBit(oldp+2,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[0]));
        tracep->chgBit(oldp+3,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[1]));
        tracep->chgBit(oldp+4,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[0]));
        tracep->chgBit(oldp+5,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[1]));
        tracep->chgBit(oldp+6,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[0]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        __Vtemp_h3f86df69__0[0U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [0U][0U];
        __Vtemp_h3f86df69__0[1U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [0U][1U];
        __Vtemp_h3f86df69__0[2U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [0U][2U];
        tracep->chgWData(oldp+7,(__Vtemp_h3f86df69__0),75);
        __Vtemp_h3f86deaa__0[0U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [1U][0U];
        __Vtemp_h3f86deaa__0[1U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [1U][1U];
        __Vtemp_h3f86deaa__0[2U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
            [1U][2U];
        tracep->chgWData(oldp+10,(__Vtemp_h3f86deaa__0),75);
        tracep->chgBit(oldp+13,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__full));
        tracep->chgBit(oldp+14,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready));
        tracep->chgBit(oldp+15,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__write_index));
        tracep->chgBit(oldp+16,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index));
        tracep->chgIData(oldp+17,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__unnamedblk3__DOT__a),32);
        tracep->chgSData(oldp+18,((0xffffU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                              >> 0xaU))),16);
        tracep->chgCData(oldp+19,((0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                            >> 4U))),6);
        tracep->chgCData(oldp+20,((3U & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                         >> 2U))),2);
        tracep->chgCData(oldp+21,((0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
                                            >> 4U))),6);
        tracep->chgCData(oldp+22,(vlSelf->mips_core__DOT__D_CACHE__DOT__state),3);
        tracep->chgBit(oldp+23,(vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response));
        tracep->chgCData(oldp+24,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index),6);
        tracep->chgSData(oldp+25,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag),16);
        tracep->chgCData(oldp+26,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select),4);
        tracep->chgIData(oldp+27,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata),32);
        tracep->chgCData(oldp+28,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr),6);
        tracep->chgBit(oldp+29,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word));
        tracep->chgQData(oldp+30,(vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits),64);
        tracep->chgQData(oldp+32,(vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits),64);
        tracep->chgIData(oldp+34,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0]),32);
        tracep->chgIData(oldp+35,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1]),32);
        tracep->chgIData(oldp+36,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2]),32);
        tracep->chgIData(oldp+37,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3]),32);
        tracep->chgBit(oldp+38,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word));
        tracep->chgIData(oldp+39,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+40,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+41,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+42,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+43,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+44,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+45,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+46,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+47,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+48,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+49,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+50,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+51,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+52,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+53,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+54,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+55,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+56,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+57,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+58,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+59,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+60,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+61,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+62,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+63,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+64,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+65,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+66,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgSData(oldp+67,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data),16);
        tracep->chgBit(oldp+68,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+69,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)))));
        tracep->chgBit(oldp+70,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+71,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgSData(oldp+72,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
        tracep->chgBit(oldp+73,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+74,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+75,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i),32);
        tracep->chgIData(oldp+76,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i),32);
        __Vtemp_hbea94543__0[0U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
            [0U][0U];
        __Vtemp_hbea94543__0[1U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
            [0U][1U];
        __Vtemp_hbea94543__0[2U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
            [0U][2U];
        tracep->chgWData(oldp+77,(__Vtemp_hbea94543__0),67);
        __Vtemp_hbea94486__0[0U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
            [1U][0U];
        __Vtemp_hbea94486__0[1U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
            [1U][1U];
        __Vtemp_hbea94486__0[2U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
            [1U][2U];
        tracep->chgWData(oldp+80,(__Vtemp_hbea94486__0),67);
        tracep->chgBit(oldp+83,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_wr_ptr));
        tracep->chgBit(oldp+84,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr));
        tracep->chgBit(oldp+85,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_stall));
        tracep->chgBit(oldp+86,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_state));
        tracep->chgBit(oldp+87,(((IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch) 
                                 & ((1U & (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
                                           [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr][1U] 
                                           >> 8U)) 
                                    == (IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome)))));
        tracep->chgQData(oldp+88,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb),41);
        tracep->chgIData(oldp+90,(vlSymsp->TOP__mips_core__DOT__inst_q_output.pc),26);
        tracep->chgIData(oldp+91,(vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target),26);
        tracep->chgBit(oldp+92,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__chooser_pred));
        tracep->chgBit(oldp+93,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_pred));
        tracep->chgBit(oldp+94,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__two_bit_local_pred));
        tracep->chgSData(oldp+95,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory),12);
        tracep->chgBit(oldp+96,(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch));
        tracep->chgIData(oldp+97,((0x3ffffffU & (IData)(
                                                        (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                                         >> 0xfU)))),26);
        tracep->chgSData(oldp+98,((0xfffU & (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb))),12);
        tracep->chgBit(oldp+99,((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                               >> 0xeU)))));
        tracep->chgBit(oldp+100,((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                                >> 0xdU)))));
        tracep->chgBit(oldp+101,((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                                >> 0xcU)))));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome));
        tracep->chgSData(oldp+103,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_gshare),12);
        tracep->chgSData(oldp+104,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_chooser),12);
        tracep->chgSData(oldp+105,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_gshare),12);
        tracep->chgSData(oldp+106,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_chooser),12);
        tracep->chgCData(oldp+107,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__counter),2);
        tracep->chgBit(oldp+108,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_correct));
        tracep->chgBit(oldp+109,(((IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch) 
                                  & ((1U & (IData)(
                                                   (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                                    >> 0xeU))) 
                                     != (IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome)))));
        tracep->chgQData(oldp+110,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue
                                   [0U]),64);
        tracep->chgQData(oldp+112,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue
                                   [1U]),64);
        tracep->chgCData(oldp+114,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__wr_ptr),2);
        tracep->chgCData(oldp+115,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr),2);
        tracep->chgBit(oldp+116,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__full));
        tracep->chgBit(oldp+117,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__empty));
        tracep->chgSData(oldp+118,((0xffffU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                               >> 0xaU))),16);
        tracep->chgCData(oldp+119,((0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                             >> 4U))),6);
        tracep->chgCData(oldp+120,((3U & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                          >> 2U))),2);
        tracep->chgCData(oldp+121,(vlSelf->mips_core__DOT__I_CACHE__DOT__state),2);
        tracep->chgCData(oldp+122,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index),6);
        tracep->chgSData(oldp+123,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag),16);
        tracep->chgCData(oldp+124,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select),4);
        tracep->chgBit(oldp+125,(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word));
        tracep->chgQData(oldp+126,(vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits),64);
        tracep->chgIData(oldp+128,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+129,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+130,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+131,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+132,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+133,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+134,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+135,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+136,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+137,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+138,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+139,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+140,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+141,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+142,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+143,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+144,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+145,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+146,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+147,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+148,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+149,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+150,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+151,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+152,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+153,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+154,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+155,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgSData(oldp+156,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data),16);
        tracep->chgBit(oldp+157,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+158,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word)))));
        tracep->chgBit(oldp+159,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+160,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgSData(oldp+161,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
        tracep->chgCData(oldp+162,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgSData(oldp+163,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[0]),16);
        tracep->chgSData(oldp+164,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[1]),16);
        tracep->chgSData(oldp+165,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[2]),16);
        tracep->chgSData(oldp+166,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[3]),16);
        tracep->chgIData(oldp+167,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[0]),32);
        tracep->chgIData(oldp+168,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[1]),32);
        tracep->chgIData(oldp+169,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[2]),32);
        tracep->chgIData(oldp+170,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[3]),32);
        tracep->chgIData(oldp+171,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[0]),32);
        tracep->chgIData(oldp+172,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[1]),32);
        tracep->chgIData(oldp+173,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[2]),32);
        tracep->chgIData(oldp+174,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[3]),32);
        tracep->chgIData(oldp+175,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[0]),32);
        tracep->chgIData(oldp+176,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[1]),32);
        tracep->chgIData(oldp+177,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[2]),32);
        tracep->chgIData(oldp+178,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[3]),32);
        tracep->chgIData(oldp+179,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[0]),32);
        tracep->chgIData(oldp+180,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[1]),32);
        tracep->chgIData(oldp+181,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[2]),32);
        tracep->chgIData(oldp+182,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[3]),32);
        tracep->chgCData(oldp+183,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[0]),2);
        tracep->chgCData(oldp+184,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[1]),2);
        tracep->chgCData(oldp+185,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[2]),2);
        tracep->chgCData(oldp+186,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[3]),2);
        tracep->chgIData(oldp+187,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk3__DOT__i),32);
        tracep->chgIData(oldp+188,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        tracep->chgBit(oldp+189,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0]));
        tracep->chgBit(oldp+190,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0]));
        tracep->chgQData(oldp+191,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0]),37);
        tracep->chgBit(oldp+193,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0]));
        tracep->chgCData(oldp+194,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0]),4);
        tracep->chgBit(oldp+195,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0]));
        tracep->chgBit(oldp+196,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1]));
        tracep->chgQData(oldp+197,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0]),34);
        tracep->chgQData(oldp+199,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1]),34);
        tracep->chgBit(oldp+201,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0]));
        tracep->chgBit(oldp+202,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1]));
        tracep->chgQData(oldp+203,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0]),37);
        tracep->chgQData(oldp+205,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1]),37);
        tracep->chgBit(oldp+207,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
        tracep->chgQData(oldp+208,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload),34);
        tracep->chgBit(oldp+210,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0]));
        tracep->chgBit(oldp+211,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1]));
        tracep->chgQData(oldp+212,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0]),34);
        tracep->chgQData(oldp+214,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1]),34);
        tracep->chgQData(oldp+216,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload),34);
        tracep->chgBit(oldp+218,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+219,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+220,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready));
        tracep->chgBit(oldp+221,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0]));
        tracep->chgBit(oldp+222,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1]));
        tracep->chgQData(oldp+223,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0]),37);
        tracep->chgQData(oldp+225,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1]),37);
        tracep->chgQData(oldp+227,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload),37);
        tracep->chgBit(oldp+229,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
        tracep->chgCData(oldp+230,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id),4);
        tracep->chgBit(oldp+231,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
        tracep->chgQData(oldp+232,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload),34);
        tracep->chgBit(oldp+234,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0]));
        tracep->chgBit(oldp+235,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+236,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+237,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
        tracep->chgQData(oldp+238,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload),37);
        tracep->chgBit(oldp+240,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0]));
        tracep->chgQData(oldp+241,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0]),37);
        tracep->chgQData(oldp+243,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload),37);
        tracep->chgBit(oldp+245,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+246,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+247,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready));
        tracep->chgBit(oldp+248,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0]));
        tracep->chgCData(oldp+249,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0]),4);
        tracep->chgCData(oldp+250,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload),4);
        tracep->chgBit(oldp+251,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
        tracep->chgCData(oldp+252,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id),4);
        __Vtemp_h7604577d__0[0U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [0U][0U];
        __Vtemp_h7604577d__0[1U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [0U][1U];
        __Vtemp_h7604577d__0[2U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [0U][2U];
        __Vtemp_h7604577d__0[3U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [0U][3U];
        tracep->chgWData(oldp+253,(__Vtemp_h7604577d__0),102);
        __Vtemp_h760453c0__0[0U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [1U][0U];
        __Vtemp_h760453c0__0[1U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [1U][1U];
        __Vtemp_h760453c0__0[2U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [1U][2U];
        __Vtemp_h760453c0__0[3U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
            [1U][3U];
        tracep->chgWData(oldp+257,(__Vtemp_h760453c0__0),102);
        tracep->chgQData(oldp+261,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                                   [0U]),33);
        tracep->chgQData(oldp+263,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                                   [1U]),33);
        tracep->chgBit(oldp+265,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__sq_wr_ptr));
        tracep->chgBit(oldp+266,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__sq_rd_ptr));
        tracep->chgCData(oldp+267,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr),2);
        tracep->chgCData(oldp+268,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr),2);
        tracep->chgBit(oldp+269,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty_spot));
        tracep->chgBit(oldp+270,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__full));
        tracep->chgBit(oldp+271,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty));
        tracep->chgBit(oldp+272,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ready));
        tracep->chgBit(oldp+273,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__st_ready));
        tracep->chgBit(oldp+274,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ld_ready));
        tracep->chgBit(oldp+275,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_input_valid_reg));
        tracep->chgBit(oldp+276,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_action_reg));
        tracep->chgIData(oldp+277,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_reg),26);
        tracep->chgIData(oldp+278,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_next_reg),26);
        tracep->chgIData(oldp+279,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__data_reg),32);
        tracep->chgBit(oldp+280,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__tag_reg));
        tracep->chgIData(oldp+281,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__unnamedblk1__DOT__a),32);
        __Vtemp_hb7d42c05__0[0U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [0U][0U];
        __Vtemp_hb7d42c05__0[1U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [0U][1U];
        __Vtemp_hb7d42c05__0[2U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [0U][2U];
        __Vtemp_hb7d42c05__0[3U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [0U][3U];
        __Vtemp_hb7d42c05__0[4U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [0U][4U];
        tracep->chgWData(oldp+282,(__Vtemp_hb7d42c05__0),135);
        __Vtemp_hb7d436cc__0[0U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [1U][0U];
        __Vtemp_hb7d436cc__0[1U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [1U][1U];
        __Vtemp_hb7d436cc__0[2U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [1U][2U];
        __Vtemp_hb7d436cc__0[3U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [1U][3U];
        __Vtemp_hb7d436cc__0[4U] = vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__checkpoint_buffer
            [1U][4U];
        tracep->chgWData(oldp+287,(__Vtemp_hb7d436cc__0),135);
        tracep->chgBit(oldp+292,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__ch_wr_ptr));
        tracep->chgBit(oldp+293,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__ch_rd_ptr));
        tracep->chgCData(oldp+294,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[0]),6);
        tracep->chgCData(oldp+295,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[1]),6);
        tracep->chgCData(oldp+296,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[2]),6);
        tracep->chgCData(oldp+297,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[3]),6);
        tracep->chgCData(oldp+298,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[4]),6);
        tracep->chgCData(oldp+299,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[5]),6);
        tracep->chgCData(oldp+300,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[6]),6);
        tracep->chgCData(oldp+301,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[7]),6);
        tracep->chgCData(oldp+302,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[8]),6);
        tracep->chgCData(oldp+303,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[9]),6);
        tracep->chgCData(oldp+304,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[10]),6);
        tracep->chgCData(oldp+305,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[11]),6);
        tracep->chgCData(oldp+306,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[12]),6);
        tracep->chgCData(oldp+307,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[13]),6);
        tracep->chgCData(oldp+308,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[14]),6);
        tracep->chgCData(oldp+309,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[15]),6);
        tracep->chgCData(oldp+310,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[16]),6);
        tracep->chgCData(oldp+311,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[17]),6);
        tracep->chgCData(oldp+312,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[18]),6);
        tracep->chgCData(oldp+313,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[19]),6);
        tracep->chgCData(oldp+314,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[20]),6);
        tracep->chgCData(oldp+315,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[21]),6);
        tracep->chgCData(oldp+316,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[22]),6);
        tracep->chgCData(oldp+317,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[23]),6);
        tracep->chgCData(oldp+318,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[24]),6);
        tracep->chgCData(oldp+319,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[25]),6);
        tracep->chgCData(oldp+320,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[26]),6);
        tracep->chgCData(oldp+321,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[27]),6);
        tracep->chgCData(oldp+322,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[28]),6);
        tracep->chgCData(oldp+323,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[29]),6);
        tracep->chgCData(oldp+324,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[30]),6);
        tracep->chgCData(oldp+325,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[31]),6);
        tracep->chgQData(oldp+326,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg),64);
        tracep->chgQData(oldp+328,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_ready),64);
        tracep->chgIData(oldp+330,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk2__DOT__i),32);
        tracep->chgIData(oldp+331,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk3__DOT__j),32);
        tracep->chgIData(oldp+332,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk4__DOT__k),32);
        tracep->chgIData(oldp+333,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk5__DOT__i),32);
        tracep->chgIData(oldp+334,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk6__DOT__j),32);
        tracep->chgIData(oldp+335,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk7__DOT__i),32);
        tracep->chgIData(oldp+336,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk8__DOT__j),32);
        __Vtemp_h8184942a__0[0U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
            [0U][0U];
        __Vtemp_h8184942a__0[1U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
            [0U][1U];
        __Vtemp_h8184942a__0[2U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
            [0U][2U];
        tracep->chgWData(oldp+337,(__Vtemp_h8184942a__0),73);
        __Vtemp_h818496e9__0[0U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
            [1U][0U];
        __Vtemp_h818496e9__0[1U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
            [1U][1U];
        __Vtemp_h818496e9__0[2U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
            [1U][2U];
        tracep->chgWData(oldp+340,(__Vtemp_h818496e9__0),73);
        tracep->chgCData(oldp+343,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr),2);
        tracep->chgCData(oldp+344,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr),2);
        tracep->chgBit(oldp+345,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__empty_spot));
        tracep->chgCData(oldp+346,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__input_inst_type),2);
        tracep->chgBit(oldp+347,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__full));
        tracep->chgBit(oldp+348,(((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr) 
                                  == (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))));
        tracep->chgBit(oldp+349,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready));
        tracep->chgBit(oldp+350,((IData)(((0x100U == 
                                           (0x180U 
                                            & vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                            [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U])) 
                                          & (IData)(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.ld_ready)))));
        tracep->chgCData(oldp+351,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                    >> 0x1eU)))),4);
        tracep->chgCData(oldp+352,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                    >> 0x1aU)))),4);
        tracep->chgIData(oldp+353,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload))),26);
        tracep->chgBit(oldp+354,((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgBit(oldp+355,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+356,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+357,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload)),32);
        tracep->chgBit(oldp+358,((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgIData(oldp+359,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                   [0U]),32);
        tracep->chgBit(oldp+360,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                                 [0U]));
        tracep->chgCData(oldp+361,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload
                                   [0U]),4);
        tracep->chgCData(oldp+362,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                    >> 0x1eU)))),4);
        tracep->chgCData(oldp+363,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                    >> 0x1aU)))),4);
        tracep->chgIData(oldp+364,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload))),26);
        tracep->chgBit(oldp+365,((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgIData(oldp+366,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                     << 0xaU) | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                                 << 4U))),26);
        tracep->chgBit(oldp+367,((1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
        tracep->chgIData(oldp+368,((((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag) 
                                     << 0xaU) | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                                 << 4U))),26);
        tracep->chgBit(oldp+369,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                                 [1U]));
        tracep->chgBit(oldp+370,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                [1U] 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+371,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                    [1U] 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+372,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                           [1U])),32);
        tracep->chgBit(oldp+373,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                                 [0U]));
        tracep->chgBit(oldp+374,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                [0U] 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+375,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                    [0U] 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+376,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                           [0U])),32);
        tracep->chgBit(oldp+377,(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.ld_ready));
        tracep->chgIData(oldp+378,(vlSymsp->TOP__mips_core__DOT__pc_current.pc),26);
        tracep->chgBit(oldp+379,(vlSymsp->TOP__mips_core__DOT__inst_q_output.valid));
        tracep->chgBit(oldp+380,(vlSymsp->TOP__mips_core__DOT__inst_q_output.full));
        tracep->chgIData(oldp+381,(vlSymsp->TOP__mips_core__DOT__inst_q_output.data),32);
        tracep->chgBit(oldp+382,(vlSymsp->TOP__mips_core__DOT__rob_status.full));
        tracep->chgBit(oldp+383,(vlSymsp->TOP__mips_core__DOT__rob_status.tag));
        tracep->chgBit(oldp+384,(vlSymsp->TOP__mips_core__DOT__rob_reg_wr.reg_wr_en));
        tracep->chgIData(oldp+385,(((vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                     [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][1U] 
                                     << 0x1eU) | (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                                  [
                                                  (1U 
                                                   & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                                  >> 2U))),32);
        tracep->chgCData(oldp+386,(vlSymsp->TOP__mips_core__DOT__rob_reg_wr.reg_wr_addr),6);
        tracep->chgCData(oldp+387,((0x1fU & ((vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                              [(1U 
                                                & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U] 
                                              << 4U) 
                                             | (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                                [(1U 
                                                  & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][1U] 
                                                >> 0x1cU)))),5);
        tracep->chgBit(oldp+388,(vlSymsp->TOP__mips_core__DOT__rob_mem_wr.mem_wr_en));
        tracep->chgIData(oldp+389,(vlSymsp->TOP__mips_core__DOT__rob_mem_wr.mem_wr_addr),26);
        tracep->chgBit(oldp+390,(vlSymsp->TOP__mips_core__DOT__rob_jump_reg_commit.valid_jump_reg));
        tracep->chgIData(oldp+391,((0x3ffffffU & (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                                  [
                                                  (1U 
                                                   & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                                  >> 2U))),26);
        tracep->chgBit(oldp+392,(vlSymsp->TOP__mips_core__DOT__st_data_output.valid_st));
        tracep->chgBit(oldp+393,(vlSymsp->TOP__mips_core__DOT__st_data_output.tag));
        tracep->chgIData(oldp+394,(vlSymsp->TOP__mips_core__DOT__st_data_output.mem_addr),26);
        tracep->chgIData(oldp+395,(vlSymsp->TOP__mips_core__DOT__st_data_output.reg_value),32);
        tracep->chgBit(oldp+396,(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.full));
        tracep->chgBit(oldp+397,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.valid));
        tracep->chgBit(oldp+398,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.tag));
        tracep->chgCData(oldp+399,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl),5);
        tracep->chgIData(oldp+400,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1),32);
        tracep->chgIData(oldp+401,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2),32);
        tracep->chgBit(oldp+402,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_status.full));
        tracep->chgBit(oldp+403,(vlSymsp->TOP__mips_core__DOT__alu_output.valid));
        tracep->chgBit(oldp+404,(vlSymsp->TOP__mips_core__DOT__alu_output.tag));
        tracep->chgIData(oldp+405,(vlSymsp->TOP__mips_core__DOT__alu_output.result),32);
        tracep->chgBit(oldp+406,(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid));
        tracep->chgBit(oldp+407,(vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action));
        tracep->chgIData(oldp+408,(vlSymsp->TOP__mips_core__DOT__d_cache_input.addr),26);
        tracep->chgIData(oldp+409,(vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next),26);
        tracep->chgIData(oldp+410,(vlSymsp->TOP__mips_core__DOT__d_cache_input.data),32);
        tracep->chgBit(oldp+411,(vlSymsp->TOP__mips_core__DOT__decoder_output.valid));
        tracep->chgCData(oldp+412,(vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl),5);
        tracep->chgBit(oldp+413,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump));
        tracep->chgBit(oldp+414,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch));
        tracep->chgBit(oldp+415,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump));
        tracep->chgBit(oldp+416,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump_reg));
        tracep->chgBit(oldp+417,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access));
        tracep->chgBit(oldp+418,(vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action));
        tracep->chgBit(oldp+419,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs));
        tracep->chgCData(oldp+420,(vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr),5);
        tracep->chgBit(oldp+421,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt));
        tracep->chgCData(oldp+422,(vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr),5);
        tracep->chgBit(oldp+423,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate));
        tracep->chgIData(oldp+424,(vlSymsp->TOP__mips_core__DOT__decoder_output.immediate),32);
        tracep->chgBit(oldp+425,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw));
        tracep->chgCData(oldp+426,(vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgIData(oldp+427,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+428,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+429,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+430,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+431,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+432,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+433,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+434,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                     ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                     : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgWData(oldp+435,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output),67);
        tracep->chgBit(oldp+438,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[0]));
        tracep->chgBit(oldp+439,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[1]));
        tracep->chgBit(oldp+440,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[2]));
        tracep->chgBit(oldp+441,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[3]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+442,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+443,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+444,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+445,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
        tracep->chgSData(oldp+446,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data),16);
        tracep->chgIData(oldp+447,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+448,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+449,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+450,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
        tracep->chgSData(oldp+451,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgCData(oldp+452,(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state),3);
        tracep->chgCData(oldp+453,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr),6);
        tracep->chgBit(oldp+454,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss));
        tracep->chgBit(oldp+455,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload));
        tracep->chgBit(oldp+456,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload));
        tracep->chgBit(oldp+457,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
        tracep->chgBit(oldp+458,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__req_valid));
        tracep->chgCData(oldp+459,((0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_next.pc 
                                             >> 4U))),6);
        tracep->chgCData(oldp+460,(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state),2);
        tracep->chgCData(oldp+461,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we),4);
        tracep->chgIData(oldp+462,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[0]),32);
        tracep->chgIData(oldp+463,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[1]),32);
        tracep->chgIData(oldp+464,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[2]),32);
        tracep->chgIData(oldp+465,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[3]),32);
        tracep->chgBit(oldp+466,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit));
        tracep->chgIData(oldp+467,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[0]),32);
        tracep->chgIData(oldp+468,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[1]),32);
        tracep->chgIData(oldp+469,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[2]),32);
        tracep->chgIData(oldp+470,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[3]),32);
        tracep->chgSData(oldp+471,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_wdata),16);
        tracep->chgBit(oldp+472,(vlSelf->mips_core__DOT__I_CACHE__DOT__main_cache_hit));
        tracep->chgBit(oldp+473,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
        tracep->chgBit(oldp+474,(vlSelf->mips_core__DOT__I_CACHE__DOT__miss));
        tracep->chgBit(oldp+475,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))));
        tracep->chgIData(oldp+476,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                   [0U]),32);
        tracep->chgBit(oldp+477,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)))));
        tracep->chgBit(oldp+478,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 1U))));
        tracep->chgIData(oldp+479,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                   [1U]),32);
        tracep->chgBit(oldp+480,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+481,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 2U))));
        tracep->chgIData(oldp+482,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                   [2U]),32);
        tracep->chgBit(oldp+483,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 2U)))));
        tracep->chgBit(oldp+484,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 3U))));
        tracep->chgIData(oldp+485,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                   [3U]),32);
        tracep->chgBit(oldp+486,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 3U)))));
        tracep->chgIData(oldp+487,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[0]),32);
        tracep->chgIData(oldp+488,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[1]),32);
        tracep->chgIData(oldp+489,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[2]),32);
        tracep->chgIData(oldp+490,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[3]),32);
        tracep->chgCData(oldp+491,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim),2);
        tracep->chgIData(oldp+492,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j),32);
        tracep->chgBit(oldp+493,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0]));
        tracep->chgBit(oldp+494,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0]));
        tracep->chgBit(oldp+495,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0]));
        tracep->chgBit(oldp+496,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1]));
        tracep->chgBit(oldp+497,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+498,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1]));
        tracep->chgBit(oldp+499,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+500,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+501,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+502,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+503,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready));
        tracep->chgCData(oldp+504,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg),6);
        tracep->chgBit(oldp+505,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__avail_reg));
        tracep->chgBit(oldp+506,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+507,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+508,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                 [1U]));
        tracep->chgBit(oldp+509,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+510,(vlSymsp->TOP__mips_core__DOT__i_hc.stall));
        tracep->chgBit(oldp+511,(vlSymsp->TOP__mips_core__DOT__d_hc.flush));
        tracep->chgBit(oldp+512,(vlSymsp->TOP__mips_core__DOT__d_hc.stall));
        tracep->chgBit(oldp+513,(vlSymsp->TOP__mips_core__DOT__branch_pred_hc.flush));
        tracep->chgBit(oldp+514,(vlSymsp->TOP__mips_core__DOT__i_load_pc.we));
        tracep->chgIData(oldp+515,(vlSymsp->TOP__mips_core__DOT__i_load_pc.new_pc),26);
        tracep->chgIData(oldp+516,(vlSymsp->TOP__mips_core__DOT__pc_next.pc),26);
        tracep->chgCData(oldp+517,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_phy),6);
        tracep->chgBit(oldp+518,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_ready));
        tracep->chgBit(oldp+519,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_tag));
        tracep->chgCData(oldp+520,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_phy),6);
        tracep->chgBit(oldp+521,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_ready));
        tracep->chgBit(oldp+522,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_tag));
        tracep->chgCData(oldp+523,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rw_phy),6);
        tracep->chgIData(oldp+524,(vlSymsp->TOP__mips_core__DOT__reg_file_data.rs_data),32);
        tracep->chgIData(oldp+525,(vlSymsp->TOP__mips_core__DOT__reg_file_data.rt_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+526,(vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid));
        tracep->chgCData(oldp+527,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we),4);
        tracep->chgIData(oldp+528,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0]),32);
        tracep->chgIData(oldp+529,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1]),32);
        tracep->chgIData(oldp+530,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2]),32);
        tracep->chgIData(oldp+531,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3]),32);
        tracep->chgSData(oldp+532,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata),16);
        tracep->chgBit(oldp+533,(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
        tracep->chgBit(oldp+534,(vlSelf->mips_core__DOT__D_CACHE__DOT__miss));
        tracep->chgBit(oldp+535,((1U & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we))));
        tracep->chgBit(oldp+536,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)))));
        tracep->chgBit(oldp+537,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 1U))));
        tracep->chgBit(oldp+538,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+539,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 2U))));
        tracep->chgBit(oldp+540,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 2U)))));
        tracep->chgBit(oldp+541,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 3U))));
        tracep->chgBit(oldp+542,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 3U)))));
        tracep->chgBit(oldp+543,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dc_miss));
        tracep->chgIData(oldp+544,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0]),32);
        tracep->chgIData(oldp+545,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1]),32);
        tracep->chgIData(oldp+546,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2]),32);
        tracep->chgIData(oldp+547,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3]),32);
        tracep->chgBit(oldp+548,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_wr_en));
        tracep->chgIData(oldp+549,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[0]),32);
        tracep->chgIData(oldp+550,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[1]),32);
        tracep->chgIData(oldp+551,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[2]),32);
        tracep->chgIData(oldp+552,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[3]),32);
        tracep->chgSData(oldp+553,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata),16);
        tracep->chgIData(oldp+554,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[0]),32);
        tracep->chgIData(oldp+555,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[1]),32);
        tracep->chgIData(oldp+556,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[2]),32);
        tracep->chgIData(oldp+557,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[3]),32);
        tracep->chgQData(oldp+558,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0]),34);
        tracep->chgQData(oldp+560,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0]),34);
        tracep->chgQData(oldp+562,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload),34);
        tracep->chgBit(oldp+564,(vlSymsp->TOP__mips_core__DOT__m_hc.stall));
        tracep->chgBit(oldp+565,(vlSymsp->TOP__mips_core__DOT__cdb_output.valid));
        tracep->chgBit(oldp+566,(vlSymsp->TOP__mips_core__DOT__cdb_output.tag));
        tracep->chgIData(oldp+567,(vlSymsp->TOP__mips_core__DOT__cdb_output.data),32);
        tracep->chgIData(oldp+568,(vlSymsp->TOP__mips_core__DOT__d_cache_output.data),32);
    }
    tracep->chgBit(oldp+569,(vlSelf->clk));
    tracep->chgBit(oldp+570,(vlSelf->rst_n));
    tracep->chgBit(oldp+571,(vlSelf->done));
    tracep->chgBit(oldp+572,(vlSelf->AWREADY));
    tracep->chgBit(oldp+573,(vlSelf->AWVALID));
    tracep->chgCData(oldp+574,(vlSelf->AWID),4);
    tracep->chgCData(oldp+575,(vlSelf->AWLEN),4);
    tracep->chgIData(oldp+576,(vlSelf->AWADDR),26);
    tracep->chgBit(oldp+577,(vlSelf->WREADY));
    tracep->chgBit(oldp+578,(vlSelf->WVALID));
    tracep->chgBit(oldp+579,(vlSelf->WLAST));
    tracep->chgCData(oldp+580,(vlSelf->WID),4);
    tracep->chgIData(oldp+581,(vlSelf->WDATA),32);
    tracep->chgBit(oldp+582,(vlSelf->BREADY));
    tracep->chgBit(oldp+583,(vlSelf->BVALID));
    tracep->chgCData(oldp+584,(vlSelf->BID),4);
    tracep->chgBit(oldp+585,(vlSelf->ARREADY));
    tracep->chgBit(oldp+586,(vlSelf->ARVALID));
    tracep->chgCData(oldp+587,(vlSelf->ARID),4);
    tracep->chgCData(oldp+588,(vlSelf->ARLEN),4);
    tracep->chgIData(oldp+589,(vlSelf->ARADDR),26);
    tracep->chgBit(oldp+590,(vlSelf->RREADY));
    tracep->chgBit(oldp+591,(vlSelf->RVALID));
    tracep->chgBit(oldp+592,(vlSelf->RLAST));
    tracep->chgCData(oldp+593,(vlSelf->RID),4);
    tracep->chgIData(oldp+594,(vlSelf->RDATA),32);
    tracep->chgQData(oldp+595,((((QData)((IData)(vlSelf->RID)) 
                                 << 0x21U) | (((QData)((IData)(vlSelf->RLAST)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->RDATA))))),37);
    tracep->chgIData(oldp+597,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                 << 0xaU) | (0x3f0U 
                                             & vlSymsp->TOP__mips_core__DOT__d_cache_input.addr))),26);
    tracep->chgBit(oldp+598,((((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
                               & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)) 
                              & (IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action))));
    tracep->chgIData(oldp+599,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline
                                [(3U & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                        >> 2U))] : 
                                vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                                [(3U & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                        >> 2U))])),32);
}

void Vmips_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_cleanup\n"); );
    // Init
    Vmips_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmips_core___024root*>(voidSelf);
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
