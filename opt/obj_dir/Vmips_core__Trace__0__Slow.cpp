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
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"AWREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"AWVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+474,"AWID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+475,"AWLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+476,"AWADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+477,"WREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"WVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"WLAST",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+480,"WID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+481,"WDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+482,"BREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"BVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+484,"BID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+485,"ARREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"ARVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+487,"ARID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+488,"ARLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+489,"ARADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+490,"RREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"RVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"RLAST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+493,"RID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+494,"RDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mips_core ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"AWREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"AWVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+474,"AWID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+475,"AWLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+476,"AWADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+477,"WREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"WVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"WLAST",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+480,"WID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+481,"WDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+482,"BREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"BVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+484,"BID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+485,"ARREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"ARVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+487,"ARID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+488,"ARLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+489,"ARADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+490,"RREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"RVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"RLAST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+493,"RID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+494,"RDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+410,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"lw_hazard",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+471,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODER ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DEC_STAGE_GLUE ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("D_CACHE ");
    tracep->declBus(c+497,"INDEX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+498,"BLOCK_OFFSET_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+498,"ASSOCIATIVITY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+499,"TAG_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"LINE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+93,"i_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,"i_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,"i_block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+411,"i_index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    {
        const char* __VenumItemNames[]
        = {"STATE_READY", "STATE_FLUSH_REQUEST", "STATE_FLUSH_DATA", 
                                "STATE_REFILL_REQUEST", 
                                "STATE_REFILL_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "d_cache.__typeimpenum4", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+96,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+392,"next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+97,"pending_write_response",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+98,"r_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,"r_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,"databank_select",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,"databank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,"databank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,"databank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+393,"databank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+413+i*1,"databank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+103,"tagbank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+99,"tagbank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+98,"tagbank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+411,"tagbank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+417,"tagbank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declQuad(c+104,"valid_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+106,"dirty_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+108+i*1,"shift_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+418,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+419,"miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"last_flush_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"last_refill_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("databanks[0] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+393,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+82,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+7,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+116,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+117,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+119,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[1] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+393,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+83,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+8,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+123,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+124,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+126,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[2] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+393,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+84,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+9,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+130,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+133,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[3] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+101,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+393,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+85,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+101,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+10,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+137,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+138,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+140,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+499,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+99,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+98,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+411,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+417,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+141,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+142,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+499,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+99,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+411,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+11,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+144,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+145,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+146,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+147,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+148,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+149,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+150,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("EX_STAGE_GLUE ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FETCH_UNIT ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("FORWARD_UNIT ");
    tracep->declBit(c+92,"o_lw_hazard",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HAZARD_CONTROLLER ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"lw_hazard",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"mem_done",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"ic_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+429,"ds_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"dec_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+152,"ex_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"dc_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+431,"if_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+432,"if_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+433,"dec_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+434,"dec_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"ex_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+503,"ex_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"mem_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"mem_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("BRANCH_CONTROLLER ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"request_prediction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("PREDICTOR ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"i_req_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+154,"i_req_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBus(c+435,"i_req_target",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    {
        const char* __VenumItemNames[]
        = {"NOT_TAKEN", "TAKEN"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "mips_core_pkg::BranchOutcome", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+504,"o_req_prediction",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"i_fb_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+156,"i_fb_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+157,"i_fb_prediction",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"i_fb_outcome",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("I_CACHE ");
    tracep->declBus(c+505,"INDEX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+498,"BLOCK_OFFSET_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+506,"TAG_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"LINE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+502,"TAG_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"DATA_BANK_ADDRESS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+498,"NUM_TAGS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+159,"i_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+160,"i_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+161,"i_block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,"i_index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    {
        const char* __VenumItemNames[]
        = {"STATE_READY", "STATE_REFILL_REQUEST", "STATE_REFILL_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(3, "i_cache.__typeimpenum5", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+162,"state",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+394,"next_state",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,"r_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,"r_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+165,"databank_select",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,"databank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,"databank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,"databank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+439,"databank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+440+i*1,"databank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+167,"tagbank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+164,"tagbank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+163,"tagbank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+436,"tagbank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+444+i*1,"tagbank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 16,0);
    }
    tracep->declQuad(c+168,"valid_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+170,"lru_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,"hit0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+447,"hit1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+448,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+449,"miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+171,"last_refill_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("databanks[0] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+166,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+438,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+439,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+86,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+172,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+173,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+166,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+439,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+12,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+174,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+175,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+176,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+177,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+178,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[1] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+166,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+438,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+439,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+87,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+166,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+439,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+13,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+181,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+182,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+183,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+185,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[2] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+166,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+438,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+439,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+88,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+186,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+187,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+166,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+439,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+14,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+189,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+190,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+192,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[3] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+166,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+438,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+439,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+89,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+502,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+497,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+501,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+438,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+166,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+439,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+15,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+196,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+197,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+199,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbanks[0] ");
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+506,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+505,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+163,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+436,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+90,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+201,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+16,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBit(c+202,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+506,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+505,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+502,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+163,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+164,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+436,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+16,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBit(c+204,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+206,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBit(c+207,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+208,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+17+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 16,0);
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbanks[1] ");
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+506,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+505,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+163,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+436,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+91,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBus(c+210,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+49,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBit(c+211,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+506,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+505,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+502,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+163,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+164,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
    tracep->declBit(c+469,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+436,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+49,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBit(c+213,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+214,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+215,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBit(c+216,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+217,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+50+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 16,0);
    }
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("MEMORY_ARBITER ");
    tracep->declBus(c+507,"WRITE_MASTERS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+498,"READ_MASTERS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+395+i*1,"write_address_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+218+i*1,"write_address_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+458+i*2,"write_address_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+396+i*1,"write_data_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+219+i*1,"write_data_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+220+i*2,"write_data_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 36,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1+i*1,"write_response_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+222+i*1,"write_response_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+223+i*1,"write_response_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+397+i*1,"read_address_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+224+i*1,"read_address_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+226+i*2,"read_address_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+2+i*1,"read_data_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+230+i*1,"read_data_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+232+i*2,"read_data_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 36,0);
    }
    tracep->pushNamePrefix("read_address_arbiter ");
    tracep->declBus(c+498,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+508,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+237,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+399+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+239+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+241+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    tracep->declQuad(c+245,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declBit(c+247,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+401,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+248,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+509,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+509,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_data_splitter ");
    tracep->declBus(c+498,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+510,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+493,"id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declQuad(c+495,"payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 36,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+4+i*1,"entity_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+250+i*1,"entity_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+252+i*2,"entity_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 36,0);
    }
    tracep->declQuad(c+256,"pipe_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+258,"pipe_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+511,"pipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+259,"pipe_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+512,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_address_arbiter ");
    tracep->declBus(c+507,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+508,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+261,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+402+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+263+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+460+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    tracep->declQuad(c+462,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declBit(c+264,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+403,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+265,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+509,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+509,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_data_arbiter ");
    tracep->declBus(c+507,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+510,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+267,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 36,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+404+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+269+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+270+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 36,0);
    }
    tracep->declQuad(c+272,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+274,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+405,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+275,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+509,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+509,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_response_splitter ");
    tracep->declBus(c+507,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+500,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+484,"id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+484,"payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+6+i*1,"entity_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+277+i*1,"entity_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+278+i*1,"entity_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    tracep->declBus(c+279,"pipe_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+280,"pipe_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+513,"pipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+281,"pipe_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+514,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_STAGE_GLUE ");
    tracep->declBit(c+410,"o_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_D2E ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_E2M ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_I2D ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_M2W ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBit(c+469,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+282+i*1,"regs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
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
    tracep->declBit(c+260,"AWVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+472,"AWREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+314,"AWID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,"AWLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,"AWADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+317,"AWVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+406,"AWREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+515,"AWID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,"AWLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+387,"AWADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+266,"WVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+477,"WREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+318,"WLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+319,"WID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+320,"WDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+321,"WVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+407,"WREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"WLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+515,"WID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+322,"WDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+483,"BVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+276,"BREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+484,"BID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+323,"BVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+517,"BREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+324,"BID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+236,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+485,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+325,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+326,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+327,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+328,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+408,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+518,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+329,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+330,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+409,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+515,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+331,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+491,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+249,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+492,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+493,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+494,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+332,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+517,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+333,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+334,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+335,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+336,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+517,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+337,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+338,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__load_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+339,"we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+388,"new_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_i_cache_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+448,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+389,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+340,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+341,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_d_cache_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+418,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+390,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+153,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+504,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+435,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+342,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"WRITE", "READ"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "mips_core_pkg::MemAccessType", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+343,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+464,"sw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+344,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
    tracep->declBus(c+345,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+346,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+347,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+348,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+349,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+350,"sw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+351,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+352,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+348,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+353,"alu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+351,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+352,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_pass_through__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+354,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+355,"alu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+356,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+357,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_back__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+356,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+357,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+465,"rw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_write_back__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+358,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+359,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+360,"rw_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2i_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+519,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+431,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+432,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+433,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+434,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+503,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m2w_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+430,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+503,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_alu_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+361,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
    tracep->declBus(c+362,"alu_ctl",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+466,"op1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+391,"op2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_alu_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+363,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+364,"alu_ctl",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+365,"op1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,"op2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_alu_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+367,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+353,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,"branch_outcome",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_d_cache_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+348,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+349,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+368,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+368,"addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+350,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_d_cache_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+369,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+370,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+371,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+467,"addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+372,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_decoder_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+361,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+362,"alu_ctl",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+373,"is_branch_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+374,"is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+375,"is_jump_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+376,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+342,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+343,"mem_action",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+377,"uses_rs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+378,"rs_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+379,"uses_rt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+380,"rt_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+381,"uses_immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+382,"immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+344,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+345,"rw_addr",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_reg_file_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+383,"rs_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,"rt_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_forward_unit_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+466,"rs_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,"rt_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_current__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+385,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__if_pc_next__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+468,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i2d_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+154,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d2e_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+156,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e2m_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+386,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__dec_branch_decoded__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+373,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+374,"is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+435,"target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+504,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+435,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__ex_branch_result__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+155,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"prediction",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+158,"outcome",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+347,"recovery_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
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
    tracep->fullIData(oldp+16,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__old_data),17);
    tracep->fullIData(oldp+17,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[0]),17);
    tracep->fullIData(oldp+18,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[1]),17);
    tracep->fullIData(oldp+19,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[2]),17);
    tracep->fullIData(oldp+20,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[3]),17);
    tracep->fullIData(oldp+21,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[4]),17);
    tracep->fullIData(oldp+22,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[5]),17);
    tracep->fullIData(oldp+23,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[6]),17);
    tracep->fullIData(oldp+24,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[7]),17);
    tracep->fullIData(oldp+25,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[8]),17);
    tracep->fullIData(oldp+26,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[9]),17);
    tracep->fullIData(oldp+27,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[10]),17);
    tracep->fullIData(oldp+28,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[11]),17);
    tracep->fullIData(oldp+29,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[12]),17);
    tracep->fullIData(oldp+30,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[13]),17);
    tracep->fullIData(oldp+31,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[14]),17);
    tracep->fullIData(oldp+32,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[15]),17);
    tracep->fullIData(oldp+33,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[16]),17);
    tracep->fullIData(oldp+34,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[17]),17);
    tracep->fullIData(oldp+35,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[18]),17);
    tracep->fullIData(oldp+36,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[19]),17);
    tracep->fullIData(oldp+37,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[20]),17);
    tracep->fullIData(oldp+38,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[21]),17);
    tracep->fullIData(oldp+39,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[22]),17);
    tracep->fullIData(oldp+40,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[23]),17);
    tracep->fullIData(oldp+41,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[24]),17);
    tracep->fullIData(oldp+42,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[25]),17);
    tracep->fullIData(oldp+43,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[26]),17);
    tracep->fullIData(oldp+44,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[27]),17);
    tracep->fullIData(oldp+45,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[28]),17);
    tracep->fullIData(oldp+46,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[29]),17);
    tracep->fullIData(oldp+47,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[30]),17);
    tracep->fullIData(oldp+48,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[31]),17);
    tracep->fullIData(oldp+49,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__old_data),17);
    tracep->fullIData(oldp+50,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[0]),17);
    tracep->fullIData(oldp+51,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[1]),17);
    tracep->fullIData(oldp+52,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[2]),17);
    tracep->fullIData(oldp+53,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[3]),17);
    tracep->fullIData(oldp+54,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[4]),17);
    tracep->fullIData(oldp+55,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[5]),17);
    tracep->fullIData(oldp+56,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[6]),17);
    tracep->fullIData(oldp+57,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[7]),17);
    tracep->fullIData(oldp+58,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[8]),17);
    tracep->fullIData(oldp+59,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[9]),17);
    tracep->fullIData(oldp+60,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[10]),17);
    tracep->fullIData(oldp+61,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[11]),17);
    tracep->fullIData(oldp+62,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[12]),17);
    tracep->fullIData(oldp+63,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[13]),17);
    tracep->fullIData(oldp+64,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[14]),17);
    tracep->fullIData(oldp+65,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[15]),17);
    tracep->fullIData(oldp+66,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[16]),17);
    tracep->fullIData(oldp+67,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[17]),17);
    tracep->fullIData(oldp+68,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[18]),17);
    tracep->fullIData(oldp+69,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[19]),17);
    tracep->fullIData(oldp+70,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[20]),17);
    tracep->fullIData(oldp+71,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[21]),17);
    tracep->fullIData(oldp+72,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[22]),17);
    tracep->fullIData(oldp+73,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[23]),17);
    tracep->fullIData(oldp+74,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[24]),17);
    tracep->fullIData(oldp+75,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[25]),17);
    tracep->fullIData(oldp+76,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[26]),17);
    tracep->fullIData(oldp+77,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[27]),17);
    tracep->fullIData(oldp+78,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[28]),17);
    tracep->fullIData(oldp+79,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[29]),17);
    tracep->fullIData(oldp+80,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[30]),17);
    tracep->fullIData(oldp+81,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__mem[31]),17);
    tracep->fullIData(oldp+82,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+83,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+84,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+85,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+86,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+87,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+88,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+89,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+90,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__old_data)),17);
    tracep->fullIData(oldp+91,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data_flag)
                                 ? vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data
                                 : vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__old_data)),17);
    tracep->fullBit(oldp+92,(vlSelf->mips_core__DOT__lw_hazard));
    tracep->fullSData(oldp+93,((0xffffU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                           >> 0xaU))),16);
    tracep->fullCData(oldp+94,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                         >> 4U))),6);
    tracep->fullCData(oldp+95,((3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                      >> 2U))),2);
    tracep->fullCData(oldp+96,(vlSelf->mips_core__DOT__D_CACHE__DOT__state),3);
    tracep->fullBit(oldp+97,(vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response));
    tracep->fullCData(oldp+98,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index),6);
    tracep->fullSData(oldp+99,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag),16);
    tracep->fullCData(oldp+100,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select),4);
    tracep->fullIData(oldp+101,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata),32);
    tracep->fullCData(oldp+102,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr),6);
    tracep->fullBit(oldp+103,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word));
    tracep->fullQData(oldp+104,(vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits),64);
    tracep->fullQData(oldp+106,(vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits),64);
    tracep->fullIData(oldp+108,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0]),32);
    tracep->fullIData(oldp+109,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1]),32);
    tracep->fullIData(oldp+110,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2]),32);
    tracep->fullIData(oldp+111,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3]),32);
    tracep->fullBit(oldp+112,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word));
    tracep->fullIData(oldp+113,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+114,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+115,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+116,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+117,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+118,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+119,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+120,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+121,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+122,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+123,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+124,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+125,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+126,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+127,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+128,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+129,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+130,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+131,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+132,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+133,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+134,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+135,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+136,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+137,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+138,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+139,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+140,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullSData(oldp+141,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data),16);
    tracep->fullBit(oldp+142,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)))));
    tracep->fullBit(oldp+144,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+145,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullSData(oldp+146,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
    tracep->fullBit(oldp+147,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+148,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+149,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+150,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i),32);
    tracep->fullBit(oldp+151,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload));
    tracep->fullBit(oldp+152,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
    tracep->fullBit(oldp+153,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump) 
                               & (~ (IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump)))));
    tracep->fullIData(oldp+154,(vlSymsp->TOP__mips_core__DOT__i2d_pc.pc),26);
    tracep->fullBit(oldp+155,(((IData)(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid) 
                               & (IData)(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch))));
    tracep->fullIData(oldp+156,(vlSymsp->TOP__mips_core__DOT__d2e_pc.pc),26);
    tracep->fullBit(oldp+157,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.prediction));
    tracep->fullBit(oldp+158,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.branch_outcome));
    tracep->fullIData(oldp+159,((0x1ffffU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                             >> 9U))),17);
    tracep->fullCData(oldp+160,((0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                          >> 4U))),5);
    tracep->fullCData(oldp+161,((3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                       >> 2U))),2);
    tracep->fullCData(oldp+162,(vlSelf->mips_core__DOT__I_CACHE__DOT__state),2);
    tracep->fullCData(oldp+163,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index),5);
    tracep->fullIData(oldp+164,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag),17);
    tracep->fullCData(oldp+165,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select),4);
    tracep->fullIData(oldp+166,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                        [0U])),32);
    tracep->fullCData(oldp+167,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we),2);
    tracep->fullQData(oldp+168,(vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits),64);
    tracep->fullIData(oldp+170,(vlSelf->mips_core__DOT__I_CACHE__DOT__lru_bits),32);
    tracep->fullBit(oldp+171,(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word));
    tracep->fullIData(oldp+172,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+173,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+174,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+175,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+176,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+177,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+178,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+179,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+180,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+181,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+182,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+183,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+184,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+185,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+186,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+187,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+188,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+189,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+190,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+191,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+192,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+193,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+194,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+195,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+196,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+197,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+198,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+199,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullBit(oldp+200,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we))));
    tracep->fullIData(oldp+201,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data),17);
    tracep->fullBit(oldp+202,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we)))));
    tracep->fullBit(oldp+204,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+205,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),5);
    tracep->fullIData(oldp+206,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),17);
    tracep->fullBit(oldp+207,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+208,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__0__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),5);
    tracep->fullBit(oldp+209,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
                                     >> 1U))));
    tracep->fullIData(oldp+210,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data),17);
    tracep->fullBit(oldp+211,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+212,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+213,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+214,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),5);
    tracep->fullIData(oldp+215,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),17);
    tracep->fullBit(oldp+216,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+217,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbanks__BRA__1__KET____DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),5);
    tracep->fullBit(oldp+218,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0]));
    tracep->fullBit(oldp+219,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0]));
    tracep->fullQData(oldp+220,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0]),37);
    tracep->fullBit(oldp+222,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0]));
    tracep->fullCData(oldp+223,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0]),4);
    tracep->fullBit(oldp+224,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0]));
    tracep->fullBit(oldp+225,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1]));
    tracep->fullQData(oldp+226,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0]),34);
    tracep->fullQData(oldp+228,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1]),34);
    tracep->fullBit(oldp+230,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0]));
    tracep->fullBit(oldp+231,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1]));
    tracep->fullQData(oldp+232,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0]),37);
    tracep->fullQData(oldp+234,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1]),37);
    tracep->fullBit(oldp+236,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
    tracep->fullQData(oldp+237,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload),34);
    tracep->fullBit(oldp+239,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0]));
    tracep->fullBit(oldp+240,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1]));
    tracep->fullQData(oldp+241,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0]),34);
    tracep->fullQData(oldp+243,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1]),34);
    tracep->fullQData(oldp+245,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload),34);
    tracep->fullBit(oldp+247,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+248,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+249,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready));
    tracep->fullBit(oldp+250,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0]));
    tracep->fullBit(oldp+251,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1]));
    tracep->fullQData(oldp+252,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0]),37);
    tracep->fullQData(oldp+254,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1]),37);
    tracep->fullQData(oldp+256,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload),37);
    tracep->fullBit(oldp+258,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
    tracep->fullCData(oldp+259,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id),4);
    tracep->fullBit(oldp+260,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
    tracep->fullQData(oldp+261,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload),34);
    tracep->fullBit(oldp+263,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0]));
    tracep->fullBit(oldp+264,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+265,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+266,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
    tracep->fullQData(oldp+267,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload),37);
    tracep->fullBit(oldp+269,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0]));
    tracep->fullQData(oldp+270,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0]),37);
    tracep->fullQData(oldp+272,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload),37);
    tracep->fullBit(oldp+274,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+275,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+276,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready));
    tracep->fullBit(oldp+277,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0]));
    tracep->fullCData(oldp+278,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0]),4);
    tracep->fullCData(oldp+279,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload),4);
    tracep->fullBit(oldp+280,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
    tracep->fullCData(oldp+281,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id),4);
    tracep->fullIData(oldp+282,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[0]),32);
    tracep->fullIData(oldp+283,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[1]),32);
    tracep->fullIData(oldp+284,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[2]),32);
    tracep->fullIData(oldp+285,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[3]),32);
    tracep->fullIData(oldp+286,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[4]),32);
    tracep->fullIData(oldp+287,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[5]),32);
    tracep->fullIData(oldp+288,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[6]),32);
    tracep->fullIData(oldp+289,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[7]),32);
    tracep->fullIData(oldp+290,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[8]),32);
    tracep->fullIData(oldp+291,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[9]),32);
    tracep->fullIData(oldp+292,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[10]),32);
    tracep->fullIData(oldp+293,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[11]),32);
    tracep->fullIData(oldp+294,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[12]),32);
    tracep->fullIData(oldp+295,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[13]),32);
    tracep->fullIData(oldp+296,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[14]),32);
    tracep->fullIData(oldp+297,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[15]),32);
    tracep->fullIData(oldp+298,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[16]),32);
    tracep->fullIData(oldp+299,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[17]),32);
    tracep->fullIData(oldp+300,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[18]),32);
    tracep->fullIData(oldp+301,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[19]),32);
    tracep->fullIData(oldp+302,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[20]),32);
    tracep->fullIData(oldp+303,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[21]),32);
    tracep->fullIData(oldp+304,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[22]),32);
    tracep->fullIData(oldp+305,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[23]),32);
    tracep->fullIData(oldp+306,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[24]),32);
    tracep->fullIData(oldp+307,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[25]),32);
    tracep->fullIData(oldp+308,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[26]),32);
    tracep->fullIData(oldp+309,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[27]),32);
    tracep->fullIData(oldp+310,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[28]),32);
    tracep->fullIData(oldp+311,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[29]),32);
    tracep->fullIData(oldp+312,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[30]),32);
    tracep->fullIData(oldp+313,(vlSelf->mips_core__DOT__REG_FILE__DOT__regs[31]),32);
    tracep->fullCData(oldp+314,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                 >> 0x1eU)))),4);
    tracep->fullCData(oldp+315,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                 >> 0x1aU)))),4);
    tracep->fullIData(oldp+316,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload))),26);
    tracep->fullBit(oldp+317,((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullBit(oldp+318,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                             >> 0x20U)))));
    tracep->fullCData(oldp+319,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+320,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload)),32);
    tracep->fullBit(oldp+321,((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullIData(oldp+322,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                [0U]),32);
    tracep->fullBit(oldp+323,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                              [0U]));
    tracep->fullCData(oldp+324,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload
                                [0U]),4);
    tracep->fullCData(oldp+325,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                 >> 0x1eU)))),4);
    tracep->fullCData(oldp+326,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                 >> 0x1aU)))),4);
    tracep->fullIData(oldp+327,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload))),26);
    tracep->fullBit(oldp+328,((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullIData(oldp+329,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                  << 0xaU) | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                              << 4U))),26);
    tracep->fullBit(oldp+330,((1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
    tracep->fullIData(oldp+331,(((vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag 
                                  << 9U) | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                            << 4U))),26);
    tracep->fullBit(oldp+332,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                              [1U]));
    tracep->fullBit(oldp+333,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                             [1U] >> 0x20U)))));
    tracep->fullCData(oldp+334,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                 [1U] 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+335,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                        [1U])),32);
    tracep->fullBit(oldp+336,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                              [0U]));
    tracep->fullBit(oldp+337,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                             [0U] >> 0x20U)))));
    tracep->fullCData(oldp+338,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                 [0U] 
                                                 >> 0x21U)))),4);
    tracep->fullBit(oldp+339,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload) 
                               | (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload))));
    tracep->fullBit(oldp+340,(vlSymsp->TOP__mips_core__DOT__i2d_inst.valid));
    tracep->fullIData(oldp+341,(vlSymsp->TOP__mips_core__DOT__i2d_inst.data),32);
    tracep->fullBit(oldp+342,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_mem_access));
    tracep->fullBit(oldp+343,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.mem_action));
    tracep->fullBit(oldp+344,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rw));
    tracep->fullCData(oldp+345,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rw_addr),5);
    tracep->fullBit(oldp+346,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_branch));
    tracep->fullIData(oldp+347,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target),26);
    tracep->fullBit(oldp+348,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.is_mem_access));
    tracep->fullBit(oldp+349,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.mem_action));
    tracep->fullIData(oldp+350,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.sw_data),32);
    tracep->fullBit(oldp+351,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.uses_rw));
    tracep->fullCData(oldp+352,(vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.rw_addr),5);
    tracep->fullIData(oldp+353,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.result),32);
    tracep->fullBit(oldp+354,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.is_mem_access));
    tracep->fullIData(oldp+355,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.alu_result),32);
    tracep->fullBit(oldp+356,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.uses_rw));
    tracep->fullCData(oldp+357,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_pass_through.rw_addr),5);
    tracep->fullBit(oldp+358,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.uses_rw));
    tracep->fullCData(oldp+359,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_addr),5);
    tracep->fullIData(oldp+360,(vlSymsp->TOP__mips_core__DOT__m2w_write_back.rw_data),32);
    tracep->fullBit(oldp+361,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.valid));
    tracep->fullCData(oldp+362,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.alu_ctl),5);
    tracep->fullBit(oldp+363,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.valid));
    tracep->fullCData(oldp+364,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.alu_ctl),5);
    tracep->fullIData(oldp+365,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op1),32);
    tracep->fullIData(oldp+366,(vlSymsp->TOP__mips_core__DOT__d2e_alu_input.op2),32);
    tracep->fullBit(oldp+367,(vlSymsp->TOP__mips_core__DOT__ex_alu_output.valid));
    tracep->fullIData(oldp+368,((0x3ffffffU & vlSymsp->TOP__mips_core__DOT__ex_alu_output.result)),26);
    tracep->fullBit(oldp+369,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.valid));
    tracep->fullBit(oldp+370,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.mem_action));
    tracep->fullIData(oldp+371,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr),26);
    tracep->fullIData(oldp+372,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.data),32);
    tracep->fullBit(oldp+373,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_branch_jump));
    tracep->fullBit(oldp+374,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump));
    tracep->fullBit(oldp+375,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.is_jump_reg));
    tracep->fullIData(oldp+376,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.branch_target),26);
    tracep->fullBit(oldp+377,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs));
    tracep->fullCData(oldp+378,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr),5);
    tracep->fullBit(oldp+379,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt));
    tracep->fullCData(oldp+380,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr),5);
    tracep->fullBit(oldp+381,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate));
    tracep->fullIData(oldp+382,(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate),32);
    tracep->fullIData(oldp+383,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rs)
                                  ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                 [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rs_addr]
                                  : 0U)),32);
    tracep->fullIData(oldp+384,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_rt)
                                  ? vlSelf->mips_core__DOT__REG_FILE__DOT__regs
                                 [vlSymsp->TOP__mips_core__DOT__dec_decoder_output.rt_addr]
                                  : 0U)),32);
    tracep->fullIData(oldp+385,(vlSymsp->TOP__mips_core__DOT__if_pc_current.pc),26);
    tracep->fullIData(oldp+386,(vlSymsp->TOP__mips_core__DOT__e2m_pc.pc),26);
    tracep->fullIData(oldp+387,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                  << 0xaU) | (0x3f0U 
                                              & vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr))),26);
    tracep->fullIData(oldp+388,(((IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload)
                                  ? vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target
                                  : vlSymsp->TOP__mips_core__DOT__d2e_alu_pass_through.recovery_target)),26);
    tracep->fullIData(oldp+389,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                                [(3U & (vlSymsp->TOP__mips_core__DOT__if_pc_current.pc 
                                        >> 2U))]),32);
    tracep->fullIData(oldp+390,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata
                                [(3U & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr 
                                        >> 2U))]),32);
    tracep->fullIData(oldp+391,(((IData)(vlSymsp->TOP__mips_core__DOT__dec_decoder_output.uses_immediate)
                                  ? vlSymsp->TOP__mips_core__DOT__dec_decoder_output.immediate
                                  : vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data)),32);
    tracep->fullCData(oldp+392,(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state),3);
    tracep->fullCData(oldp+393,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr),6);
    tracep->fullCData(oldp+394,(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state),2);
    tracep->fullBit(oldp+395,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0]));
    tracep->fullBit(oldp+396,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0]));
    tracep->fullBit(oldp+397,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0]));
    tracep->fullBit(oldp+398,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1]));
    tracep->fullBit(oldp+399,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+400,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1]));
    tracep->fullBit(oldp+401,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+402,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+403,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+404,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+405,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+406,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                              [0U]));
    tracep->fullBit(oldp+407,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                              [0U]));
    tracep->fullBit(oldp+408,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                              [1U]));
    tracep->fullBit(oldp+409,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                              [0U]));
    tracep->fullBit(oldp+410,(vlSelf->mips_core__DOT__mem_done));
    tracep->fullCData(oldp+411,((0x3fU & (vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next 
                                          >> 4U))),6);
    tracep->fullCData(oldp+412,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we),4);
    tracep->fullIData(oldp+413,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0]),32);
    tracep->fullIData(oldp+414,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1]),32);
    tracep->fullIData(oldp+415,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2]),32);
    tracep->fullIData(oldp+416,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3]),32);
    tracep->fullSData(oldp+417,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata),16);
    tracep->fullBit(oldp+418,(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
    tracep->fullBit(oldp+419,(vlSelf->mips_core__DOT__D_CACHE__DOT__miss));
    tracep->fullBit(oldp+420,((1U & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we))));
    tracep->fullBit(oldp+421,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)))));
    tracep->fullBit(oldp+422,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 1U))));
    tracep->fullBit(oldp+423,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+424,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 2U))));
    tracep->fullBit(oldp+425,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 2U)))));
    tracep->fullBit(oldp+426,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 3U))));
    tracep->fullBit(oldp+427,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 3U)))));
    tracep->fullBit(oldp+428,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss));
    tracep->fullBit(oldp+429,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ds_miss));
    tracep->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->mips_core__DOT__mem_done)))));
    tracep->fullBit(oldp+431,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall));
    tracep->fullBit(oldp+432,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush));
    tracep->fullBit(oldp+433,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall));
    tracep->fullBit(oldp+434,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush));
    tracep->fullIData(oldp+435,(vlSymsp->TOP__mips_core__DOT__dec_branch_decoded.target),26);
    tracep->fullCData(oldp+436,((0x1fU & (vlSymsp->TOP__mips_core__DOT__if_pc_next.pc 
                                          >> 4U))),5);
    tracep->fullCData(oldp+437,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we),4);
    tracep->fullCData(oldp+438,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_waddr),6);
    tracep->fullCData(oldp+439,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_raddr),6);
    tracep->fullIData(oldp+440,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0]),32);
    tracep->fullIData(oldp+441,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1]),32);
    tracep->fullIData(oldp+442,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2]),32);
    tracep->fullIData(oldp+443,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3]),32);
    tracep->fullIData(oldp+444,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata[0]),17);
    tracep->fullIData(oldp+445,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata[1]),17);
    tracep->fullBit(oldp+446,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit0));
    tracep->fullBit(oldp+447,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit1));
    tracep->fullBit(oldp+448,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
    tracep->fullBit(oldp+449,(vlSelf->mips_core__DOT__I_CACHE__DOT__miss));
    tracep->fullBit(oldp+450,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))));
    tracep->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)))));
    tracep->fullBit(oldp+452,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 1U))));
    tracep->fullBit(oldp+453,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+454,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 2U))));
    tracep->fullBit(oldp+455,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 2U)))));
    tracep->fullBit(oldp+456,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 3U))));
    tracep->fullBit(oldp+457,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 3U)))));
    tracep->fullQData(oldp+458,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0]),34);
    tracep->fullQData(oldp+460,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0]),34);
    tracep->fullQData(oldp+462,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload),34);
    tracep->fullIData(oldp+464,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rt_data),32);
    tracep->fullIData(oldp+465,(vlSymsp->TOP__mips_core__DOT__mem_write_back.rw_data),32);
    tracep->fullIData(oldp+466,(vlSymsp->TOP__mips_core__DOT__dec_forward_unit_output.rs_data),32);
    tracep->fullIData(oldp+467,(vlSymsp->TOP__mips_core__DOT__e2m_d_cache_input.addr_next),26);
    tracep->fullIData(oldp+468,(vlSymsp->TOP__mips_core__DOT__if_pc_next.pc),26);
    tracep->fullBit(oldp+469,(vlSelf->clk));
    tracep->fullBit(oldp+470,(vlSelf->rst_n));
    tracep->fullBit(oldp+471,(vlSelf->done));
    tracep->fullBit(oldp+472,(vlSelf->AWREADY));
    tracep->fullBit(oldp+473,(vlSelf->AWVALID));
    tracep->fullCData(oldp+474,(vlSelf->AWID),4);
    tracep->fullCData(oldp+475,(vlSelf->AWLEN),4);
    tracep->fullIData(oldp+476,(vlSelf->AWADDR),26);
    tracep->fullBit(oldp+477,(vlSelf->WREADY));
    tracep->fullBit(oldp+478,(vlSelf->WVALID));
    tracep->fullBit(oldp+479,(vlSelf->WLAST));
    tracep->fullCData(oldp+480,(vlSelf->WID),4);
    tracep->fullIData(oldp+481,(vlSelf->WDATA),32);
    tracep->fullBit(oldp+482,(vlSelf->BREADY));
    tracep->fullBit(oldp+483,(vlSelf->BVALID));
    tracep->fullCData(oldp+484,(vlSelf->BID),4);
    tracep->fullBit(oldp+485,(vlSelf->ARREADY));
    tracep->fullBit(oldp+486,(vlSelf->ARVALID));
    tracep->fullCData(oldp+487,(vlSelf->ARID),4);
    tracep->fullCData(oldp+488,(vlSelf->ARLEN),4);
    tracep->fullIData(oldp+489,(vlSelf->ARADDR),26);
    tracep->fullBit(oldp+490,(vlSelf->RREADY));
    tracep->fullBit(oldp+491,(vlSelf->RVALID));
    tracep->fullBit(oldp+492,(vlSelf->RLAST));
    tracep->fullCData(oldp+493,(vlSelf->RID),4);
    tracep->fullIData(oldp+494,(vlSelf->RDATA),32);
    tracep->fullQData(oldp+495,((((QData)((IData)(vlSelf->RID)) 
                                  << 0x21U) | (((QData)((IData)(vlSelf->RLAST)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->RDATA))))),37);
    tracep->fullIData(oldp+497,(6U),32);
    tracep->fullIData(oldp+498,(2U),32);
    tracep->fullIData(oldp+499,(0x10U),32);
    tracep->fullIData(oldp+500,(4U),32);
    tracep->fullIData(oldp+501,(0x40U),32);
    tracep->fullIData(oldp+502,(0x20U),32);
    tracep->fullBit(oldp+503,(0U));
    tracep->fullBit(oldp+504,(0U));
    tracep->fullIData(oldp+505,(5U),32);
    tracep->fullIData(oldp+506,(0x11U),32);
    tracep->fullIData(oldp+507,(1U),32);
    tracep->fullIData(oldp+508,(0x22U),32);
    tracep->fullIData(oldp+509,(0xffffffffU),32);
    tracep->fullIData(oldp+510,(0x25U),32);
    tracep->fullBit(oldp+511,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_ready));
    tracep->fullIData(oldp+512,(2U),32);
    tracep->fullBit(oldp+513,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_ready));
    tracep->fullIData(oldp+514,(1U),32);
    tracep->fullCData(oldp+515,(0U),4);
    tracep->fullCData(oldp+516,(4U),4);
    tracep->fullBit(oldp+517,(1U));
    tracep->fullCData(oldp+518,(1U),4);
    tracep->fullBit(oldp+519,(vlSymsp->TOP__mips_core__DOT__i2i_hc.flush));
}
