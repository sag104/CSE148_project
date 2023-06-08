// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmips_core__Syms.h"
#include "Vmips_core___024unit.h"

void Vmips_core___024unit___ctor_var_reset(Vmips_core___024unit* vlSelf);

Vmips_core___024unit::Vmips_core___024unit(Vmips_core__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmips_core___024unit___ctor_var_reset(this);
}

void Vmips_core___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmips_core___024unit::~Vmips_core___024unit() {
}
