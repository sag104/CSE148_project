// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core__Syms.h"
#include "Vmips_core___024unit.h"

extern "C" void pc_event(int pc);

VL_INLINE_OPT void Vmips_core___024unit____Vdpiimwrap_pc_event_TOP____024unit(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmips_core___024unit____Vdpiimwrap_pc_event_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    pc_event(pc__Vcvt);
}

extern "C" void wb_event(int addr, int data);

VL_INLINE_OPT void Vmips_core___024unit____Vdpiimwrap_wb_event_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmips_core___024unit____Vdpiimwrap_wb_event_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    wb_event(addr__Vcvt, data__Vcvt);
}

extern "C" void ls_event(int op, int addr, int data);

VL_INLINE_OPT void Vmips_core___024unit____Vdpiimwrap_ls_event_TOP____024unit(IData/*31:0*/ op, IData/*31:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmips_core___024unit____Vdpiimwrap_ls_event_TOP____024unit\n"); );
    // Body
    int op__Vcvt;
    for (size_t op__Vidx = 0; op__Vidx < 1; ++op__Vidx) op__Vcvt = op;
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    ls_event(op__Vcvt, addr__Vcvt, data__Vcvt);
}
