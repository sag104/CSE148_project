// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMIPS_CORE__DPI_H_
#define VERILATED_VMIPS_CORE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at mips_core/mips_core.sv:6:30
    extern void ls_event(int op, int addr, int data);
    // DPI import at mips_core/mips_core.sv:4:30
    extern void pc_event(int pc);
    // DPI import at mips_core/mips_core.sv:5:30
    extern void wb_event(int addr, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
