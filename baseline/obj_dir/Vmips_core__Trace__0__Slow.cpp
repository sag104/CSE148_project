// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmips_core__Syms.h"


VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"AWREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"AWVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+389,"AWID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+390,"AWLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+391,"AWADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+392,"WREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"WVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"WLAST",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+395,"WID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+396,"WDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+397,"BREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"BVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+399,"BID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+400,"ARREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"ARVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+402,"ARID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+403,"ARLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+404,"ARADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+405,"RREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"RVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"RLAST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+408,"RID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+409,"RDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mips_core ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"AWREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"AWVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+389,"AWID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+390,"AWLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+391,"AWADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+392,"WREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"WVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"WLAST",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+395,"WID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+396,"WDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+397,"BREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"BVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+399,"BID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+400,"ARREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"ARVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+402,"ARID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+403,"ARLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+404,"ARADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+405,"RREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"RVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"RLAST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+408,"RID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+409,"RDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+340,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"lw_hazard",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+386,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODER ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DEC_STAGE_GLUE ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("D_CACHE ");
    tracep->declBus(c+412,"INDEX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+413,"BLOCK_OFFSET_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+413,"ASSOCIATIVITY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+414,"TAG_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+415,"LINE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+27,"i_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+28,"i_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+29,"i_block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+341,"i_index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    {
        const char* __VenumItemNames[]
        = {"STATE_READY", "STATE_FLUSH_REQUEST", "STATE_FLUSH_DATA", 
                                "STATE_REFILL_REQUEST", 
                                "STATE_REFILL_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "d_cache.__typeimpenum4", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+30,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+322,"next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+31,"pending_write_response",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+32,"r_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+33,"r_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,"databank_select",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+342,"databank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,"databank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"databank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+323,"databank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+343+i*1,"databank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+37,"tagbank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+33,"tagbank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+32,"tagbank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+341,"tagbank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+347,"tagbank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declQuad(c+38,"valid_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+40,"dirty_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+42+i*1,"shift_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+348,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+349,"miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+46,"last_flush_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"last_refill_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("databanks[0] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+323,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+17,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+35,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+7,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+50,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+53,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[1] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+323,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+18,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+35,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+8,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+57,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+58,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+60,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[2] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+323,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+19,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+35,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+9,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+64,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+65,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+67,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[3] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+323,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+20,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+35,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+10,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+71,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+74,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+414,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+32,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+341,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+347,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+75,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+76,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+414,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+33,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+341,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+11,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+78,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+79,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+80,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+81,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+82,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+83,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+84,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("EX_STAGE_GLUE ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FETCH_UNIT ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FORWARD_UNIT ");
    tracep->declBit(c+26,"o_lw_hazard",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HAZARD_CONTROLLER ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"lw_hazard",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"mem_done",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"ic_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+359,"ds_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"dec_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"ex_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"dc_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+361,"if_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+362,"if_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+363,"dec_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+364,"dec_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"ex_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+418,"ex_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"mem_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"mem_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("BRANCH_CONTROLLER ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"request_prediction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("PREDICTOR ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"i_req_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"i_req_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBus(c+365,"i_req_target",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    {
        const char* __VenumItemNames[]
        = {"NOT_TAKEN", "TAKEN"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "mips_core_pkg::BranchOutcome", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+419,"o_req_prediction",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"i_fb_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+90,"i_fb_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+91,"i_fb_prediction",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"i_fb_outcome",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("I_CACHE ");
    tracep->declBus(c+412,"INDEX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+413,"BLOCK_OFFSET_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+414,"TAG_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+415,"LINE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+93,"i_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,"i_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,"i_block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+366,"i_index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    {
        const char* __VenumItemNames[]
        = {"STATE_READY", "STATE_REFILL_REQUEST", "STATE_REFILL_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "i_cache.__typeimpenum5", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+96,"state",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+324,"next_state",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,"r_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+98,"r_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+99,"databank_select",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+100,"databank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,"databank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,"databank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+366,"databank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+367+i*1,"databank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+102,"tagbank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+98,"tagbank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,"tagbank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+366,"tagbank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,"tagbank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declQuad(c+103,"valid_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+371,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"last_refill_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("databanks[0] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+366,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+22,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+366,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+12,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+110,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+113,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[1] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+366,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+23,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+366,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+13,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+119,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+122,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[2] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+366,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+24,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+366,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+14,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+128,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+129,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+131,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[3] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+366,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+25,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+417,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+366,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+15,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+137,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+138,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+140,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+414,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+97,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+366,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+21,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+141,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+142,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+414,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+412,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+416,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+98,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+384,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+366,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+16,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+144,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+145,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+146,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+81,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+147,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("MEMORY_ARBITER ");
    tracep->declBus(c+420,"WRITE_MASTERS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+413,"READ_MASTERS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+325+i*1,"write_address_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+148+i*1,"write_address_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+373+i*2,"write_address_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+326+i*1,"write_data_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+149+i*1,"write_data_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+150+i*2,"write_data_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 36,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1+i*1,"write_response_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+152+i*1,"write_response_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+153+i*1,"write_response_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+327+i*1,"read_address_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+154+i*1,"read_address_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+156+i*2,"read_address_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+2+i*1,"read_data_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+160+i*1,"read_data_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+162+i*2,"read_data_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 36,0);
    }
    tracep->pushNamePrefix("read_address_arbiter ");
    tracep->declBus(c+413,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+421,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+167,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+329+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+169+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+171+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    tracep->declQuad(c+175,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declBit(c+177,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+331,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+178,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+422,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+422,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_data_splitter ");
    tracep->declBus(c+413,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+423,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+408,"id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declQuad(c+410,"payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 36,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+4+i*1,"entity_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+180+i*1,"entity_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+182+i*2,"entity_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 36,0);
    }
    tracep->declQuad(c+186,"pipe_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+188,"pipe_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+424,"pipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+189,"pipe_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+425,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_address_arbiter ");
    tracep->declBus(c+420,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+421,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+191,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+332+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+193+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+375+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    tracep->declQuad(c+377,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declBit(c+194,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+333,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+195,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+422,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+422,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_data_arbiter ");
    tracep->declBus(c+420,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+423,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+197,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 36,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+334+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+199+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+200+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 36,0);
    }
    tracep->declQuad(c+202,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+204,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+335,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+422,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+422,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_response_splitter ");
    tracep->declBus(c+420,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+415,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+399,"id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+399,"payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+6+i*1,"entity_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+207+i*1,"entity_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+208+i*1,"entity_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    tracep->declBus(c+209,"pipe_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+210,"pipe_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+426,"pipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+211,"pipe_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+427,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_STAGE_GLUE ");
    tracep->declBit(c+340,"o_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_D2E ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_E2M ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_I2D ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_M2W ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBit(c+384,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+212+i*1,"regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_address__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_address__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+190,"AWVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+387,"AWREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+244,"AWID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,"AWLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,"AWADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+247,"AWVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+336,"AWREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+428,"AWID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+429,"AWLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+317,"AWADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+196,"WVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+392,"WREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+248,"WLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+249,"WID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,"WDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+251,"WVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+337,"WREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+46,"WLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+428,"WID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+252,"WDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+398,"BVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+206,"BREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+399,"BID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+253,"BVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"BREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+254,"BID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+166,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+400,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+255,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+258,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+338,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+431,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+429,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+260,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+339,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+428,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+429,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+261,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+406,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+407,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+408,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+409,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+262,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+263,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+264,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+266,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+267,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+268,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+269,"we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+318,"new_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+371,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+319,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+270,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+271,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+348,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+320,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+87,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+419,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+365,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+272,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"WRITE", "READ"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "mips_core_pkg::MemAccessType", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+273,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+379,"sw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+274,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"zero", "at", "v0", "v1", "a0", "a1", "a2", 
                                "a3", "t0", "t1", "t2", 
                                "t3", "t4", "t5", "t6", 
                                "t7", "s0", "s1", "s2", 
                                "s3", "s4", "s5", "s6", 
                                "s7", "t8", "t9", "k0", 
                                "k1", "gp", "sp", "s8", 
                                "ra"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111"};
        tracep->declDTypeEnum(5, "mips_core_pkg::MipsReg", 32, 5, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+275,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+276,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+277,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+278,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+279,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+280,"sw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+281,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+282,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+283,"alu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+281,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+282,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+284,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+285,"alu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+286,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+287,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+286,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+287,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+380,"rw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+288,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+289,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+290,"rw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+432,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+361,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+362,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+363,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+364,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+418,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+360,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+360,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+418,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+291,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"ALUCTL_NOP", "ALUCTL_ADD", "ALUCTL_ADDU", 
                                "ALUCTL_SUB", "ALUCTL_SUBU", 
                                "ALUCTL_AND", "ALUCTL_OR", 
                                "ALUCTL_XOR", "ALUCTL_SLT", 
                                "ALUCTL_SLTU", "ALUCTL_SLL", 
                                "ALUCTL_SRL", "ALUCTL_SRA", 
                                "ALUCTL_SLLV", "ALUCTL_SRLV", 
                                "ALUCTL_SRAV", "ALUCTL_NOR", 
                                "ALUCTL_MTC0_PASS", 
                                "ALUCTL_MTC0_FAIL", 
                                "ALUCTL_MTC0_DONE", 
                                "ALUCTL_BA", "ALUCTL_BEQ", 
                                "ALUCTL_BNE", "ALUCTL_BLEZ", 
                                "ALUCTL_BGTZ", "ALUCTL_BGEZ", 
                                "ALUCTL_BLTZ"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010"};
        tracep->declDTypeEnum(6, "mips_core_pkg::AluCtl", 27, 5, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+292,"alu_ctl",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+381,"op1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,"op2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+293,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+294,"alu_ctl",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+295,"op1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,"op2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+283,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,"branch_outcome",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+279,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+298,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+298,"addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+280,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+299,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+300,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+301,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+382,"addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+302,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+291,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+292,"alu_ctl",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+303,"is_branch_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+304,"is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+305,"is_jump_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+306,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+272,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+273,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+307,"uses_rs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+308,"rs_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+309,"uses_rt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+310,"rt_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+311,"uses_immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+312,"immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+274,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+275,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"rs_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,"rt_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+381,"rs_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,"rt_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+315,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+383,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+88,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+90,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+316,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+303,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+304,"is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+365,"target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+419,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+365,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+89,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"outcome",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+277,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_top(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_top\n"); );
    // Body
    Vmips_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("mips_core ");
    tracep->pushNamePrefix("ALU ");
    tracep->pushNamePrefix("in\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DECODER ");
    tracep->pushNamePrefix("i_inst\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DEC_STAGE_GLUE ");
    tracep->pushNamePrefix("branch_decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_reg_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_alu_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_alu_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("D_CACHE ");
    tracep->pushNamePrefix("in\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_response\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("EX_STAGE_GLUE ");
    tracep->pushNamePrefix("i_alu_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_alu_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_branch_result\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_d_cache_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FETCH_UNIT ");
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_load_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc_current\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc_next\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FORWARD_UNIT ");
    tracep->pushNamePrefix("decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ctl\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("HAZARD_CONTROLLER ");
    tracep->pushNamePrefix("BRANCH_CONTROLLER ");
    tracep->pushNamePrefix("dec_branch_decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_branch_result\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("d2e_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_branch_decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e2m_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_branch_result\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2d_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_i_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("load_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m2w_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("I_CACHE ");
    tracep->pushNamePrefix("i_pc_current\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc_next\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEMORY_ARBITER ");
    tracep->pushNamePrefix("axi_read_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_read_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_write_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_address__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_write_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_write_response\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address[1]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data[1]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_address[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_data[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_response[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_STAGE_GLUE ");
    tracep->pushNamePrefix("i_d_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_d_cache_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_write_back\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PR_D2E ");
    tracep->pushNamePrefix("i_alu_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_alu_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_alu_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_alu_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PR_E2M ");
    tracep->pushNamePrefix("i_d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_d_cache_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_d_cache_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PR_I2D ");
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_inst\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_inst\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PR_M2W ");
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_wb\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_wb\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->pushNamePrefix("i_decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_wb\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi_read_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_read_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_write_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_address__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_write_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_write_response\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d2e_alu_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d2e_alu_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d2e_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d2e_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_alu_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_alu_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_branch_decoded\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_forward_unit_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_reg_file_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e2m_d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e2m_d_cache_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e2m_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e2m_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_alu_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_branch_result\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_d_cache_pass_through\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2d_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2d_inst\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2d_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i2i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_i_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pc_current\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pc_next\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("load_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m2w_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m2w_write_back\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_d_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address[1]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data[1]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_address[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_back\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_data[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_response[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmips_core___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void Vmips_core___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void Vmips_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vmips_core___024root__trace_register(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmips_core___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmips_core___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmips_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmips_core___024root__trace_full_sub_0(Vmips_core___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vmips_core___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_full_top_0\n"); );
    // Init
    Vmips_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmips_core___024root*>(voidSelf);
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmips_core___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vmips_core___024root__trace_full_sub_0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready[0]));
    tracep->fullBit(oldp+2,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[0]));
    tracep->fullBit(oldp+3,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[1]));
    tracep->fullBit(oldp+4,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[0]));
    tracep->fullBit(oldp+5,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[1]));
    tracep->fullBit(oldp+6,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[0]));
    tracep->fullIData(oldp+7,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+8,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+9,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+10,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
    tracep->fullSData(oldp+11,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data),16);
    tracep->fullIData(oldp+12,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+13,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+14,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+15,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
    tracep->fullSData(oldp+16,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data),16);
    tracep->fullIData(oldp+17,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+18,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+19,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+20,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullSData(oldp+21,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag)
                                 ? (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data)
                                 : (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data))),16);
    tracep->fullIData(oldp+22,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+23,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+24,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+25,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullBit(oldp+26,(vlSelf->mips_core__DOT__lw_hazard));
    tracep->fullSData(oldp+27,((0xffffU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                           >> 0xaU))),16);
    tracep->fullCData(oldp+28,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                         >> 4U))),6);
    tracep->fullCData(oldp+29,((3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                      >> 2U))),2);
    tracep->fullCData(oldp+30,(vlSelf->mips_core__DOT__D_CACHE__DOT__state),3);
    tracep->fullBit(oldp+31,(vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response));
    tracep->fullCData(oldp+32,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index),6);
    tracep->fullSData(oldp+33,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag),16);
    tracep->fullCData(oldp+34,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select),4);
    tracep->fullIData(oldp+35,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata),32);
    tracep->fullCData(oldp+36,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr),6);
    tracep->fullBit(oldp+37,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word));
    tracep->fullQData(oldp+38,(vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits),64);
    tracep->fullQData(oldp+40,(vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits),64);
    tracep->fullIData(oldp+42,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0]),32);
    tracep->fullIData(oldp+43,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1]),32);
    tracep->fullIData(oldp+44,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2]),32);
    tracep->fullIData(oldp+45,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3]),32);
    tracep->fullBit(oldp+46,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word));
    tracep->fullIData(oldp+47,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+48,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+49,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+50,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+51,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+52,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+53,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+54,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+55,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+56,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+57,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+58,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+59,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+60,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+61,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+62,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+63,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+64,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+65,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+66,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+67,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+68,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+69,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+70,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+71,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+72,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+73,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+74,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullSData(oldp+75,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data),16);
    tracep->fullBit(oldp+76,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+77,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)))));
    tracep->fullBit(oldp+78,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+79,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullSData(oldp+80,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
    tracep->fullBit(oldp+81,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+82,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+83,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+84,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i),32);
    tracep->fullBit(oldp+85,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload));
    tracep->fullBit(oldp+86,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
    tracep->fullBit(oldp+87,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump) 
                              & (~ (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump)))));
    tracep->fullIData(oldp+88,(vlSymsp->TOP__mips_core__DOT__i2d_pc.pc),26);
    tracep->fullBit(oldp+89,(((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
                              & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch))));
    tracep->fullIData(oldp+90,(vlSymsp->TOP__mips_core__DOT__d2e_pc.pc),26);
    tracep->fullBit(oldp+91,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction));
    tracep->fullBit(oldp+92,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome));
    tracep->fullSData(oldp+93,((0xffffU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                           >> 0xaU))),16);
    tracep->fullCData(oldp+94,((0x3fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                         >> 4U))),6);
    tracep->fullCData(oldp+95,((3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                      >> 2U))),2);
    tracep->fullCData(oldp+96,(vlSelf->mips_core__DOT__I_CACHE__DOT__state),2);
    tracep->fullCData(oldp+97,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index),6);
    tracep->fullSData(oldp+98,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag),16);
    tracep->fullCData(oldp+99,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select),4);
    tracep->fullCData(oldp+100,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we),4);
    tracep->fullIData(oldp+101,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                        [0U])),32);
    tracep->fullBit(oldp+102,(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word));
    tracep->fullQData(oldp+103,(vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits),64);
    tracep->fullBit(oldp+105,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))));
    tracep->fullIData(oldp+106,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+107,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+108,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)))));
    tracep->fullBit(oldp+109,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+110,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+111,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+112,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+113,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullBit(oldp+114,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 1U))));
    tracep->fullIData(oldp+115,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+116,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+117,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+118,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+119,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+120,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+121,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+122,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullBit(oldp+123,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 2U))));
    tracep->fullIData(oldp+124,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+125,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+126,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 2U)))));
    tracep->fullBit(oldp+127,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+128,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+129,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+130,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+131,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullBit(oldp+132,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 3U))));
    tracep->fullIData(oldp+133,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+134,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+135,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 3U)))));
    tracep->fullBit(oldp+136,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+137,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+138,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+139,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+140,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullSData(oldp+141,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data),16);
    tracep->fullBit(oldp+142,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word)))));
    tracep->fullBit(oldp+144,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+145,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullSData(oldp+146,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
    tracep->fullCData(oldp+147,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullBit(oldp+148,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0]));
    tracep->fullBit(oldp+149,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0]));
    tracep->fullQData(oldp+150,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0]),37);
    tracep->fullBit(oldp+152,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0]));
    tracep->fullCData(oldp+153,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0]),4);
    tracep->fullBit(oldp+154,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0]));
    tracep->fullBit(oldp+155,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1]));
    tracep->fullQData(oldp+156,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0]),34);
    tracep->fullQData(oldp+158,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1]),34);
    tracep->fullBit(oldp+160,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0]));
    tracep->fullBit(oldp+161,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1]));
    tracep->fullQData(oldp+162,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0]),37);
    tracep->fullQData(oldp+164,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1]),37);
    tracep->fullBit(oldp+166,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
    tracep->fullQData(oldp+167,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload),34);
    tracep->fullBit(oldp+169,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0]));
    tracep->fullBit(oldp+170,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1]));
    tracep->fullQData(oldp+171,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0]),34);
    tracep->fullQData(oldp+173,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1]),34);
    tracep->fullQData(oldp+175,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload),34);
    tracep->fullBit(oldp+177,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+178,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+179,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready));
    tracep->fullBit(oldp+180,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0]));
    tracep->fullBit(oldp+181,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1]));
    tracep->fullQData(oldp+182,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0]),37);
    tracep->fullQData(oldp+184,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1]),37);
    tracep->fullQData(oldp+186,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload),37);
    tracep->fullBit(oldp+188,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
    tracep->fullCData(oldp+189,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id),4);
    tracep->fullBit(oldp+190,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
    tracep->fullQData(oldp+191,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload),34);
    tracep->fullBit(oldp+193,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0]));
    tracep->fullBit(oldp+194,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+195,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+196,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
    tracep->fullQData(oldp+197,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload),37);
    tracep->fullBit(oldp+199,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0]));
    tracep->fullQData(oldp+200,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0]),37);
    tracep->fullQData(oldp+202,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload),37);
    tracep->fullBit(oldp+204,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+205,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+206,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready));
    tracep->fullBit(oldp+207,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0]));
    tracep->fullCData(oldp+208,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0]),4);
    tracep->fullCData(oldp+209,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload),4);
    tracep->fullBit(oldp+210,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
    tracep->fullCData(oldp+211,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id),4);
    tracep->fullIData(oldp+212,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[0]),32);
    tracep->fullIData(oldp+213,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[1]),32);
    tracep->fullIData(oldp+214,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[2]),32);
    tracep->fullIData(oldp+215,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[3]),32);
    tracep->fullIData(oldp+216,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[4]),32);
    tracep->fullIData(oldp+217,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[5]),32);
    tracep->fullIData(oldp+218,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[6]),32);
    tracep->fullIData(oldp+219,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[7]),32);
    tracep->fullIData(oldp+220,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[8]),32);
    tracep->fullIData(oldp+221,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[9]),32);
    tracep->fullIData(oldp+222,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[10]),32);
    tracep->fullIData(oldp+223,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[11]),32);
    tracep->fullIData(oldp+224,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[12]),32);
    tracep->fullIData(oldp+225,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[13]),32);
    tracep->fullIData(oldp+226,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[14]),32);
    tracep->fullIData(oldp+227,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[15]),32);
    tracep->fullIData(oldp+228,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[16]),32);
    tracep->fullIData(oldp+229,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[17]),32);
    tracep->fullIData(oldp+230,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[18]),32);
    tracep->fullIData(oldp+231,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[19]),32);
    tracep->fullIData(oldp+232,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[20]),32);
    tracep->fullIData(oldp+233,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[21]),32);
    tracep->fullIData(oldp+234,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[22]),32);
    tracep->fullIData(oldp+235,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[23]),32);
    tracep->fullIData(oldp+236,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[24]),32);
    tracep->fullIData(oldp+237,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[25]),32);
    tracep->fullIData(oldp+238,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[26]),32);
    tracep->fullIData(oldp+239,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[27]),32);
    tracep->fullIData(oldp+240,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[28]),32);
    tracep->fullIData(oldp+241,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[29]),32);
    tracep->fullIData(oldp+242,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[30]),32);
    tracep->fullIData(oldp+243,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[31]),32);
    tracep->fullCData(oldp+244,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                 >> 0x1eU)))),4);
    tracep->fullCData(oldp+245,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                 >> 0x1aU)))),4);
    tracep->fullIData(oldp+246,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload))),26);
    tracep->fullBit(oldp+247,((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullBit(oldp+248,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                             >> 0x20U)))));
    tracep->fullCData(oldp+249,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+250,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload)),32);
    tracep->fullBit(oldp+251,((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullIData(oldp+252,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                [0U]),32);
    tracep->fullBit(oldp+253,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                              [0U]));
    tracep->fullCData(oldp+254,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload
                                [0U]),4);
    tracep->fullCData(oldp+255,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                 >> 0x1eU)))),4);
    tracep->fullCData(oldp+256,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                 >> 0x1aU)))),4);
    tracep->fullIData(oldp+257,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload))),26);
    tracep->fullBit(oldp+258,((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullIData(oldp+259,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                  << 0xaU) | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                              << 4U))),26);
    tracep->fullBit(oldp+260,((1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
    tracep->fullIData(oldp+261,((((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag) 
                                  << 0xaU) | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                              << 4U))),26);
    tracep->fullBit(oldp+262,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                              [1U]));
    tracep->fullBit(oldp+263,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                             [1U] >> 0x20U)))));
    tracep->fullCData(oldp+264,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                 [1U] 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+265,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                        [1U])),32);
    tracep->fullBit(oldp+266,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                              [0U]));
    tracep->fullBit(oldp+267,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                             [0U] >> 0x20U)))));
    tracep->fullCData(oldp+268,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                 [0U] 
                                                 >> 0x21U)))),4);
    tracep->fullBit(oldp+269,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                               | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload))));
    tracep->fullBit(oldp+270,(vlSymsp->TOP__mips_core__DOT__i2d_inst.valid));
    tracep->fullIData(oldp+271,(vlSymsp->TOP__mips_core__DOT__i2d_inst.data),32);
    tracep->fullBit(oldp+272,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access));
    tracep->fullBit(oldp+273,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action));
    tracep->fullBit(oldp+274,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw));
    tracep->fullCData(oldp+275,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr),5);
    tracep->fullBit(oldp+276,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch));
    tracep->fullIData(oldp+277,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target),26);
    tracep->fullBit(oldp+278,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access));
    tracep->fullBit(oldp+279,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action));
    tracep->fullIData(oldp+280,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data),32);
    tracep->fullBit(oldp+281,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw));
    tracep->fullCData(oldp+282,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr),5);
    tracep->fullIData(oldp+283,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.result),32);
    tracep->fullBit(oldp+284,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access));
    tracep->fullIData(oldp+285,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result),32);
    tracep->fullBit(oldp+286,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw));
    tracep->fullCData(oldp+287,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr),5);
    tracep->fullBit(oldp+288,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw));
    tracep->fullCData(oldp+289,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr),5);
    tracep->fullIData(oldp+290,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data),32);
    tracep->fullBit(oldp+291,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid));
    tracep->fullCData(oldp+292,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl),5);
    tracep->fullBit(oldp+293,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid));
    tracep->fullCData(oldp+294,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl),5);
    tracep->fullIData(oldp+295,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1),32);
    tracep->fullIData(oldp+296,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2),32);
    tracep->fullBit(oldp+297,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid));
    tracep->fullIData(oldp+298,((0x3ffffffU & vlSymsp->TOP__mips_core__DOT__ex_alu_output.result)),26);
    tracep->fullBit(oldp+299,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid));
    tracep->fullBit(oldp+300,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action));
    tracep->fullIData(oldp+301,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr),26);
    tracep->fullIData(oldp+302,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data),32);
    tracep->fullBit(oldp+303,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump));
    tracep->fullBit(oldp+304,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump));
    tracep->fullBit(oldp+305,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg));
    tracep->fullIData(oldp+306,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target),26);
    tracep->fullBit(oldp+307,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs));
    tracep->fullCData(oldp+308,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr),5);
    tracep->fullBit(oldp+309,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt));
    tracep->fullCData(oldp+310,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr),5);
    tracep->fullBit(oldp+311,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate));
    tracep->fullIData(oldp+312,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate),32);
    tracep->fullIData(oldp+313,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs)
                                  ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                 [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr]
                                  : 0U)),32);
    tracep->fullIData(oldp+314,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt)
                                  ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                 [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr]
                                  : 0U)),32);
    tracep->fullIData(oldp+315,(vlSymsp->TOP__mips_core__DOT__if_pc_current.pc),26);
    tracep->fullIData(oldp+316,(vlSymsp->TOP__mips_core__DOT__e2m_pc.pc),26);
    tracep->fullIData(oldp+317,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                  << 0xaU) | (0x3f0U 
                                              & vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr))),26);
    tracep->fullIData(oldp+318,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload)
                                  ? vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target
                                  : vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target)),26);
    tracep->fullIData(oldp+319,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                                [(3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                        >> 2U))]),32);
    tracep->fullIData(oldp+320,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
                                [(3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                        >> 2U))]),32);
    tracep->fullIData(oldp+321,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate)
                                  ? vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate
                                  : vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data)),32);
    tracep->fullCData(oldp+322,(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state),3);
    tracep->fullCData(oldp+323,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr),6);
    tracep->fullCData(oldp+324,(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state),2);
    tracep->fullBit(oldp+325,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0]));
    tracep->fullBit(oldp+326,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0]));
    tracep->fullBit(oldp+327,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0]));
    tracep->fullBit(oldp+328,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1]));
    tracep->fullBit(oldp+329,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+330,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1]));
    tracep->fullBit(oldp+331,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+332,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+333,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+334,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+335,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+336,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                              [0U]));
    tracep->fullBit(oldp+337,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                              [0U]));
    tracep->fullBit(oldp+338,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                              [1U]));
    tracep->fullBit(oldp+339,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                              [0U]));
    tracep->fullBit(oldp+340,(vlSelf->mips_core__DOT__mem_done));
    tracep->fullCData(oldp+341,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                                          >> 4U))),6);
    tracep->fullCData(oldp+342,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we),4);
    tracep->fullIData(oldp+343,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0]),32);
    tracep->fullIData(oldp+344,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1]),32);
    tracep->fullIData(oldp+345,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2]),32);
    tracep->fullIData(oldp+346,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3]),32);
    tracep->fullSData(oldp+347,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata),16);
    tracep->fullBit(oldp+348,(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
    tracep->fullBit(oldp+349,(vlSelf->mips_core__DOT__D_CACHE__DOT__miss));
    tracep->fullBit(oldp+350,((1U & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we))));
    tracep->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)))));
    tracep->fullBit(oldp+352,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 1U))));
    tracep->fullBit(oldp+353,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+354,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 2U))));
    tracep->fullBit(oldp+355,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 2U)))));
    tracep->fullBit(oldp+356,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 3U))));
    tracep->fullBit(oldp+357,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 3U)))));
    tracep->fullBit(oldp+358,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss));
    tracep->fullBit(oldp+359,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss));
    tracep->fullBit(oldp+360,((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))));
    tracep->fullBit(oldp+361,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall));
    tracep->fullBit(oldp+362,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush));
    tracep->fullBit(oldp+363,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall));
    tracep->fullBit(oldp+364,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush));
    tracep->fullIData(oldp+365,(vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target),26);
    tracep->fullCData(oldp+366,((0x3fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                                          >> 4U))),6);
    tracep->fullIData(oldp+367,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0]),32);
    tracep->fullIData(oldp+368,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1]),32);
    tracep->fullIData(oldp+369,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2]),32);
    tracep->fullIData(oldp+370,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3]),32);
    tracep->fullBit(oldp+371,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
    tracep->fullBit(oldp+372,(vlSelf->mips_core__DOT__I_CACHE__DOT__miss));
    tracep->fullQData(oldp+373,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0]),34);
    tracep->fullQData(oldp+375,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0]),34);
    tracep->fullQData(oldp+377,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload),34);
    tracep->fullIData(oldp+379,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data),32);
    tracep->fullIData(oldp+380,(vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data),32);
    tracep->fullIData(oldp+381,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data),32);
    tracep->fullIData(oldp+382,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next),26);
    tracep->fullIData(oldp+383,(vlSymsp->TOP__mips_core__DOT__if_pc_next.pc),26);
    tracep->fullBit(oldp+384,(vlSelf->clk));
    tracep->fullBit(oldp+385,(vlSelf->rst_n));
    tracep->fullBit(oldp+386,(vlSelf->done));
    tracep->fullBit(oldp+387,(vlSelf->AWREADY));
    tracep->fullBit(oldp+388,(vlSelf->AWVALID));
    tracep->fullCData(oldp+389,(vlSelf->AWID),4);
    tracep->fullCData(oldp+390,(vlSelf->AWLEN),4);
    tracep->fullIData(oldp+391,(vlSelf->AWADDR),26);
    tracep->fullBit(oldp+392,(vlSelf->WREADY));
    tracep->fullBit(oldp+393,(vlSelf->WVALID));
    tracep->fullBit(oldp+394,(vlSelf->WLAST));
    tracep->fullCData(oldp+395,(vlSelf->WID),4);
    tracep->fullIData(oldp+396,(vlSelf->WDATA),32);
    tracep->fullBit(oldp+397,(vlSelf->BREADY));
    tracep->fullBit(oldp+398,(vlSelf->BVALID));
    tracep->fullCData(oldp+399,(vlSelf->BID),4);
    tracep->fullBit(oldp+400,(vlSelf->ARREADY));
    tracep->fullBit(oldp+401,(vlSelf->ARVALID));
    tracep->fullCData(oldp+402,(vlSelf->ARID),4);
    tracep->fullCData(oldp+403,(vlSelf->ARLEN),4);
    tracep->fullIData(oldp+404,(vlSelf->ARADDR),26);
    tracep->fullBit(oldp+405,(vlSelf->RREADY));
    tracep->fullBit(oldp+406,(vlSelf->RVALID));
    tracep->fullBit(oldp+407,(vlSelf->RLAST));
    tracep->fullCData(oldp+408,(vlSelf->RID),4);
    tracep->fullIData(oldp+409,(vlSelf->RDATA),32);
    tracep->fullQData(oldp+410,((((QData)((IData)(vlSelf->RID)) 
                                  << 0x21U) | (((QData)((IData)(vlSelf->RLAST)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->RDATA))))),37);
    tracep->fullIData(oldp+412,(6U),32);
    tracep->fullIData(oldp+413,(2U),32);
    tracep->fullIData(oldp+414,(0x10U),32);
    tracep->fullIData(oldp+415,(4U),32);
    tracep->fullIData(oldp+416,(0x40U),32);
    tracep->fullIData(oldp+417,(0x20U),32);
    tracep->fullBit(oldp+418,(0U));
    tracep->fullBit(oldp+419,(0U));
    tracep->fullIData(oldp+420,(1U),32);
    tracep->fullIData(oldp+421,(0x22U),32);
    tracep->fullIData(oldp+422,(0xffffffffU),32);
    tracep->fullIData(oldp+423,(0x25U),32);
    tracep->fullBit(oldp+424,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_ready));
    tracep->fullIData(oldp+425,(2U),32);
    tracep->fullBit(oldp+426,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_ready));
    tracep->fullIData(oldp+427,(1U),32);
    tracep->fullCData(oldp+428,(0U),4);
    tracep->fullCData(oldp+429,(4U),4);
    tracep->fullBit(oldp+430,(1U));
    tracep->fullCData(oldp+431,(1U),4);
    tracep->fullBit(oldp+432,(vlSymsp->TOP__mips_core__DOT__i2i_hc.flush));
}
