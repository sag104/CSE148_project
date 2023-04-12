// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmips_core__Syms.h"
#include "Vmips_core.h"
#include "Vmips_core___024root.h"
#include "Vmips_core___024unit.h"
#include "Vmips_core_cache_output_ifc.h"
#include "Vmips_core_alu_pass_through_ifc.h"
#include "Vmips_core_d_cache_pass_through_ifc.h"
#include "Vmips_core_write_back_ifc.h"
#include "Vmips_core_hazard_control_ifc.h"
#include "Vmips_core_alu_input_ifc.h"
#include "Vmips_core_alu_output_ifc.h"
#include "Vmips_core_d_cache_input_ifc.h"
#include "Vmips_core_decoder_output_ifc.h"
#include "Vmips_core_reg_file_output_ifc.h"
#include "Vmips_core_pc_ifc.h"
#include "Vmips_core_branch_decoded_ifc.h"

// FUNCTIONS
Vmips_core__Syms::~Vmips_core__Syms()
{
}

Vmips_core__Syms::Vmips_core__Syms(VerilatedContext* contextp, const char* namep,Vmips_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__mips_core__DOT__d2e_alu_input{this, Verilated::catName(namep, "mips_core.d2e_alu_input")}
    , TOP__mips_core__DOT__d2e_alu_pass_through{this, Verilated::catName(namep, "mips_core.d2e_alu_pass_through")}
    , TOP__mips_core__DOT__d2e_pc{this, Verilated::catName(namep, "mips_core.d2e_pc")}
    , TOP__mips_core__DOT__dec_branch_decoded{this, Verilated::catName(namep, "mips_core.dec_branch_decoded")}
    , TOP__mips_core__DOT__dec_decoder_output{this, Verilated::catName(namep, "mips_core.dec_decoder_output")}
    , TOP__mips_core__DOT__dec_forward_unit_output{this, Verilated::catName(namep, "mips_core.dec_forward_unit_output")}
    , TOP__mips_core__DOT__e2m_d_cache_input{this, Verilated::catName(namep, "mips_core.e2m_d_cache_input")}
    , TOP__mips_core__DOT__e2m_d_cache_pass_through{this, Verilated::catName(namep, "mips_core.e2m_d_cache_pass_through")}
    , TOP__mips_core__DOT__e2m_pc{this, Verilated::catName(namep, "mips_core.e2m_pc")}
    , TOP__mips_core__DOT__ex_alu_output{this, Verilated::catName(namep, "mips_core.ex_alu_output")}
    , TOP__mips_core__DOT__i2d_inst{this, Verilated::catName(namep, "mips_core.i2d_inst")}
    , TOP__mips_core__DOT__i2d_pc{this, Verilated::catName(namep, "mips_core.i2d_pc")}
    , TOP__mips_core__DOT__i2i_hc{this, Verilated::catName(namep, "mips_core.i2i_hc")}
    , TOP__mips_core__DOT__if_pc_current{this, Verilated::catName(namep, "mips_core.if_pc_current")}
    , TOP__mips_core__DOT__if_pc_next{this, Verilated::catName(namep, "mips_core.if_pc_next")}
    , TOP__mips_core__DOT__m2w_write_back{this, Verilated::catName(namep, "mips_core.m2w_write_back")}
    , TOP__mips_core__DOT__mem_write_back{this, Verilated::catName(namep, "mips_core.mem_write_back")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__mips_core__DOT__d2e_alu_input = &TOP__mips_core__DOT__d2e_alu_input;
    TOP.__PVT__mips_core__DOT__d2e_alu_pass_through = &TOP__mips_core__DOT__d2e_alu_pass_through;
    TOP.__PVT__mips_core__DOT__d2e_pc = &TOP__mips_core__DOT__d2e_pc;
    TOP.__PVT__mips_core__DOT__dec_branch_decoded = &TOP__mips_core__DOT__dec_branch_decoded;
    TOP.__PVT__mips_core__DOT__dec_decoder_output = &TOP__mips_core__DOT__dec_decoder_output;
    TOP.__PVT__mips_core__DOT__dec_forward_unit_output = &TOP__mips_core__DOT__dec_forward_unit_output;
    TOP.__PVT__mips_core__DOT__e2m_d_cache_input = &TOP__mips_core__DOT__e2m_d_cache_input;
    TOP.__PVT__mips_core__DOT__e2m_d_cache_pass_through = &TOP__mips_core__DOT__e2m_d_cache_pass_through;
    TOP.__PVT__mips_core__DOT__e2m_pc = &TOP__mips_core__DOT__e2m_pc;
    TOP.__PVT__mips_core__DOT__ex_alu_output = &TOP__mips_core__DOT__ex_alu_output;
    TOP.__PVT__mips_core__DOT__i2d_inst = &TOP__mips_core__DOT__i2d_inst;
    TOP.__PVT__mips_core__DOT__i2d_pc = &TOP__mips_core__DOT__i2d_pc;
    TOP.__PVT__mips_core__DOT__i2i_hc = &TOP__mips_core__DOT__i2i_hc;
    TOP.__PVT__mips_core__DOT__if_pc_current = &TOP__mips_core__DOT__if_pc_current;
    TOP.__PVT__mips_core__DOT__if_pc_next = &TOP__mips_core__DOT__if_pc_next;
    TOP.__PVT__mips_core__DOT__m2w_write_back = &TOP__mips_core__DOT__m2w_write_back;
    TOP.__PVT__mips_core__DOT__mem_write_back = &TOP__mips_core__DOT__mem_write_back;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__mips_core__DOT__d2e_alu_input.__Vconfigure(true);
    TOP__mips_core__DOT__d2e_alu_pass_through.__Vconfigure(true);
    TOP__mips_core__DOT__d2e_pc.__Vconfigure(true);
    TOP__mips_core__DOT__dec_branch_decoded.__Vconfigure(true);
    TOP__mips_core__DOT__dec_decoder_output.__Vconfigure(true);
    TOP__mips_core__DOT__dec_forward_unit_output.__Vconfigure(true);
    TOP__mips_core__DOT__e2m_d_cache_input.__Vconfigure(true);
    TOP__mips_core__DOT__e2m_d_cache_pass_through.__Vconfigure(true);
    TOP__mips_core__DOT__e2m_pc.__Vconfigure(false);
    TOP__mips_core__DOT__ex_alu_output.__Vconfigure(true);
    TOP__mips_core__DOT__i2d_inst.__Vconfigure(true);
    TOP__mips_core__DOT__i2d_pc.__Vconfigure(false);
    TOP__mips_core__DOT__i2i_hc.__Vconfigure(true);
    TOP__mips_core__DOT__if_pc_current.__Vconfigure(false);
    TOP__mips_core__DOT__if_pc_next.__Vconfigure(false);
    TOP__mips_core__DOT__m2w_write_back.__Vconfigure(true);
    TOP__mips_core__DOT__mem_write_back.__Vconfigure(false);
    // Setup scopes
    __Vscope_mips_core__ALU.configure(this, name(), "mips_core.ALU", "ALU", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
