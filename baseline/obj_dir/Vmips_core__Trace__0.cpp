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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgBit(oldp+0,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready[0]));
        tracep->chgBit(oldp+1,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[0]));
        tracep->chgBit(oldp+2,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[1]));
        tracep->chgBit(oldp+3,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[0]));
        tracep->chgBit(oldp+4,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[1]));
        tracep->chgBit(oldp+5,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[0]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+6,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+7,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+8,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+9,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
        tracep->chgSData(oldp+10,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data),16);
        tracep->chgIData(oldp+11,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+12,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+13,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
        tracep->chgIData(oldp+14,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
        tracep->chgSData(oldp+15,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgIData(oldp+16,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+17,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+18,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+19,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgSData(oldp+20,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag)
                                    ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data)
                                    : (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data))),16);
        tracep->chgIData(oldp+21,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+22,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+23,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+24,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+25,(vlSelf->mips_core__DOT__lw_hazard));
        tracep->chgSData(oldp+26,((0xffffU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                              >> 0xaU))),16);
        tracep->chgCData(oldp+27,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                            >> 4U))),6);
        tracep->chgCData(oldp+28,((3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                         >> 2U))),2);
        tracep->chgCData(oldp+29,(vlSelf->mips_core__DOT__D_CACHE__DOT__state),3);
        tracep->chgBit(oldp+30,(vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response));
        tracep->chgCData(oldp+31,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index),6);
        tracep->chgSData(oldp+32,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag),16);
        tracep->chgCData(oldp+33,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select),4);
        tracep->chgIData(oldp+34,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata),32);
        tracep->chgCData(oldp+35,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr),6);
        tracep->chgBit(oldp+36,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word));
        tracep->chgQData(oldp+37,(vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits),64);
        tracep->chgQData(oldp+39,(vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits),64);
        tracep->chgIData(oldp+41,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0]),32);
        tracep->chgIData(oldp+42,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1]),32);
        tracep->chgIData(oldp+43,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2]),32);
        tracep->chgIData(oldp+44,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3]),32);
        tracep->chgBit(oldp+45,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word));
        tracep->chgIData(oldp+46,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+47,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+48,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+49,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+50,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+51,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+52,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+53,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+54,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+55,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+56,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+57,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+58,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+59,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+60,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+61,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+62,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+63,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+64,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+65,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+66,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+67,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+68,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+69,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+70,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+71,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+72,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+73,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgSData(oldp+74,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data),16);
        tracep->chgBit(oldp+75,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+76,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)))));
        tracep->chgBit(oldp+77,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+78,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgSData(oldp+79,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
        tracep->chgBit(oldp+80,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+81,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+82,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i),32);
        tracep->chgIData(oldp+83,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i),32);
        tracep->chgBit(oldp+84,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload));
        tracep->chgBit(oldp+85,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
        tracep->chgBit(oldp+86,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump) 
                                 & (~ (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump)))));
        tracep->chgIData(oldp+87,(vlSymsp->TOP__mips_core__DOT__i2d_pc.pc),26);
        tracep->chgBit(oldp+88,(((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
                                 & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch))));
        tracep->chgIData(oldp+89,(vlSymsp->TOP__mips_core__DOT__d2e_pc.pc),26);
        tracep->chgBit(oldp+90,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome));
        tracep->chgSData(oldp+92,((0xffffU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                              >> 0xaU))),16);
        tracep->chgCData(oldp+93,((0x3fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                            >> 4U))),6);
        tracep->chgCData(oldp+94,((3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                         >> 2U))),2);
        tracep->chgCData(oldp+95,(vlSelf->mips_core__DOT__I_CACHE__DOT__state),2);
        tracep->chgCData(oldp+96,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index),6);
        tracep->chgSData(oldp+97,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag),16);
        tracep->chgCData(oldp+98,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select),4);
        tracep->chgCData(oldp+99,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we),4);
        tracep->chgIData(oldp+100,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                           [0U])),32);
        tracep->chgBit(oldp+101,(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word));
        tracep->chgQData(oldp+102,(vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits),64);
        tracep->chgBit(oldp+104,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))));
        tracep->chgIData(oldp+105,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+106,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+107,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)))));
        tracep->chgBit(oldp+108,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+109,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+110,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+111,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+112,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgBit(oldp+113,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 1U))));
        tracep->chgIData(oldp+114,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+115,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+116,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+117,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+118,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+119,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+120,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+121,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgBit(oldp+122,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 2U))));
        tracep->chgIData(oldp+123,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+124,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+125,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 2U)))));
        tracep->chgBit(oldp+126,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+127,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+128,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+129,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+130,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgBit(oldp+131,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 3U))));
        tracep->chgIData(oldp+132,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+133,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+134,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 3U)))));
        tracep->chgBit(oldp+135,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+136,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+137,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+138,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+139,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgSData(oldp+140,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data),16);
        tracep->chgBit(oldp+141,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+142,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word)))));
        tracep->chgBit(oldp+143,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+144,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgSData(oldp+145,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
        tracep->chgCData(oldp+146,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgBit(oldp+147,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0]));
        tracep->chgBit(oldp+148,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0]));
        tracep->chgQData(oldp+149,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0]),37);
        tracep->chgBit(oldp+151,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0]));
        tracep->chgCData(oldp+152,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0]),4);
        tracep->chgBit(oldp+153,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0]));
        tracep->chgBit(oldp+154,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1]));
        tracep->chgQData(oldp+155,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0]),34);
        tracep->chgQData(oldp+157,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1]),34);
        tracep->chgBit(oldp+159,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0]));
        tracep->chgBit(oldp+160,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1]));
        tracep->chgQData(oldp+161,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0]),37);
        tracep->chgQData(oldp+163,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1]),37);
        tracep->chgBit(oldp+165,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
        tracep->chgQData(oldp+166,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload),34);
        tracep->chgBit(oldp+168,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0]));
        tracep->chgBit(oldp+169,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1]));
        tracep->chgQData(oldp+170,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0]),34);
        tracep->chgQData(oldp+172,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1]),34);
        tracep->chgQData(oldp+174,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload),34);
        tracep->chgBit(oldp+176,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+177,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+178,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready));
        tracep->chgBit(oldp+179,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0]));
        tracep->chgBit(oldp+180,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1]));
        tracep->chgQData(oldp+181,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0]),37);
        tracep->chgQData(oldp+183,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1]),37);
        tracep->chgQData(oldp+185,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload),37);
        tracep->chgBit(oldp+187,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
        tracep->chgCData(oldp+188,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id),4);
        tracep->chgBit(oldp+189,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
        tracep->chgQData(oldp+190,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload),34);
        tracep->chgBit(oldp+192,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0]));
        tracep->chgBit(oldp+193,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+194,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+195,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
        tracep->chgQData(oldp+196,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload),37);
        tracep->chgBit(oldp+198,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0]));
        tracep->chgQData(oldp+199,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0]),37);
        tracep->chgQData(oldp+201,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload),37);
        tracep->chgBit(oldp+203,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+204,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+205,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready));
        tracep->chgBit(oldp+206,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0]));
        tracep->chgCData(oldp+207,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0]),4);
        tracep->chgCData(oldp+208,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload),4);
        tracep->chgBit(oldp+209,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
        tracep->chgCData(oldp+210,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id),4);
        tracep->chgIData(oldp+211,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[0]),32);
        tracep->chgIData(oldp+212,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[1]),32);
        tracep->chgIData(oldp+213,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[2]),32);
        tracep->chgIData(oldp+214,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[3]),32);
        tracep->chgIData(oldp+215,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[4]),32);
        tracep->chgIData(oldp+216,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[5]),32);
        tracep->chgIData(oldp+217,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[6]),32);
        tracep->chgIData(oldp+218,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[7]),32);
        tracep->chgIData(oldp+219,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[8]),32);
        tracep->chgIData(oldp+220,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[9]),32);
        tracep->chgIData(oldp+221,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[10]),32);
        tracep->chgIData(oldp+222,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[11]),32);
        tracep->chgIData(oldp+223,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[12]),32);
        tracep->chgIData(oldp+224,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[13]),32);
        tracep->chgIData(oldp+225,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[14]),32);
        tracep->chgIData(oldp+226,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[15]),32);
        tracep->chgIData(oldp+227,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[16]),32);
        tracep->chgIData(oldp+228,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[17]),32);
        tracep->chgIData(oldp+229,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[18]),32);
        tracep->chgIData(oldp+230,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[19]),32);
        tracep->chgIData(oldp+231,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[20]),32);
        tracep->chgIData(oldp+232,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[21]),32);
        tracep->chgIData(oldp+233,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[22]),32);
        tracep->chgIData(oldp+234,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[23]),32);
        tracep->chgIData(oldp+235,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[24]),32);
        tracep->chgIData(oldp+236,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[25]),32);
        tracep->chgIData(oldp+237,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[26]),32);
        tracep->chgIData(oldp+238,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[27]),32);
        tracep->chgIData(oldp+239,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[28]),32);
        tracep->chgIData(oldp+240,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[29]),32);
        tracep->chgIData(oldp+241,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[30]),32);
        tracep->chgIData(oldp+242,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[31]),32);
        tracep->chgCData(oldp+243,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                    >> 0x1eU)))),4);
        tracep->chgCData(oldp+244,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                    >> 0x1aU)))),4);
        tracep->chgIData(oldp+245,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload))),26);
        tracep->chgBit(oldp+246,((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgBit(oldp+247,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+248,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+249,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload)),32);
        tracep->chgBit(oldp+250,((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgIData(oldp+251,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                   [0U]),32);
        tracep->chgBit(oldp+252,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                                 [0U]));
        tracep->chgCData(oldp+253,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload
                                   [0U]),4);
        tracep->chgCData(oldp+254,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                    >> 0x1eU)))),4);
        tracep->chgCData(oldp+255,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                    >> 0x1aU)))),4);
        tracep->chgIData(oldp+256,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload))),26);
        tracep->chgBit(oldp+257,((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgIData(oldp+258,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                     << 0xaU) | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                                 << 4U))),26);
        tracep->chgBit(oldp+259,((1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
        tracep->chgIData(oldp+260,((((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag) 
                                     << 0xaU) | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                                 << 4U))),26);
        tracep->chgBit(oldp+261,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                                 [1U]));
        tracep->chgBit(oldp+262,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                [1U] 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+263,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                    [1U] 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+264,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                           [1U])),32);
        tracep->chgBit(oldp+265,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                                 [0U]));
        tracep->chgBit(oldp+266,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                [0U] 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+267,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                    [0U] 
                                                    >> 0x21U)))),4);
        tracep->chgBit(oldp+268,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                                  | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload))));
        tracep->chgBit(oldp+269,(vlSymsp->TOP__mips_core__DOT__i2d_inst.valid));
        tracep->chgIData(oldp+270,(vlSymsp->TOP__mips_core__DOT__i2d_inst.data),32);
        tracep->chgBit(oldp+271,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access));
        tracep->chgBit(oldp+272,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action));
        tracep->chgBit(oldp+273,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw));
        tracep->chgCData(oldp+274,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr),5);
        tracep->chgBit(oldp+275,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch));
        tracep->chgIData(oldp+276,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target),26);
        tracep->chgBit(oldp+277,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access));
        tracep->chgBit(oldp+278,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action));
        tracep->chgIData(oldp+279,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data),32);
        tracep->chgBit(oldp+280,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw));
        tracep->chgCData(oldp+281,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr),5);
        tracep->chgIData(oldp+282,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.result),32);
        tracep->chgBit(oldp+283,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access));
        tracep->chgIData(oldp+284,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result),32);
        tracep->chgBit(oldp+285,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw));
        tracep->chgCData(oldp+286,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr),5);
        tracep->chgBit(oldp+287,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw));
        tracep->chgCData(oldp+288,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr),5);
        tracep->chgIData(oldp+289,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data),32);
        tracep->chgBit(oldp+290,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid));
        tracep->chgCData(oldp+291,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl),5);
        tracep->chgBit(oldp+292,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid));
        tracep->chgCData(oldp+293,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl),5);
        tracep->chgIData(oldp+294,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1),32);
        tracep->chgIData(oldp+295,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2),32);
        tracep->chgBit(oldp+296,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid));
        tracep->chgIData(oldp+297,((0x3ffffffU & vlSymsp->TOP__mips_core__DOT__ex_alu_output.result)),26);
        tracep->chgBit(oldp+298,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid));
        tracep->chgBit(oldp+299,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action));
        tracep->chgIData(oldp+300,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr),26);
        tracep->chgIData(oldp+301,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data),32);
        tracep->chgBit(oldp+302,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump));
        tracep->chgBit(oldp+303,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump));
        tracep->chgBit(oldp+304,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg));
        tracep->chgIData(oldp+305,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target),26);
        tracep->chgBit(oldp+306,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs));
        tracep->chgCData(oldp+307,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr),5);
        tracep->chgBit(oldp+308,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt));
        tracep->chgCData(oldp+309,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr),5);
        tracep->chgBit(oldp+310,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate));
        tracep->chgIData(oldp+311,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate),32);
        tracep->chgIData(oldp+312,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs)
                                     ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                    [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr]
                                     : 0U)),32);
        tracep->chgIData(oldp+313,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt)
                                     ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                    [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr]
                                     : 0U)),32);
        tracep->chgIData(oldp+314,(vlSymsp->TOP__mips_core__DOT__if_pc_current.pc),26);
        tracep->chgIData(oldp+315,(vlSymsp->TOP__mips_core__DOT__e2m_pc.pc),26);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgIData(oldp+316,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                     << 0xaU) | (0x3f0U 
                                                 & vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr))),26);
        tracep->chgIData(oldp+317,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload)
                                     ? vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target
                                     : vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target)),26);
        tracep->chgIData(oldp+318,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                                   [(3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                           >> 2U))]),32);
        tracep->chgIData(oldp+319,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
                                   [(3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                           >> 2U))]),32);
        tracep->chgIData(oldp+320,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate)
                                     ? vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate
                                     : vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgCData(oldp+321,(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state),3);
        tracep->chgCData(oldp+322,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr),6);
        tracep->chgCData(oldp+323,(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state),2);
        tracep->chgBit(oldp+324,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0]));
        tracep->chgBit(oldp+325,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0]));
        tracep->chgBit(oldp+326,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0]));
        tracep->chgBit(oldp+327,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1]));
        tracep->chgBit(oldp+328,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+329,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1]));
        tracep->chgBit(oldp+330,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+331,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+332,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+333,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+334,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+335,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+336,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+337,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                 [1U]));
        tracep->chgBit(oldp+338,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                 [0U]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+339,(vlSelf->mips_core__DOT__mem_done));
        tracep->chgCData(oldp+340,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                                             >> 4U))),6);
        tracep->chgCData(oldp+341,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we),4);
        tracep->chgIData(oldp+342,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0]),32);
        tracep->chgIData(oldp+343,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1]),32);
        tracep->chgIData(oldp+344,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2]),32);
        tracep->chgIData(oldp+345,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3]),32);
        tracep->chgSData(oldp+346,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata),16);
        tracep->chgBit(oldp+347,(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
        tracep->chgBit(oldp+348,(vlSelf->mips_core__DOT__D_CACHE__DOT__miss));
        tracep->chgBit(oldp+349,((1U & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we))));
        tracep->chgBit(oldp+350,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)))));
        tracep->chgBit(oldp+351,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 1U))));
        tracep->chgBit(oldp+352,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+353,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 2U))));
        tracep->chgBit(oldp+354,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 2U)))));
        tracep->chgBit(oldp+355,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 3U))));
        tracep->chgBit(oldp+356,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 3U)))));
        tracep->chgBit(oldp+357,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss));
        tracep->chgBit(oldp+358,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss));
        tracep->chgBit(oldp+359,((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))));
        tracep->chgBit(oldp+360,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall));
        tracep->chgBit(oldp+361,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush));
        tracep->chgBit(oldp+362,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall));
        tracep->chgBit(oldp+363,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush));
        tracep->chgIData(oldp+364,(vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target),26);
        tracep->chgCData(oldp+365,((0x3fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                                             >> 4U))),6);
        tracep->chgIData(oldp+366,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0]),32);
        tracep->chgIData(oldp+367,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1]),32);
        tracep->chgIData(oldp+368,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2]),32);
        tracep->chgIData(oldp+369,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3]),32);
        tracep->chgBit(oldp+370,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
        tracep->chgBit(oldp+371,(vlSelf->mips_core__DOT__I_CACHE__DOT__miss));
        tracep->chgQData(oldp+372,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0]),34);
        tracep->chgQData(oldp+374,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0]),34);
        tracep->chgQData(oldp+376,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload),34);
        tracep->chgIData(oldp+378,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data),32);
        tracep->chgIData(oldp+379,(vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data),32);
        tracep->chgIData(oldp+380,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data),32);
        tracep->chgIData(oldp+381,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next),26);
        tracep->chgIData(oldp+382,(vlSymsp->TOP__mips_core__DOT__if_pc_next.pc),26);
    }
    tracep->chgBit(oldp+383,(vlSelf->clk));
    tracep->chgBit(oldp+384,(vlSelf->rst_n));
    tracep->chgBit(oldp+385,(vlSelf->done));
    tracep->chgBit(oldp+386,(vlSelf->AWREADY));
    tracep->chgBit(oldp+387,(vlSelf->AWVALID));
    tracep->chgCData(oldp+388,(vlSelf->AWID),4);
    tracep->chgCData(oldp+389,(vlSelf->AWLEN),4);
    tracep->chgIData(oldp+390,(vlSelf->AWADDR),26);
    tracep->chgBit(oldp+391,(vlSelf->WREADY));
    tracep->chgBit(oldp+392,(vlSelf->WVALID));
    tracep->chgBit(oldp+393,(vlSelf->WLAST));
    tracep->chgCData(oldp+394,(vlSelf->WID),4);
    tracep->chgIData(oldp+395,(vlSelf->WDATA),32);
    tracep->chgBit(oldp+396,(vlSelf->BREADY));
    tracep->chgBit(oldp+397,(vlSelf->BVALID));
    tracep->chgCData(oldp+398,(vlSelf->BID),4);
    tracep->chgBit(oldp+399,(vlSelf->ARREADY));
    tracep->chgBit(oldp+400,(vlSelf->ARVALID));
    tracep->chgCData(oldp+401,(vlSelf->ARID),4);
    tracep->chgCData(oldp+402,(vlSelf->ARLEN),4);
    tracep->chgIData(oldp+403,(vlSelf->ARADDR),26);
    tracep->chgBit(oldp+404,(vlSelf->RREADY));
    tracep->chgBit(oldp+405,(vlSelf->RVALID));
    tracep->chgBit(oldp+406,(vlSelf->RLAST));
    tracep->chgCData(oldp+407,(vlSelf->RID),4);
    tracep->chgIData(oldp+408,(vlSelf->RDATA),32);
    tracep->chgQData(oldp+409,((((QData)((IData)(vlSelf->RID)) 
                                 << 0x21U) | (((QData)((IData)(vlSelf->RLAST)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->RDATA))))),37);
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
