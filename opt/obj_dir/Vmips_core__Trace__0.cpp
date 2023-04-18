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
        tracep->chgIData(oldp+15,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__old_data),17);
        tracep->chgIData(oldp+16,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[0]),17);
        tracep->chgIData(oldp+17,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[1]),17);
        tracep->chgIData(oldp+18,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[2]),17);
        tracep->chgIData(oldp+19,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[3]),17);
        tracep->chgIData(oldp+20,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[4]),17);
        tracep->chgIData(oldp+21,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[5]),17);
        tracep->chgIData(oldp+22,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[6]),17);
        tracep->chgIData(oldp+23,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[7]),17);
        tracep->chgIData(oldp+24,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[8]),17);
        tracep->chgIData(oldp+25,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[9]),17);
        tracep->chgIData(oldp+26,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[10]),17);
        tracep->chgIData(oldp+27,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[11]),17);
        tracep->chgIData(oldp+28,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[12]),17);
        tracep->chgIData(oldp+29,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[13]),17);
        tracep->chgIData(oldp+30,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[14]),17);
        tracep->chgIData(oldp+31,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[15]),17);
        tracep->chgIData(oldp+32,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[16]),17);
        tracep->chgIData(oldp+33,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[17]),17);
        tracep->chgIData(oldp+34,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[18]),17);
        tracep->chgIData(oldp+35,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[19]),17);
        tracep->chgIData(oldp+36,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[20]),17);
        tracep->chgIData(oldp+37,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[21]),17);
        tracep->chgIData(oldp+38,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[22]),17);
        tracep->chgIData(oldp+39,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[23]),17);
        tracep->chgIData(oldp+40,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[24]),17);
        tracep->chgIData(oldp+41,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[25]),17);
        tracep->chgIData(oldp+42,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[26]),17);
        tracep->chgIData(oldp+43,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[27]),17);
        tracep->chgIData(oldp+44,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[28]),17);
        tracep->chgIData(oldp+45,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[29]),17);
        tracep->chgIData(oldp+46,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[30]),17);
        tracep->chgIData(oldp+47,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[31]),17);
        tracep->chgIData(oldp+48,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__old_data),17);
        tracep->chgIData(oldp+49,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[0]),17);
        tracep->chgIData(oldp+50,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[1]),17);
        tracep->chgIData(oldp+51,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[2]),17);
        tracep->chgIData(oldp+52,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[3]),17);
        tracep->chgIData(oldp+53,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[4]),17);
        tracep->chgIData(oldp+54,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[5]),17);
        tracep->chgIData(oldp+55,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[6]),17);
        tracep->chgIData(oldp+56,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[7]),17);
        tracep->chgIData(oldp+57,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[8]),17);
        tracep->chgIData(oldp+58,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[9]),17);
        tracep->chgIData(oldp+59,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[10]),17);
        tracep->chgIData(oldp+60,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[11]),17);
        tracep->chgIData(oldp+61,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[12]),17);
        tracep->chgIData(oldp+62,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[13]),17);
        tracep->chgIData(oldp+63,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[14]),17);
        tracep->chgIData(oldp+64,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[15]),17);
        tracep->chgIData(oldp+65,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[16]),17);
        tracep->chgIData(oldp+66,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[17]),17);
        tracep->chgIData(oldp+67,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[18]),17);
        tracep->chgIData(oldp+68,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[19]),17);
        tracep->chgIData(oldp+69,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[20]),17);
        tracep->chgIData(oldp+70,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[21]),17);
        tracep->chgIData(oldp+71,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[22]),17);
        tracep->chgIData(oldp+72,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[23]),17);
        tracep->chgIData(oldp+73,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[24]),17);
        tracep->chgIData(oldp+74,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[25]),17);
        tracep->chgIData(oldp+75,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[26]),17);
        tracep->chgIData(oldp+76,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[27]),17);
        tracep->chgIData(oldp+77,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[28]),17);
        tracep->chgIData(oldp+78,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[29]),17);
        tracep->chgIData(oldp+79,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[30]),17);
        tracep->chgIData(oldp+80,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[31]),17);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgIData(oldp+81,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+82,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+83,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+84,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+85,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+86,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+87,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+88,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
        tracep->chgIData(oldp+89,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__old_data)),17);
        tracep->chgIData(oldp+90,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data_flag)
                                    ? vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data
                                    : vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__old_data)),17);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+91,(vlSelf->mips_core__DOT__lw_hazard));
        tracep->chgSData(oldp+92,((0xffffU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                              >> 0xaU))),16);
        tracep->chgCData(oldp+93,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                            >> 4U))),6);
        tracep->chgCData(oldp+94,((3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                         >> 2U))),2);
        tracep->chgCData(oldp+95,(vlSelf->mips_core__DOT__D_CACHE__DOT__state),3);
        tracep->chgBit(oldp+96,(vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response));
        tracep->chgCData(oldp+97,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index),6);
        tracep->chgSData(oldp+98,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag),16);
        tracep->chgCData(oldp+99,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select),4);
        tracep->chgIData(oldp+100,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata),32);
        tracep->chgCData(oldp+101,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr),6);
        tracep->chgBit(oldp+102,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word));
        tracep->chgQData(oldp+103,(vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits),64);
        tracep->chgQData(oldp+105,(vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits),64);
        tracep->chgIData(oldp+107,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0]),32);
        tracep->chgIData(oldp+108,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1]),32);
        tracep->chgIData(oldp+109,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2]),32);
        tracep->chgIData(oldp+110,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3]),32);
        tracep->chgBit(oldp+111,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word));
        tracep->chgIData(oldp+112,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+113,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+114,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+115,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+116,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+117,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+118,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+119,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+120,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+121,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+122,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+123,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+124,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+125,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+126,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+127,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+128,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+129,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+130,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+131,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+132,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+133,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+134,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+135,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+136,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+137,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+138,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+139,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgSData(oldp+140,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data),16);
        tracep->chgBit(oldp+141,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+142,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)))));
        tracep->chgBit(oldp+143,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+144,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgSData(oldp+145,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
        tracep->chgBit(oldp+146,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+147,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+148,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i),32);
        tracep->chgIData(oldp+149,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i),32);
        tracep->chgBit(oldp+150,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload));
        tracep->chgBit(oldp+151,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
        tracep->chgBit(oldp+152,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump) 
                                  & (~ (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump)))));
        tracep->chgIData(oldp+153,(vlSymsp->TOP__mips_core__DOT__i2d_pc.pc),26);
        tracep->chgBit(oldp+154,(((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
                                  & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch))));
        tracep->chgIData(oldp+155,(vlSymsp->TOP__mips_core__DOT__d2e_pc.pc),26);
        tracep->chgBit(oldp+156,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome));
        tracep->chgIData(oldp+158,((0x1ffffU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                                >> 9U))),17);
        tracep->chgCData(oldp+159,((0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                             >> 4U))),5);
        tracep->chgCData(oldp+160,((3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                          >> 2U))),2);
        tracep->chgCData(oldp+161,(vlSelf->mips_core__DOT__I_CACHE__DOT__state),2);
        tracep->chgCData(oldp+162,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index),5);
        tracep->chgIData(oldp+163,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag),17);
        tracep->chgCData(oldp+164,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select),4);
        tracep->chgIData(oldp+165,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                           [0U])),32);
        tracep->chgCData(oldp+166,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we),2);
        tracep->chgQData(oldp+167,(vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits),64);
        tracep->chgIData(oldp+169,(vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits),32);
        tracep->chgBit(oldp+170,(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word));
        tracep->chgIData(oldp+171,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+172,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+173,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+174,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+175,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+176,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+177,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+178,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+179,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+180,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+181,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+182,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+183,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+184,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+185,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+186,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+187,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+188,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+189,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+190,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+191,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgIData(oldp+192,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
        tracep->chgBit(oldp+193,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
        tracep->chgBit(oldp+194,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+195,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
        tracep->chgIData(oldp+196,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
        tracep->chgBit(oldp+197,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+198,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
        tracep->chgBit(oldp+199,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we))));
        tracep->chgIData(oldp+200,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data),17);
        tracep->chgBit(oldp+201,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+202,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we)))));
        tracep->chgBit(oldp+203,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+204,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),5);
        tracep->chgIData(oldp+205,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),17);
        tracep->chgBit(oldp+206,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+207,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),5);
        tracep->chgBit(oldp+208,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
                                        >> 1U))));
        tracep->chgIData(oldp+209,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data),17);
        tracep->chgBit(oldp+210,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data_flag));
        tracep->chgBit(oldp+211,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+212,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
        tracep->chgCData(oldp+213,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),5);
        tracep->chgIData(oldp+214,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),17);
        tracep->chgBit(oldp+215,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
        tracep->chgCData(oldp+216,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),5);
        tracep->chgBit(oldp+217,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0]));
        tracep->chgBit(oldp+218,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0]));
        tracep->chgQData(oldp+219,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0]),37);
        tracep->chgBit(oldp+221,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0]));
        tracep->chgCData(oldp+222,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0]),4);
        tracep->chgBit(oldp+223,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0]));
        tracep->chgBit(oldp+224,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1]));
        tracep->chgQData(oldp+225,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0]),34);
        tracep->chgQData(oldp+227,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1]),34);
        tracep->chgBit(oldp+229,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0]));
        tracep->chgBit(oldp+230,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1]));
        tracep->chgQData(oldp+231,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0]),37);
        tracep->chgQData(oldp+233,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1]),37);
        tracep->chgBit(oldp+235,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
        tracep->chgQData(oldp+236,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload),34);
        tracep->chgBit(oldp+238,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0]));
        tracep->chgBit(oldp+239,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1]));
        tracep->chgQData(oldp+240,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0]),34);
        tracep->chgQData(oldp+242,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1]),34);
        tracep->chgQData(oldp+244,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload),34);
        tracep->chgBit(oldp+246,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+247,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+248,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready));
        tracep->chgBit(oldp+249,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0]));
        tracep->chgBit(oldp+250,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1]));
        tracep->chgQData(oldp+251,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0]),37);
        tracep->chgQData(oldp+253,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1]),37);
        tracep->chgQData(oldp+255,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload),37);
        tracep->chgBit(oldp+257,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
        tracep->chgCData(oldp+258,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id),4);
        tracep->chgBit(oldp+259,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
        tracep->chgQData(oldp+260,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload),34);
        tracep->chgBit(oldp+262,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0]));
        tracep->chgBit(oldp+263,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+264,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+265,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
        tracep->chgQData(oldp+266,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload),37);
        tracep->chgBit(oldp+268,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0]));
        tracep->chgQData(oldp+269,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0]),37);
        tracep->chgQData(oldp+271,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload),37);
        tracep->chgBit(oldp+273,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid));
        tracep->chgIData(oldp+274,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id),32);
        tracep->chgBit(oldp+275,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready));
        tracep->chgBit(oldp+276,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0]));
        tracep->chgCData(oldp+277,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0]),4);
        tracep->chgCData(oldp+278,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload),4);
        tracep->chgBit(oldp+279,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
        tracep->chgCData(oldp+280,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id),4);
        tracep->chgIData(oldp+281,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[0]),32);
        tracep->chgIData(oldp+282,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[1]),32);
        tracep->chgIData(oldp+283,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[2]),32);
        tracep->chgIData(oldp+284,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[3]),32);
        tracep->chgIData(oldp+285,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[4]),32);
        tracep->chgIData(oldp+286,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[5]),32);
        tracep->chgIData(oldp+287,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[6]),32);
        tracep->chgIData(oldp+288,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[7]),32);
        tracep->chgIData(oldp+289,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[8]),32);
        tracep->chgIData(oldp+290,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[9]),32);
        tracep->chgIData(oldp+291,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[10]),32);
        tracep->chgIData(oldp+292,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[11]),32);
        tracep->chgIData(oldp+293,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[12]),32);
        tracep->chgIData(oldp+294,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[13]),32);
        tracep->chgIData(oldp+295,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[14]),32);
        tracep->chgIData(oldp+296,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[15]),32);
        tracep->chgIData(oldp+297,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[16]),32);
        tracep->chgIData(oldp+298,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[17]),32);
        tracep->chgIData(oldp+299,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[18]),32);
        tracep->chgIData(oldp+300,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[19]),32);
        tracep->chgIData(oldp+301,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[20]),32);
        tracep->chgIData(oldp+302,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[21]),32);
        tracep->chgIData(oldp+303,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[22]),32);
        tracep->chgIData(oldp+304,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[23]),32);
        tracep->chgIData(oldp+305,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[24]),32);
        tracep->chgIData(oldp+306,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[25]),32);
        tracep->chgIData(oldp+307,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[26]),32);
        tracep->chgIData(oldp+308,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[27]),32);
        tracep->chgIData(oldp+309,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[28]),32);
        tracep->chgIData(oldp+310,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[29]),32);
        tracep->chgIData(oldp+311,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[30]),32);
        tracep->chgIData(oldp+312,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[31]),32);
        tracep->chgCData(oldp+313,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                    >> 0x1eU)))),4);
        tracep->chgCData(oldp+314,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                    >> 0x1aU)))),4);
        tracep->chgIData(oldp+315,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload))),26);
        tracep->chgBit(oldp+316,((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgBit(oldp+317,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+318,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+319,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload)),32);
        tracep->chgBit(oldp+320,((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgIData(oldp+321,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                   [0U]),32);
        tracep->chgBit(oldp+322,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                                 [0U]));
        tracep->chgCData(oldp+323,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload
                                   [0U]),4);
        tracep->chgCData(oldp+324,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                    >> 0x1eU)))),4);
        tracep->chgCData(oldp+325,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                    >> 0x1aU)))),4);
        tracep->chgIData(oldp+326,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload))),26);
        tracep->chgBit(oldp+327,((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
        tracep->chgIData(oldp+328,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                     << 0xaU) | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                                 << 4U))),26);
        tracep->chgBit(oldp+329,((1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
        tracep->chgIData(oldp+330,(((vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag 
                                     << 9U) | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                               << 4U))),26);
        tracep->chgBit(oldp+331,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                                 [1U]));
        tracep->chgBit(oldp+332,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                [1U] 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+333,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                    [1U] 
                                                    >> 0x21U)))),4);
        tracep->chgIData(oldp+334,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                           [1U])),32);
        tracep->chgBit(oldp+335,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                                 [0U]));
        tracep->chgBit(oldp+336,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                [0U] 
                                                >> 0x20U)))));
        tracep->chgCData(oldp+337,((0xfU & (IData)(
                                                   (vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                    [0U] 
                                                    >> 0x21U)))),4);
        tracep->chgBit(oldp+338,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                                  | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload))));
        tracep->chgBit(oldp+339,(vlSymsp->TOP__mips_core__DOT__i2d_inst.valid));
        tracep->chgIData(oldp+340,(vlSymsp->TOP__mips_core__DOT__i2d_inst.data),32);
        tracep->chgBit(oldp+341,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access));
        tracep->chgBit(oldp+342,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action));
        tracep->chgBit(oldp+343,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw));
        tracep->chgCData(oldp+344,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr),5);
        tracep->chgBit(oldp+345,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch));
        tracep->chgIData(oldp+346,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target),26);
        tracep->chgBit(oldp+347,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access));
        tracep->chgBit(oldp+348,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action));
        tracep->chgIData(oldp+349,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data),32);
        tracep->chgBit(oldp+350,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw));
        tracep->chgCData(oldp+351,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr),5);
        tracep->chgIData(oldp+352,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.result),32);
        tracep->chgBit(oldp+353,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access));
        tracep->chgIData(oldp+354,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result),32);
        tracep->chgBit(oldp+355,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw));
        tracep->chgCData(oldp+356,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr),5);
        tracep->chgBit(oldp+357,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw));
        tracep->chgCData(oldp+358,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr),5);
        tracep->chgIData(oldp+359,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data),32);
        tracep->chgBit(oldp+360,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid));
        tracep->chgCData(oldp+361,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl),5);
        tracep->chgBit(oldp+362,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid));
        tracep->chgCData(oldp+363,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl),5);
        tracep->chgIData(oldp+364,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1),32);
        tracep->chgIData(oldp+365,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2),32);
        tracep->chgBit(oldp+366,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid));
        tracep->chgIData(oldp+367,((0x3ffffffU & vlSymsp->TOP__mips_core__DOT__ex_alu_output.result)),26);
        tracep->chgBit(oldp+368,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid));
        tracep->chgBit(oldp+369,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action));
        tracep->chgIData(oldp+370,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr),26);
        tracep->chgIData(oldp+371,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data),32);
        tracep->chgBit(oldp+372,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump));
        tracep->chgBit(oldp+373,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump));
        tracep->chgBit(oldp+374,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg));
        tracep->chgIData(oldp+375,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target),26);
        tracep->chgBit(oldp+376,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs));
        tracep->chgCData(oldp+377,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr),5);
        tracep->chgBit(oldp+378,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt));
        tracep->chgCData(oldp+379,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr),5);
        tracep->chgBit(oldp+380,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate));
        tracep->chgIData(oldp+381,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate),32);
        tracep->chgIData(oldp+382,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs)
                                     ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                    [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr]
                                     : 0U)),32);
        tracep->chgIData(oldp+383,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt)
                                     ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                    [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr]
                                     : 0U)),32);
        tracep->chgIData(oldp+384,(vlSymsp->TOP__mips_core__DOT__if_pc_current.pc),26);
        tracep->chgIData(oldp+385,(vlSymsp->TOP__mips_core__DOT__e2m_pc.pc),26);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgIData(oldp+386,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                     << 0xaU) | (0x3f0U 
                                                 & vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr))),26);
        tracep->chgIData(oldp+387,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload)
                                     ? vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target
                                     : vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target)),26);
        tracep->chgIData(oldp+388,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                                   [(3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                           >> 2U))]),32);
        tracep->chgIData(oldp+389,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
                                   [(3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                           >> 2U))]),32);
        tracep->chgIData(oldp+390,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate)
                                     ? vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate
                                     : vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgCData(oldp+391,(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state),3);
        tracep->chgCData(oldp+392,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr),6);
        tracep->chgCData(oldp+393,(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state),2);
        tracep->chgBit(oldp+394,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0]));
        tracep->chgBit(oldp+395,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0]));
        tracep->chgBit(oldp+396,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0]));
        tracep->chgBit(oldp+397,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1]));
        tracep->chgBit(oldp+398,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+399,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1]));
        tracep->chgBit(oldp+400,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+401,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+402,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+403,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0]));
        tracep->chgBit(oldp+404,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready));
        tracep->chgBit(oldp+405,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+406,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                                 [0U]));
        tracep->chgBit(oldp+407,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                 [1U]));
        tracep->chgBit(oldp+408,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                                 [0U]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+409,(vlSelf->mips_core__DOT__mem_done));
        tracep->chgCData(oldp+410,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                                             >> 4U))),6);
        tracep->chgCData(oldp+411,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we),4);
        tracep->chgIData(oldp+412,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0]),32);
        tracep->chgIData(oldp+413,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1]),32);
        tracep->chgIData(oldp+414,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2]),32);
        tracep->chgIData(oldp+415,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3]),32);
        tracep->chgSData(oldp+416,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata),16);
        tracep->chgBit(oldp+417,(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
        tracep->chgBit(oldp+418,(vlSelf->mips_core__DOT__D_CACHE__DOT__miss));
        tracep->chgBit(oldp+419,((1U & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we))));
        tracep->chgBit(oldp+420,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)))));
        tracep->chgBit(oldp+421,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 1U))));
        tracep->chgBit(oldp+422,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+423,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 2U))));
        tracep->chgBit(oldp+424,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 2U)))));
        tracep->chgBit(oldp+425,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 3U))));
        tracep->chgBit(oldp+426,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                           >> 3U)))));
        tracep->chgBit(oldp+427,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss));
        tracep->chgBit(oldp+428,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss));
        tracep->chgBit(oldp+429,((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))));
        tracep->chgBit(oldp+430,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall));
        tracep->chgBit(oldp+431,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush));
        tracep->chgBit(oldp+432,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall));
        tracep->chgBit(oldp+433,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush));
        tracep->chgIData(oldp+434,(vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target),26);
        tracep->chgCData(oldp+435,((0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                                             >> 4U))),5);
        tracep->chgCData(oldp+436,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we),4);
        tracep->chgCData(oldp+437,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr),6);
        tracep->chgCData(oldp+438,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr),6);
        tracep->chgIData(oldp+439,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0]),32);
        tracep->chgIData(oldp+440,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1]),32);
        tracep->chgIData(oldp+441,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2]),32);
        tracep->chgIData(oldp+442,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3]),32);
        tracep->chgIData(oldp+443,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata[0]),17);
        tracep->chgIData(oldp+444,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata[1]),17);
        tracep->chgBit(oldp+445,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit0));
        tracep->chgBit(oldp+446,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit1));
        tracep->chgBit(oldp+447,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
        tracep->chgBit(oldp+448,(vlSelf->mips_core__DOT__I_CACHE__DOT__miss));
        tracep->chgBit(oldp+449,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))));
        tracep->chgBit(oldp+450,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)))));
        tracep->chgBit(oldp+451,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 1U))));
        tracep->chgBit(oldp+452,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 1U)))));
        tracep->chgBit(oldp+453,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 2U))));
        tracep->chgBit(oldp+454,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 2U)))));
        tracep->chgBit(oldp+455,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 3U))));
        tracep->chgBit(oldp+456,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                           >> 3U)))));
        tracep->chgQData(oldp+457,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0]),34);
        tracep->chgQData(oldp+459,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0]),34);
        tracep->chgQData(oldp+461,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload),34);
        tracep->chgIData(oldp+463,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data),32);
        tracep->chgIData(oldp+464,(vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data),32);
        tracep->chgIData(oldp+465,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data),32);
        tracep->chgIData(oldp+466,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next),26);
        tracep->chgIData(oldp+467,(vlSymsp->TOP__mips_core__DOT__if_pc_next.pc),26);
    }
    tracep->chgBit(oldp+468,(vlSelf->clk));
    tracep->chgBit(oldp+469,(vlSelf->rst_n));
    tracep->chgBit(oldp+470,(vlSelf->done));
    tracep->chgBit(oldp+471,(vlSelf->AWREADY));
    tracep->chgBit(oldp+472,(vlSelf->AWVALID));
    tracep->chgCData(oldp+473,(vlSelf->AWID),4);
    tracep->chgCData(oldp+474,(vlSelf->AWLEN),4);
    tracep->chgIData(oldp+475,(vlSelf->AWADDR),26);
    tracep->chgBit(oldp+476,(vlSelf->WREADY));
    tracep->chgBit(oldp+477,(vlSelf->WVALID));
    tracep->chgBit(oldp+478,(vlSelf->WLAST));
    tracep->chgCData(oldp+479,(vlSelf->WID),4);
    tracep->chgIData(oldp+480,(vlSelf->WDATA),32);
    tracep->chgBit(oldp+481,(vlSelf->BREADY));
    tracep->chgBit(oldp+482,(vlSelf->BVALID));
    tracep->chgCData(oldp+483,(vlSelf->BID),4);
    tracep->chgBit(oldp+484,(vlSelf->ARREADY));
    tracep->chgBit(oldp+485,(vlSelf->ARVALID));
    tracep->chgCData(oldp+486,(vlSelf->ARID),4);
    tracep->chgCData(oldp+487,(vlSelf->ARLEN),4);
    tracep->chgIData(oldp+488,(vlSelf->ARADDR),26);
    tracep->chgBit(oldp+489,(vlSelf->RREADY));
    tracep->chgBit(oldp+490,(vlSelf->RVALID));
    tracep->chgBit(oldp+491,(vlSelf->RLAST));
    tracep->chgCData(oldp+492,(vlSelf->RID),4);
    tracep->chgIData(oldp+493,(vlSelf->RDATA),32);
    tracep->chgQData(oldp+494,((((QData)((IData)(vlSelf->RID)) 
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
