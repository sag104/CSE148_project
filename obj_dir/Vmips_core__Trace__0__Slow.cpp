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
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"AWREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"AWVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+575,"AWID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+576,"AWLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+577,"AWADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+578,"WREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"WVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"WLAST",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+581,"WID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+582,"WDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+583,"BREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"BVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"BID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+586,"ARREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"ARVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+588,"ARID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+589,"ARLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+590,"ARADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+591,"RREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"RVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"RLAST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+594,"RID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+595,"RDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("mips_core ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"AWREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"AWVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+575,"AWID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+576,"AWLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+577,"AWADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+578,"WREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"WVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"WLAST",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+581,"WID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+582,"WDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+583,"BREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"BVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"BID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+586,"ARREADY",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"ARVALID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+588,"ARID",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+589,"ARLEN",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+590,"ARADDR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBit(c+591,"RREADY",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"RVALID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"RLAST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+594,"RID",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+595,"RDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+572,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_RESERVATION_STATION ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("reserv_stat_table");
    tracep->declArray(c+8,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 74,0);
    tracep->declArray(c+11,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 74,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+14,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+15,"ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+16,"write_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+17,"ready_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+18,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COMMON_DATA_BUS ");
    tracep->declBit(c+527,"mem_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DECODER ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("D_CACHE ");
    tracep->declBus(c+601,"INDEX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"BLOCK_OFFSET_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"ASSOCIATIVITY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+603,"TAG_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+604,"LINE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+19,"i_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,"i_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,"i_block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,"i_index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    {
        const char* __VenumItemNames[]
        = {"STATE_READY", "STATE_FLUSH_REQUEST", "STATE_FLUSH_DATA", 
                                "STATE_REFILL_REQUEST", 
                                "STATE_REFILL_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(1, "d_cache.__typeimpenum14", 5, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+23,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+453,"next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+24,"pending_write_response",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+25,"r_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+26,"r_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+27,"databank_select",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+528,"databank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,"databank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"databank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+454,"databank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+529+i*1,"databank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+30,"tagbank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+26,"tagbank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,"tagbank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,"tagbank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+533,"tagbank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declQuad(c+31,"valid_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+33,"dirty_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"shift_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+534,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+535,"miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"last_flush_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"last_refill_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("databanks[0] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+454,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+428,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+28,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+454,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+443,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+43,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+44,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+46,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[1] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+454,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+429,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+28,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+454,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+444,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+50,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+53,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[2] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+454,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+430,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+28,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+454,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+445,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+57,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+58,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+60,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[3] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+454,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+431,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+446,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+28,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+454,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+446,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+64,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+65,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+67,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+603,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+25,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+22,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+533,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+68,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+447,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+603,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+26,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+447,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+71,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+72,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+73,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+74,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+75,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+76,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+77,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FETCH_UNIT ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HAZARD_CONTROLLER ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"NO_JR", "WAIT_FOR_TARGET"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "hazard_controller.__typeimpenum15", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+608,"JR_STATE_LOGIC",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+436,"branch_pred_output",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
    tracep->pushNamePrefix("bp_buffer");
    tracep->declArray(c+78,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
    tracep->declArray(c+81,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+84,"bp_wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+85,"bp_rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+455,"ic_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+456,"dec_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+457,"jr_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+458,"ex_overload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+544,"dc_miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+609,"inst_q_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+610,"rob_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+611,"alu_res_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+612,"mem_res_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+613,"ld_ready_st_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+459,"req_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"jr_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+87,"jr_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+614,"if_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+615,"if_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+616,"dec_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+617,"dec_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+618,"ex_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+619,"ex_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+620,"mem_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+621,"mem_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+88,"branch_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("BRANCH_CONTROLLER ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"req_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+89,"branch_fb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 40,0);
    tracep->declArray(c+436,"branch_pred_output",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 66,0);
    tracep->pushNamePrefix("PREDICTOR ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"i_req_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"i_req_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBus(c+92,"i_req_target",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    {
        const char* __VenumItemNames[]
        = {"NOT_TAKEN", "TAKEN"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(3, "mips_core_pkg::BranchOutcome", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+93,"o_req_prediction",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"o_req_prediction_gshare",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"o_req_prediction_2bit",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+96,"o_req_ghistory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+97,"i_fb_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"i_fb_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 25,0);
    tracep->declBus(c+99,"i_fb_ghistory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+100,"i_fb_prediction",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"i_fb_prediction_gshare",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"i_fb_prediction_2bit",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"i_fb_outcome",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+622,"BHT_ENTRIES",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"SN", "WN", "WT", "ST"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(4, "branch_predictor_tournament.__typeimpenum12", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+623,"TAKEN_COUNTER",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    {
        const char* __VenumItemNames[]
        = {"SG", "WG", "W2", "S2"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "branch_predictor_tournament.__typeimpenum13", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+624,"GSHARE_VS_2BIT_COUNTER",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,"ghistory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+104,"predict_index_gshare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+105,"predict_index_chooser",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+106,"feedback_index_gshare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+107,"feedback_index_chooser",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+108,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,"gshare_pred",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+95,"two_bit_local_pred",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"chooser_pred",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"gshare_correct",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"ghistory_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+625,"cur_pred",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("INSTRUCTION_QUEUE ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("inst_queue");
    tracep->declQuad(c+111,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+113,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+115,"wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,"rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+117,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("I_CACHE ");
    tracep->declBus(c+601,"INDEX_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"BLOCK_OFFSET_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+603,"TAG_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+604,"LINE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+119,"i_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+120,"i_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+121,"i_block_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+460,"i_index_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    {
        const char* __VenumItemNames[]
        = {"STATE_READY", "STATE_REFILL_REQUEST", "STATE_REFILL_DATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(6, "i_cache.__typeimpenum16", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+122,"state",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,"next_state",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,"r_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+124,"r_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+125,"databank_select",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,"databank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+463+i*1,"databank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+123,"databank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+460,"databank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+545+i*1,"databank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+467,"victim_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+468+i*1,"victim_dataline",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+626,"victim_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+627,"victim_tag_output",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+549,"victim_wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+550+i*1,"databank_dataline",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBit(c+126,"tagbank_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+472,"tagbank_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+123,"tagbank_waddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+460,"tagbank_raddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+554,"tagbank_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declQuad(c+127,"valid_bits",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+473,"main_cache_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+474,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+475,"miss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"last_refill_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("databanks[0] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+477,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+460,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+432,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+477,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+448,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+132,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+135,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[1] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+480,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+460,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+433,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+136,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+449,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+480,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+449,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+139,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+140,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+142,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[2] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+483,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+460,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+434,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+483,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+450,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+146,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+147,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+149,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("databanks[3] ");
    tracep->pushNamePrefix("databank ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+486,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+460,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+435,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+150,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+486,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+451,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+153,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+154,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+156,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("tagbank ");
    tracep->declBus(c+603,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"i_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+472,"i_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+123,"i_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+460,"i_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+554,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+157,"new_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+452,"old_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+158,"new_data_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->pushNamePrefix("BANK_CORE ");
    tracep->declBus(c+603,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+601,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"RAM_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"csb0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+123,"addr0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+472,"din0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+570,"clk1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"csb1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"addr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+452,"dout1",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+160,"csb0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+161,"addr0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+162,"din0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+74,"csb1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+163,"addr1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("victim_cache ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+554,"tag_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+555+i*1,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBit(c+549,"victim_wr_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"hit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+488+i*1,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+604,"VICTIM_CACHE_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+164+i*1,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 15,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+168+i*1,"data1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+172+i*1,"data2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+176+i*1,"data3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+180+i*1,"data4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+184+i*1,"lru",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 1,0);
    }
    tracep->declBus(c+492,"victim",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+439+i*1,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+493,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+188,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+189,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("MEMORY_ARBITER ");
    tracep->declBus(c+628,"WRITE_MASTERS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"READ_MASTERS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+494+i*1,"write_address_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+190+i*1,"write_address_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+559+i*2,"write_address_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+495+i*1,"write_data_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+191+i*1,"write_data_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+192+i*2,"write_data_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 36,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+2+i*1,"write_response_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+194+i*1,"write_response_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+195+i*1,"write_response_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+496+i*1,"read_address_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+196+i*1,"read_address_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+198+i*2,"read_address_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 33,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+3+i*1,"read_data_entity_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+202+i*1,"read_data_entity_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+204+i*2,"read_data_entity_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 36,0);
    }
    tracep->pushNamePrefix("read_address_arbiter ");
    tracep->declBus(c+602,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+629,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+209,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+498+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+211+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+213+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    tracep->declQuad(c+217,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declBit(c+219,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+500,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+220,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+630,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+630,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_data_splitter ");
    tracep->declBus(c+602,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+631,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+594,"id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declQuad(c+596,"payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 36,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+5+i*1,"entity_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+222+i*1,"entity_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+224+i*2,"entity_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 36,0);
    }
    tracep->declQuad(c+228,"pipe_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+230,"pipe_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+632,"pipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+231,"pipe_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+633,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_address_arbiter ");
    tracep->declBus(c+628,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+629,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+233,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 33,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+501+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+235+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+561+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 33,0);
    }
    tracep->declQuad(c+563,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declBit(c+236,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+502,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+237,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+630,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+630,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_data_arbiter ");
    tracep->declBus(c+628,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+631,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+239,"payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 36,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+503+i*1,"entity_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+241+i*1,"entity_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+242+i*2,"entity_payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 36,0);
    }
    tracep->declQuad(c+244,"merged_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+246,"merged_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+504,"merged_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+247,"gnt_id",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+630,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+630,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_response_splitter ");
    tracep->declBus(c+628,"COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+604,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+585,"payload",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+7+i*1,"entity_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+249+i*1,"entity_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+250+i*1,"entity_payload",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    tracep->declBus(c+251,"pipe_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+252,"pipe_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+634,"pipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+253,"pipe_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+635,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_RESERVATION_STATION ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("mem_add_table");
    tracep->declArray(c+254,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 101,0);
    tracep->declArray(c+258,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 101,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("store_queue");
    tracep->declQuad(c+262,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+264,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+266,"sq_wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+267,"sq_rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+268,"wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,"rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,"empty_spot",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+271,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+272,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+273,"ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+274,"st_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+275,"ld_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+276,"mem_input_valid_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"WRITE", "READ"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(7, "mips_core_pkg::MemAccessType", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+277,"mem_action_reg",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+278,"addr_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+279,"addr_next_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+280,"data_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,"tag_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+282,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("REGISTER_RENAME ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("checkpoint_buffer");
    tracep->declArray(c+283,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 134,0);
    tracep->declArray(c+288,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 134,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+293,"ch_wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+294,"ch_rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+295+i*1,"log_res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 5,0);
    }
    tracep->declQuad(c+327,"free_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+329,"reg_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+505,"free_phy_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+506,"avail_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+331,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+332,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+333,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+334,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+335,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+336,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+337,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REORDER_BUFFER ");
    tracep->declBit(c+570,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"BR", "JU", "ST", "REG"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(8, "reorder_buffer.__typeimpenum17", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+636,"INSTRUCTION_TYPE",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("fifo");
    tracep->declArray(c+338,"[0]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 72,0);
    tracep->declArray(c+341,"[1]",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 72,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+344,"wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,"rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+346,"empty_spot",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+347,"input_inst_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+348,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+349,"empty",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+350,"top_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+351,"mem_stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core_pkg__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+606,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+637,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+638,"G_HISTORY_BITS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"ROB_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+628,"ROB_DEPTH_BITS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"ALU_RES_STAT_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+628,"ALU_RES_STAT_DEPTH_BITS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"MEM_RES_STAT_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+628,"MEM_RES_STAT_DEPTH_BITS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"INSTRUCTION_QUEUE_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+628,"INSTRUCTION_QUEUE_DEPTH_BITS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+602,"CHECKPOINT_BUFFER_DEPTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+628,"CHECKPOINT_BUFFER_DEPTH_BITS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_address__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_address__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+232,"AWVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+573,"AWREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+352,"AWID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,"AWLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+354,"AWADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+355,"AWVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+507,"AWREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+639,"AWID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+640,"AWLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+598,"AWADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+238,"WVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+578,"WREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+356,"WLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+357,"WID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,"WDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+359,"WVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+508,"WREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"WLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+639,"WID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+360,"WDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_write_response__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+584,"BVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+248,"BREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+585,"BID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+361,"BVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+641,"BREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+362,"BID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_address__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+208,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+586,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+363,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+364,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+365,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+366,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+509,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+642,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+640,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+367,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+368,"ARVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+510,"ARREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+639,"ARID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+640,"ARLEN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+369,"ARADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__axi_read_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+592,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+221,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+593,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+594,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+595,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__1__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+370,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+641,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+371,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+372,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+373,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+374,"RVALID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+641,"RREADY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+375,"RLAST",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+376,"RID",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+377,"RDATA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+643,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+511,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+512,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+513,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_st_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_st_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+644,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+378,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+645,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+599,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+646,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+565,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+514,"flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+647,"correct_pred",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_load_pc__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_load_pc__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+515,"we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+516,"new_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_current__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_current__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+379,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_next__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_next__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+517,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_cache_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_cache_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+474,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+600,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__inst_q_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__inst_q_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+380,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+381,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+382,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+518,"rs_phy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+519,"rs_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+520,"rs_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+521,"rt_phy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+522,"rt_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+523,"rt_tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+524,"rw_phy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+383,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+384,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_reg_wr__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_reg_wr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+385,"reg_wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+386,"reg_wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,"reg_wr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+388,"reg_log_wr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_mem_wr__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_mem_wr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+389,"mem_wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+390,"mem_wr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+386,"mem_wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_jump_reg_commit__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_jump_reg_commit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+391,"valid_jump_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+392,"jump_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__st_data_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__st_data_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+393,"valid_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+394,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+395,"mem_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+396,"reg_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_res_stat_status__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_res_stat_status__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+397,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+378,"ld_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__reg_file_data__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__reg_file_data__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+525,"rs_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,"rt_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+398,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+399,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
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
        tracep->declDTypeEnum(9, "mips_core_pkg::AluCtl", 27, 5, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+400,"alu_ctl",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+401,"op1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+402,"op2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_status__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_status__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+403,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+404,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+405,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+406,"result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+566,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+567,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+568,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+407,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+648,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+408,"mem_action",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+409,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+410,"addr_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+411,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+534,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+648,"tag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+569,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+412,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+91,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBus(c+413,"alu_ctl",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+414,"is_branch_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+415,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+416,"is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+417,"is_jump_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+92,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declBit(c+418,"is_mem_access",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+419,"mem_action",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+420,"uses_rs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
        tracep->declDTypeEnum(10, "mips_core_pkg::MipsReg", 32, 5, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+421,"rs_addr",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+422,"uses_rt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+423,"rt_addr",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+424,"uses_immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+425,"immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+426,"uses_rw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+427,"rw_addr",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_branch_commit__0(Vmips_core___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_branch_commit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+97,"valid_branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"branch_outcome",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ALU_RESERVATION_STATION ");
    tracep->pushNamePrefix("alu_res_stat_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_res_stat_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_pred_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cdb_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("phy_reg_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__reg_file_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("COMMON_DATA_BUS ");
    tracep->pushNamePrefix("alu_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cdb_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("DECODER ");
    tracep->pushNamePrefix("i_inst\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__inst_q_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("D_CACHE ");
    tracep->pushNamePrefix("in\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0(vlSelf, tracep);
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
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("FETCH_UNIT ");
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_load_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_load_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc_current\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("o_pc_next\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_next__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("HAZARD_CONTROLLER ");
    tracep->pushNamePrefix("BRANCH_CONTROLLER ");
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_branch_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_branch_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_res_stat_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_pred_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_load_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_load_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_q_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__inst_q_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_res_stat_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_res_stat_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_branch_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_branch_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_jump_reg_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_jump_reg_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_st_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_st_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("INSTRUCTION_QUEUE ");
    tracep->pushNamePrefix("d_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_q_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__inst_q_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("I_CACHE ");
    tracep->pushNamePrefix("i_pc_current\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc_next\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_next__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_address\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_read_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_read_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_cache_output__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("MEM_RESERVATION_STATION ");
    tracep->pushNamePrefix("branch_pred_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cdb_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_res_stat_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_res_stat_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("phy_reg_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__reg_file_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_mem_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_mem_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("st_data_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__st_data_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("REGISTER_RENAME ");
    tracep->pushNamePrefix("branch_pred_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("phy_reg_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_reg_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_reg_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("phy_reg_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__reg_file_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_reg_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_reg_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("REORDER_BUFFER ");
    tracep->pushNamePrefix("branch_pred_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cdb_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("phy_reg_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_branch_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_branch_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_jump_reg_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_jump_reg_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_mem_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_mem_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_reg_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_reg_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_st_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_st_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("st_data_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__st_data_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_res_stat_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_res_stat_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__alu_res_stat_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    tracep->pushNamePrefix("branch_pred_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__branch_pred_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cdb_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__cdb_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache_input\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_input__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__d_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__decoder_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__e_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_cache_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_cache_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_load_pc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__i_load_pc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_q_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__inst_q_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__m_hc__0(vlSelf, tracep);
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
    tracep->pushNamePrefix("mem_res_stat_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_res_stat_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_address[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_address__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_data[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_data__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_write_response[0]\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__mem_write_response__BRA__0__KET____0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_current\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_current__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_next\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__pc_next__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("phy_reg_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__phy_reg_output__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_data\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__reg_file_data__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_branch_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_branch_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_jump_reg_commit\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_jump_reg_commit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_mem_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_mem_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_reg_wr\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_reg_wr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_st_hc\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_st_hc__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rob_status\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__rob_status__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("st_data_output\211 ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core__DOT__st_data_output__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mips_core_pkg ");
    Vmips_core___024root__trace_init_sub__TOP__mips_core_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
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
    tracep->fullIData(oldp+1,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+2,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_ready[0]));
    tracep->fullBit(oldp+3,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[0]));
    tracep->fullBit(oldp+4,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_ready[1]));
    tracep->fullBit(oldp+5,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[0]));
    tracep->fullBit(oldp+6,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_data_splitter__entity_ready[1]));
    tracep->fullBit(oldp+7,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_response_splitter__entity_ready[0]));
    __Vtemp_h3f86df69__0[0U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
        [0U][0U];
    __Vtemp_h3f86df69__0[1U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
        [0U][1U];
    __Vtemp_h3f86df69__0[2U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
        [0U][2U];
    tracep->fullWData(oldp+8,(__Vtemp_h3f86df69__0),75);
    __Vtemp_h3f86deaa__0[0U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
        [1U][0U];
    __Vtemp_h3f86deaa__0[1U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
        [1U][1U];
    __Vtemp_h3f86deaa__0[2U] = vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__reserv_stat_table
        [1U][2U];
    tracep->fullWData(oldp+11,(__Vtemp_h3f86deaa__0),75);
    tracep->fullBit(oldp+14,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__full));
    tracep->fullBit(oldp+15,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready));
    tracep->fullBit(oldp+16,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__write_index));
    tracep->fullBit(oldp+17,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__ready_index));
    tracep->fullIData(oldp+18,(vlSelf->mips_core__DOT__ALU_RESERVATION_STATION__DOT__unnamedblk3__DOT__a),32);
    tracep->fullSData(oldp+19,((0xffffU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                           >> 0xaU))),16);
    tracep->fullCData(oldp+20,((0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                         >> 4U))),6);
    tracep->fullCData(oldp+21,((3U & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr 
                                      >> 2U))),2);
    tracep->fullCData(oldp+22,((0x3fU & (vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next 
                                         >> 4U))),6);
    tracep->fullCData(oldp+23,(vlSelf->mips_core__DOT__D_CACHE__DOT__state),3);
    tracep->fullBit(oldp+24,(vlSelf->mips_core__DOT__D_CACHE__DOT__pending_write_response));
    tracep->fullCData(oldp+25,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index),6);
    tracep->fullSData(oldp+26,(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag),16);
    tracep->fullCData(oldp+27,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_select),4);
    tracep->fullIData(oldp+28,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_wdata),32);
    tracep->fullCData(oldp+29,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_waddr),6);
    tracep->fullBit(oldp+30,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word));
    tracep->fullQData(oldp+31,(vlSelf->mips_core__DOT__D_CACHE__DOT__valid_bits),64);
    tracep->fullQData(oldp+33,(vlSelf->mips_core__DOT__D_CACHE__DOT__dirty_bits),64);
    tracep->fullIData(oldp+35,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[0]),32);
    tracep->fullIData(oldp+36,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[1]),32);
    tracep->fullIData(oldp+37,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[2]),32);
    tracep->fullIData(oldp+38,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata[3]),32);
    tracep->fullBit(oldp+39,(vlSelf->mips_core__DOT__D_CACHE__DOT__last_flush_word));
    tracep->fullIData(oldp+40,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+41,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+42,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+43,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+44,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+45,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+46,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+47,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+48,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+49,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+50,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+51,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+52,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+53,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+54,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+55,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+56,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+57,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+58,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+59,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+60,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+61,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+62,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+63,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+64,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+65,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+66,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+67,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullSData(oldp+68,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data),16);
    tracep->fullBit(oldp+69,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__last_refill_word)))));
    tracep->fullBit(oldp+71,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+72,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullSData(oldp+73,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
    tracep->fullBit(oldp+74,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+75,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+76,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+77,(vlSelf->mips_core__DOT__D_CACHE__DOT__unnamedblk2__DOT__i),32);
    __Vtemp_hbea94543__0[0U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
        [0U][0U];
    __Vtemp_hbea94543__0[1U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
        [0U][1U];
    __Vtemp_hbea94543__0[2U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
        [0U][2U];
    tracep->fullWData(oldp+78,(__Vtemp_hbea94543__0),67);
    __Vtemp_hbea94486__0[0U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
        [1U][0U];
    __Vtemp_hbea94486__0[1U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
        [1U][1U];
    __Vtemp_hbea94486__0[2U] = vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
        [1U][2U];
    tracep->fullWData(oldp+81,(__Vtemp_hbea94486__0),67);
    tracep->fullBit(oldp+84,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_wr_ptr));
    tracep->fullBit(oldp+85,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr));
    tracep->fullBit(oldp+86,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_stall));
    tracep->fullBit(oldp+87,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_state));
    tracep->fullBit(oldp+88,(((IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch) 
                              & ((1U & (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_buffer
                                        [vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__bp_rd_ptr][1U] 
                                        >> 8U)) == (IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome)))));
    tracep->fullQData(oldp+89,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb),41);
    tracep->fullIData(oldp+91,(vlSymsp->TOP__mips_core__DOT__inst_q_output.pc),26);
    tracep->fullIData(oldp+92,(vlSymsp->TOP__mips_core__DOT__decoder_output.branch_target),26);
    tracep->fullBit(oldp+93,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__chooser_pred));
    tracep->fullBit(oldp+94,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_pred));
    tracep->fullBit(oldp+95,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__two_bit_local_pred));
    tracep->fullSData(oldp+96,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__ghistory),12);
    tracep->fullBit(oldp+97,(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch));
    tracep->fullIData(oldp+98,((0x3ffffffU & (IData)(
                                                     (vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                                      >> 0xfU)))),26);
    tracep->fullSData(oldp+99,((0xfffU & (IData)(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb))),12);
    tracep->fullBit(oldp+100,((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                             >> 0xeU)))));
    tracep->fullBit(oldp+101,((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                             >> 0xdU)))));
    tracep->fullBit(oldp+102,((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                             >> 0xcU)))));
    tracep->fullBit(oldp+103,(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome));
    tracep->fullSData(oldp+104,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_gshare),12);
    tracep->fullSData(oldp+105,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__predict_index_chooser),12);
    tracep->fullSData(oldp+106,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_gshare),12);
    tracep->fullSData(oldp+107,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__feedback_index_chooser),12);
    tracep->fullCData(oldp+108,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__counter),2);
    tracep->fullBit(oldp+109,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__gshare_correct));
    tracep->fullBit(oldp+110,(((IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.valid_branch) 
                               & ((1U & (IData)((vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT____Vcellinp__BRANCH_CONTROLLER__branch_fb 
                                                 >> 0xeU))) 
                                  != (IData)(vlSymsp->TOP__mips_core__DOT__rob_branch_commit.branch_outcome)))));
    tracep->fullQData(oldp+111,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue
                                [0U]),64);
    tracep->fullQData(oldp+113,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__inst_queue
                                [1U]),64);
    tracep->fullCData(oldp+115,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__wr_ptr),2);
    tracep->fullCData(oldp+116,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__rd_ptr),2);
    tracep->fullBit(oldp+117,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__full));
    tracep->fullBit(oldp+118,(vlSelf->mips_core__DOT__INSTRUCTION_QUEUE__DOT__empty));
    tracep->fullSData(oldp+119,((0xffffU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                            >> 0xaU))),16);
    tracep->fullCData(oldp+120,((0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                          >> 4U))),6);
    tracep->fullCData(oldp+121,((3U & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                       >> 2U))),2);
    tracep->fullCData(oldp+122,(vlSelf->mips_core__DOT__I_CACHE__DOT__state),2);
    tracep->fullCData(oldp+123,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index),6);
    tracep->fullSData(oldp+124,(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag),16);
    tracep->fullCData(oldp+125,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_select),4);
    tracep->fullBit(oldp+126,(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word));
    tracep->fullQData(oldp+127,(vlSelf->mips_core__DOT__I_CACHE__DOT__valid_bits),64);
    tracep->fullIData(oldp+129,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+130,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+131,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+132,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+133,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+134,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+135,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+136,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+137,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+138,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+139,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+140,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+141,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+142,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+143,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+144,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+145,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+146,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+147,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+148,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+149,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullIData(oldp+150,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data),32);
    tracep->fullBit(oldp+151,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag));
    tracep->fullBit(oldp+152,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+153,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullIData(oldp+154,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),32);
    tracep->fullBit(oldp+155,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__csb1_reg));
    tracep->fullCData(oldp+156,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullSData(oldp+157,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data),16);
    tracep->fullBit(oldp+158,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__new_data_flag));
    tracep->fullBit(oldp+159,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__last_refill_word)))));
    tracep->fullBit(oldp+160,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__csb0_reg));
    tracep->fullCData(oldp+161,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr0_reg),6);
    tracep->fullSData(oldp+162,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__din0_reg),16);
    tracep->fullCData(oldp+163,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__genblk1__DOT__BANK_CORE__DOT__addr1_reg),6);
    tracep->fullSData(oldp+164,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[0]),16);
    tracep->fullSData(oldp+165,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[1]),16);
    tracep->fullSData(oldp+166,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[2]),16);
    tracep->fullSData(oldp+167,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__tag[3]),16);
    tracep->fullIData(oldp+168,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[0]),32);
    tracep->fullIData(oldp+169,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[1]),32);
    tracep->fullIData(oldp+170,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[2]),32);
    tracep->fullIData(oldp+171,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data1[3]),32);
    tracep->fullIData(oldp+172,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[0]),32);
    tracep->fullIData(oldp+173,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[1]),32);
    tracep->fullIData(oldp+174,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[2]),32);
    tracep->fullIData(oldp+175,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data2[3]),32);
    tracep->fullIData(oldp+176,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[0]),32);
    tracep->fullIData(oldp+177,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[1]),32);
    tracep->fullIData(oldp+178,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[2]),32);
    tracep->fullIData(oldp+179,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data3[3]),32);
    tracep->fullIData(oldp+180,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[0]),32);
    tracep->fullIData(oldp+181,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[1]),32);
    tracep->fullIData(oldp+182,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[2]),32);
    tracep->fullIData(oldp+183,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__data4[3]),32);
    tracep->fullCData(oldp+184,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[0]),2);
    tracep->fullCData(oldp+185,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[1]),2);
    tracep->fullCData(oldp+186,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[2]),2);
    tracep->fullCData(oldp+187,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__lru[3]),2);
    tracep->fullIData(oldp+188,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk3__DOT__i),32);
    tracep->fullIData(oldp+189,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    tracep->fullBit(oldp+190,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_valid[0]));
    tracep->fullBit(oldp+191,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_valid[0]));
    tracep->fullQData(oldp+192,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_payload[0]),37);
    tracep->fullBit(oldp+194,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid[0]));
    tracep->fullCData(oldp+195,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload[0]),4);
    tracep->fullBit(oldp+196,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[0]));
    tracep->fullBit(oldp+197,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_valid[1]));
    tracep->fullQData(oldp+198,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[0]),34);
    tracep->fullQData(oldp+200,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_payload[1]),34);
    tracep->fullBit(oldp+202,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[0]));
    tracep->fullBit(oldp+203,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid[1]));
    tracep->fullQData(oldp+204,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[0]),37);
    tracep->fullQData(oldp+206,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload[1]),37);
    tracep->fullBit(oldp+208,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__valid));
    tracep->fullQData(oldp+209,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload),34);
    tracep->fullBit(oldp+211,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[0]));
    tracep->fullBit(oldp+212,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_valid[1]));
    tracep->fullQData(oldp+213,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[0]),34);
    tracep->fullQData(oldp+215,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__read_address_arbiter__entity_payload[1]),34);
    tracep->fullQData(oldp+217,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_payload),34);
    tracep->fullBit(oldp+219,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+220,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+221,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__ready));
    tracep->fullBit(oldp+222,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[0]));
    tracep->fullBit(oldp+223,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_valid[1]));
    tracep->fullQData(oldp+224,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[0]),37);
    tracep->fullQData(oldp+226,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_data_splitter__entity_payload[1]),37);
    tracep->fullQData(oldp+228,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_payload),37);
    tracep->fullBit(oldp+230,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_valid));
    tracep->fullCData(oldp+231,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_id),4);
    tracep->fullBit(oldp+232,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__valid));
    tracep->fullQData(oldp+233,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload),34);
    tracep->fullBit(oldp+235,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_valid[0]));
    tracep->fullBit(oldp+236,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+237,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+238,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__valid));
    tracep->fullQData(oldp+239,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload),37);
    tracep->fullBit(oldp+241,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_valid[0]));
    tracep->fullQData(oldp+242,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_data_arbiter__entity_payload[0]),37);
    tracep->fullQData(oldp+244,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_payload),37);
    tracep->fullBit(oldp+246,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_valid));
    tracep->fullIData(oldp+247,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__gnt_id),32);
    tracep->fullBit(oldp+248,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__ready));
    tracep->fullBit(oldp+249,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_valid[0]));
    tracep->fullCData(oldp+250,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_response_splitter__entity_payload[0]),4);
    tracep->fullCData(oldp+251,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_payload),4);
    tracep->fullBit(oldp+252,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_valid));
    tracep->fullCData(oldp+253,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_id),4);
    __Vtemp_h7604577d__0[0U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [0U][0U];
    __Vtemp_h7604577d__0[1U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [0U][1U];
    __Vtemp_h7604577d__0[2U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [0U][2U];
    __Vtemp_h7604577d__0[3U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [0U][3U];
    tracep->fullWData(oldp+254,(__Vtemp_h7604577d__0),102);
    __Vtemp_h760453c0__0[0U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [1U][0U];
    __Vtemp_h760453c0__0[1U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [1U][1U];
    __Vtemp_h760453c0__0[2U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [1U][2U];
    __Vtemp_h760453c0__0[3U] = vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_add_table
        [1U][3U];
    tracep->fullWData(oldp+258,(__Vtemp_h760453c0__0),102);
    tracep->fullQData(oldp+262,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                                [0U]),33);
    tracep->fullQData(oldp+264,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__store_queue
                                [1U]),33);
    tracep->fullBit(oldp+266,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__sq_wr_ptr));
    tracep->fullBit(oldp+267,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__sq_rd_ptr));
    tracep->fullCData(oldp+268,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__wr_ptr),2);
    tracep->fullCData(oldp+269,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__rd_ptr),2);
    tracep->fullBit(oldp+270,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty_spot));
    tracep->fullBit(oldp+271,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__full));
    tracep->fullBit(oldp+272,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__empty));
    tracep->fullBit(oldp+273,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ready));
    tracep->fullBit(oldp+274,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__st_ready));
    tracep->fullBit(oldp+275,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__ld_ready));
    tracep->fullBit(oldp+276,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_input_valid_reg));
    tracep->fullBit(oldp+277,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__mem_action_reg));
    tracep->fullIData(oldp+278,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_reg),26);
    tracep->fullIData(oldp+279,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__addr_next_reg),26);
    tracep->fullIData(oldp+280,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__data_reg),32);
    tracep->fullBit(oldp+281,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__tag_reg));
    tracep->fullIData(oldp+282,(vlSelf->mips_core__DOT__MEM_RESERVATION_STATION__DOT__unnamedblk1__DOT__a),32);
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
    tracep->fullWData(oldp+283,(__Vtemp_hb7d42c05__0),135);
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
    tracep->fullWData(oldp+288,(__Vtemp_hb7d436cc__0),135);
    tracep->fullBit(oldp+293,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__ch_wr_ptr));
    tracep->fullBit(oldp+294,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__ch_rd_ptr));
    tracep->fullCData(oldp+295,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[0]),6);
    tracep->fullCData(oldp+296,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[1]),6);
    tracep->fullCData(oldp+297,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[2]),6);
    tracep->fullCData(oldp+298,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[3]),6);
    tracep->fullCData(oldp+299,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[4]),6);
    tracep->fullCData(oldp+300,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[5]),6);
    tracep->fullCData(oldp+301,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[6]),6);
    tracep->fullCData(oldp+302,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[7]),6);
    tracep->fullCData(oldp+303,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[8]),6);
    tracep->fullCData(oldp+304,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[9]),6);
    tracep->fullCData(oldp+305,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[10]),6);
    tracep->fullCData(oldp+306,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[11]),6);
    tracep->fullCData(oldp+307,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[12]),6);
    tracep->fullCData(oldp+308,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[13]),6);
    tracep->fullCData(oldp+309,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[14]),6);
    tracep->fullCData(oldp+310,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[15]),6);
    tracep->fullCData(oldp+311,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[16]),6);
    tracep->fullCData(oldp+312,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[17]),6);
    tracep->fullCData(oldp+313,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[18]),6);
    tracep->fullCData(oldp+314,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[19]),6);
    tracep->fullCData(oldp+315,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[20]),6);
    tracep->fullCData(oldp+316,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[21]),6);
    tracep->fullCData(oldp+317,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[22]),6);
    tracep->fullCData(oldp+318,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[23]),6);
    tracep->fullCData(oldp+319,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[24]),6);
    tracep->fullCData(oldp+320,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[25]),6);
    tracep->fullCData(oldp+321,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[26]),6);
    tracep->fullCData(oldp+322,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[27]),6);
    tracep->fullCData(oldp+323,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[28]),6);
    tracep->fullCData(oldp+324,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[29]),6);
    tracep->fullCData(oldp+325,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[30]),6);
    tracep->fullCData(oldp+326,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__log_res[31]),6);
    tracep->fullQData(oldp+327,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_reg),64);
    tracep->fullQData(oldp+329,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__reg_ready),64);
    tracep->fullIData(oldp+331,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk2__DOT__i),32);
    tracep->fullIData(oldp+332,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk3__DOT__j),32);
    tracep->fullIData(oldp+333,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk4__DOT__k),32);
    tracep->fullIData(oldp+334,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk5__DOT__i),32);
    tracep->fullIData(oldp+335,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk6__DOT__j),32);
    tracep->fullIData(oldp+336,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk7__DOT__i),32);
    tracep->fullIData(oldp+337,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__unnamedblk8__DOT__j),32);
    __Vtemp_h8184942a__0[0U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
        [0U][0U];
    __Vtemp_h8184942a__0[1U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
        [0U][1U];
    __Vtemp_h8184942a__0[2U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
        [0U][2U];
    tracep->fullWData(oldp+338,(__Vtemp_h8184942a__0),73);
    __Vtemp_h818496e9__0[0U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
        [1U][0U];
    __Vtemp_h818496e9__0[1U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
        [1U][1U];
    __Vtemp_h818496e9__0[2U] = vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
        [1U][2U];
    tracep->fullWData(oldp+341,(__Vtemp_h818496e9__0),73);
    tracep->fullCData(oldp+344,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr),2);
    tracep->fullCData(oldp+345,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr),2);
    tracep->fullBit(oldp+346,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__empty_spot));
    tracep->fullCData(oldp+347,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__input_inst_type),2);
    tracep->fullBit(oldp+348,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__full));
    tracep->fullBit(oldp+349,(((IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__wr_ptr) 
                               == (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))));
    tracep->fullBit(oldp+350,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__top_ready));
    tracep->fullBit(oldp+351,((IData)(((0x100U == (0x180U 
                                                   & vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                                   [
                                                   (1U 
                                                    & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U])) 
                                       & (IData)(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.ld_ready)))));
    tracep->fullCData(oldp+352,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                 >> 0x1eU)))),4);
    tracep->fullCData(oldp+353,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload 
                                                 >> 0x1aU)))),4);
    tracep->fullIData(oldp+354,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__payload))),26);
    tracep->fullBit(oldp+355,((1U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullBit(oldp+356,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                             >> 0x20U)))));
    tracep->fullCData(oldp+357,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+358,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__payload)),32);
    tracep->fullBit(oldp+359,((2U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullIData(oldp+360,(vlSelf->mips_core__DOT__D_CACHE__DOT__shift_rdata
                                [0U]),32);
    tracep->fullBit(oldp+361,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_valid
                              [0U]));
    tracep->fullCData(oldp+362,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_entity_payload
                                [0U]),4);
    tracep->fullCData(oldp+363,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                 >> 0x1eU)))),4);
    tracep->fullCData(oldp+364,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload 
                                                 >> 0x1aU)))),4);
    tracep->fullIData(oldp+365,((0x3ffffffU & (IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__payload))),26);
    tracep->fullBit(oldp+366,((3U == (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__state))));
    tracep->fullIData(oldp+367,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_tag) 
                                  << 0xaU) | ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__r_index) 
                                              << 4U))),26);
    tracep->fullBit(oldp+368,((1U == (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__state))));
    tracep->fullIData(oldp+369,((((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_tag) 
                                  << 0xaU) | ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__r_index) 
                                              << 4U))),26);
    tracep->fullBit(oldp+370,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                              [1U]));
    tracep->fullBit(oldp+371,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                             [1U] >> 0x20U)))));
    tracep->fullCData(oldp+372,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                 [1U] 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+373,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                        [1U])),32);
    tracep->fullBit(oldp+374,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_valid
                              [0U]));
    tracep->fullBit(oldp+375,((1U & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                             [0U] >> 0x20U)))));
    tracep->fullCData(oldp+376,((0xfU & (IData)((vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                                 [0U] 
                                                 >> 0x21U)))),4);
    tracep->fullIData(oldp+377,((IData)(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_entity_payload
                                        [0U])),32);
    tracep->fullBit(oldp+378,(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.ld_ready));
    tracep->fullIData(oldp+379,(vlSymsp->TOP__mips_core__DOT__pc_current.pc),26);
    tracep->fullBit(oldp+380,(vlSymsp->TOP__mips_core__DOT__inst_q_output.valid));
    tracep->fullBit(oldp+381,(vlSymsp->TOP__mips_core__DOT__inst_q_output.full));
    tracep->fullIData(oldp+382,(vlSymsp->TOP__mips_core__DOT__inst_q_output.data),32);
    tracep->fullBit(oldp+383,(vlSymsp->TOP__mips_core__DOT__rob_status.full));
    tracep->fullBit(oldp+384,(vlSymsp->TOP__mips_core__DOT__rob_status.tag));
    tracep->fullBit(oldp+385,(vlSymsp->TOP__mips_core__DOT__rob_reg_wr.reg_wr_en));
    tracep->fullIData(oldp+386,(((vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                  [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][1U] 
                                  << 0x1eU) | (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                               [(1U 
                                                 & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                               >> 2U))),32);
    tracep->fullCData(oldp+387,(vlSymsp->TOP__mips_core__DOT__rob_reg_wr.reg_wr_addr),6);
    tracep->fullCData(oldp+388,((0x1fU & ((vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                           [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][2U] 
                                           << 4U) | 
                                          (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                           [(1U & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][1U] 
                                           >> 0x1cU)))),5);
    tracep->fullBit(oldp+389,(vlSymsp->TOP__mips_core__DOT__rob_mem_wr.mem_wr_en));
    tracep->fullIData(oldp+390,(vlSymsp->TOP__mips_core__DOT__rob_mem_wr.mem_wr_addr),26);
    tracep->fullBit(oldp+391,(vlSymsp->TOP__mips_core__DOT__rob_jump_reg_commit.valid_jump_reg));
    tracep->fullIData(oldp+392,((0x3ffffffU & (vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__fifo
                                               [(1U 
                                                 & (IData)(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__rd_ptr))][0U] 
                                               >> 2U))),26);
    tracep->fullBit(oldp+393,(vlSymsp->TOP__mips_core__DOT__st_data_output.valid_st));
    tracep->fullBit(oldp+394,(vlSymsp->TOP__mips_core__DOT__st_data_output.tag));
    tracep->fullIData(oldp+395,(vlSymsp->TOP__mips_core__DOT__st_data_output.mem_addr),26);
    tracep->fullIData(oldp+396,(vlSymsp->TOP__mips_core__DOT__st_data_output.reg_value),32);
    tracep->fullBit(oldp+397,(vlSymsp->TOP__mips_core__DOT__mem_res_stat_status.full));
    tracep->fullBit(oldp+398,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.valid));
    tracep->fullBit(oldp+399,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.tag));
    tracep->fullCData(oldp+400,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.alu_ctl),5);
    tracep->fullIData(oldp+401,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op1),32);
    tracep->fullIData(oldp+402,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_output.op2),32);
    tracep->fullBit(oldp+403,(vlSymsp->TOP__mips_core__DOT__alu_res_stat_status.full));
    tracep->fullBit(oldp+404,(vlSymsp->TOP__mips_core__DOT__alu_output.valid));
    tracep->fullBit(oldp+405,(vlSymsp->TOP__mips_core__DOT__alu_output.tag));
    tracep->fullIData(oldp+406,(vlSymsp->TOP__mips_core__DOT__alu_output.result),32);
    tracep->fullBit(oldp+407,(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid));
    tracep->fullBit(oldp+408,(vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action));
    tracep->fullIData(oldp+409,(vlSymsp->TOP__mips_core__DOT__d_cache_input.addr),26);
    tracep->fullIData(oldp+410,(vlSymsp->TOP__mips_core__DOT__d_cache_input.addr_next),26);
    tracep->fullIData(oldp+411,(vlSymsp->TOP__mips_core__DOT__d_cache_input.data),32);
    tracep->fullBit(oldp+412,(vlSymsp->TOP__mips_core__DOT__decoder_output.valid));
    tracep->fullCData(oldp+413,(vlSymsp->TOP__mips_core__DOT__decoder_output.alu_ctl),5);
    tracep->fullBit(oldp+414,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch_jump));
    tracep->fullBit(oldp+415,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_branch));
    tracep->fullBit(oldp+416,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump));
    tracep->fullBit(oldp+417,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_jump_reg));
    tracep->fullBit(oldp+418,(vlSymsp->TOP__mips_core__DOT__decoder_output.is_mem_access));
    tracep->fullBit(oldp+419,(vlSymsp->TOP__mips_core__DOT__decoder_output.mem_action));
    tracep->fullBit(oldp+420,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rs));
    tracep->fullCData(oldp+421,(vlSymsp->TOP__mips_core__DOT__decoder_output.rs_addr),5);
    tracep->fullBit(oldp+422,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rt));
    tracep->fullCData(oldp+423,(vlSymsp->TOP__mips_core__DOT__decoder_output.rt_addr),5);
    tracep->fullBit(oldp+424,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_immediate));
    tracep->fullIData(oldp+425,(vlSymsp->TOP__mips_core__DOT__decoder_output.immediate),32);
    tracep->fullBit(oldp+426,(vlSymsp->TOP__mips_core__DOT__decoder_output.uses_rw));
    tracep->fullCData(oldp+427,(vlSymsp->TOP__mips_core__DOT__decoder_output.rw_addr),5);
    tracep->fullIData(oldp+428,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+429,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+430,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+431,(((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+432,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+433,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+434,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullIData(oldp+435,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data_flag)
                                  ? vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__new_data
                                  : vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data)),32);
    tracep->fullWData(oldp+436,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__branch_pred_output),67);
    tracep->fullBit(oldp+439,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[0]));
    tracep->fullBit(oldp+440,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[1]));
    tracep->fullBit(oldp+441,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[2]));
    tracep->fullBit(oldp+442,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__valid[3]));
    tracep->fullIData(oldp+443,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+444,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+445,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+446,(vlSelf->mips_core__DOT__D_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
    tracep->fullSData(oldp+447,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank__DOT__old_data),16);
    tracep->fullIData(oldp+448,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__0__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+449,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__1__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+450,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__2__KET____DOT__databank__DOT__old_data),32);
    tracep->fullIData(oldp+451,(vlSelf->mips_core__DOT__I_CACHE__DOT__databanks__BRA__3__KET____DOT__databank__DOT__old_data),32);
    tracep->fullSData(oldp+452,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank__DOT__old_data),16);
    tracep->fullCData(oldp+453,(vlSelf->mips_core__DOT__D_CACHE__DOT__next_state),3);
    tracep->fullCData(oldp+454,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_raddr),6);
    tracep->fullBit(oldp+455,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ic_miss));
    tracep->fullBit(oldp+456,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_overload));
    tracep->fullBit(oldp+457,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__jr_overload));
    tracep->fullBit(oldp+458,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_overload));
    tracep->fullBit(oldp+459,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__req_valid));
    tracep->fullCData(oldp+460,((0x3fU & (vlSymsp->TOP__mips_core__DOT__pc_next.pc 
                                          >> 4U))),6);
    tracep->fullCData(oldp+461,(vlSelf->mips_core__DOT__I_CACHE__DOT__next_state),2);
    tracep->fullCData(oldp+462,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we),4);
    tracep->fullIData(oldp+463,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[0]),32);
    tracep->fullIData(oldp+464,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[1]),32);
    tracep->fullIData(oldp+465,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[2]),32);
    tracep->fullIData(oldp+466,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata[3]),32);
    tracep->fullBit(oldp+467,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit));
    tracep->fullIData(oldp+468,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[0]),32);
    tracep->fullIData(oldp+469,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[1]),32);
    tracep->fullIData(oldp+470,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[2]),32);
    tracep->fullIData(oldp+471,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline[3]),32);
    tracep->fullSData(oldp+472,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_wdata),16);
    tracep->fullBit(oldp+473,(vlSelf->mips_core__DOT__I_CACHE__DOT__main_cache_hit));
    tracep->fullBit(oldp+474,(vlSelf->mips_core__DOT__I_CACHE__DOT__hit));
    tracep->fullBit(oldp+475,(vlSelf->mips_core__DOT__I_CACHE__DOT__miss));
    tracep->fullBit(oldp+476,((1U & (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we))));
    tracep->fullIData(oldp+477,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                [0U]),32);
    tracep->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we)))));
    tracep->fullBit(oldp+479,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 1U))));
    tracep->fullIData(oldp+480,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                [1U]),32);
    tracep->fullBit(oldp+481,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+482,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 2U))));
    tracep->fullIData(oldp+483,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                [2U]),32);
    tracep->fullBit(oldp+484,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 2U)))));
    tracep->fullBit(oldp+485,((1U & ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                     >> 3U))));
    tracep->fullIData(oldp+486,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_wdata
                                [3U]),32);
    tracep->fullBit(oldp+487,((1U & (~ ((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_we) 
                                        >> 3U)))));
    tracep->fullIData(oldp+488,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[0]),32);
    tracep->fullIData(oldp+489,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[1]),32);
    tracep->fullIData(oldp+490,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[2]),32);
    tracep->fullIData(oldp+491,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellout__victim_cache__data_out[3]),32);
    tracep->fullCData(oldp+492,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__victim),2);
    tracep->fullIData(oldp+493,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_cache__DOT__unnamedblk1__DOT__j),32);
    tracep->fullBit(oldp+494,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready[0]));
    tracep->fullBit(oldp+495,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready[0]));
    tracep->fullBit(oldp+496,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[0]));
    tracep->fullBit(oldp+497,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready[1]));
    tracep->fullBit(oldp+498,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+499,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__read_address_arbiter__entity_ready[1]));
    tracep->fullBit(oldp+500,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+501,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_address_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+502,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_ready));
    tracep->fullBit(oldp+503,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellout__write_data_arbiter__entity_ready[0]));
    tracep->fullBit(oldp+504,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_arbiter__DOT__merged_ready));
    tracep->fullCData(oldp+505,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__free_phy_reg),6);
    tracep->fullBit(oldp+506,(vlSelf->mips_core__DOT__REGISTER_RENAME__DOT__avail_reg));
    tracep->fullBit(oldp+507,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_ready
                              [0U]));
    tracep->fullBit(oldp+508,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_data_entity_ready
                              [0U]));
    tracep->fullBit(oldp+509,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                              [1U]));
    tracep->fullBit(oldp+510,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_address_entity_ready
                              [0U]));
    tracep->fullBit(oldp+511,(vlSymsp->TOP__mips_core__DOT__i_hc.stall));
    tracep->fullBit(oldp+512,(vlSymsp->TOP__mips_core__DOT__d_hc.flush));
    tracep->fullBit(oldp+513,(vlSymsp->TOP__mips_core__DOT__d_hc.stall));
    tracep->fullBit(oldp+514,(vlSymsp->TOP__mips_core__DOT__branch_pred_hc.flush));
    tracep->fullBit(oldp+515,(vlSymsp->TOP__mips_core__DOT__i_load_pc.we));
    tracep->fullIData(oldp+516,(vlSymsp->TOP__mips_core__DOT__i_load_pc.new_pc),26);
    tracep->fullIData(oldp+517,(vlSymsp->TOP__mips_core__DOT__pc_next.pc),26);
    tracep->fullCData(oldp+518,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_phy),6);
    tracep->fullBit(oldp+519,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_ready));
    tracep->fullBit(oldp+520,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rs_tag));
    tracep->fullCData(oldp+521,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_phy),6);
    tracep->fullBit(oldp+522,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_ready));
    tracep->fullBit(oldp+523,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rt_tag));
    tracep->fullCData(oldp+524,(vlSymsp->TOP__mips_core__DOT__phy_reg_output.rw_phy),6);
    tracep->fullIData(oldp+525,(vlSymsp->TOP__mips_core__DOT__reg_file_data.rs_data),32);
    tracep->fullIData(oldp+526,(vlSymsp->TOP__mips_core__DOT__reg_file_data.rt_data),32);
    tracep->fullBit(oldp+527,(vlSelf->mips_core__DOT__COMMON_DATA_BUS__DOT__mem_valid));
    tracep->fullCData(oldp+528,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we),4);
    tracep->fullIData(oldp+529,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[0]),32);
    tracep->fullIData(oldp+530,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[1]),32);
    tracep->fullIData(oldp+531,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[2]),32);
    tracep->fullIData(oldp+532,(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_rdata[3]),32);
    tracep->fullSData(oldp+533,(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata),16);
    tracep->fullBit(oldp+534,(vlSelf->mips_core__DOT__D_CACHE__DOT__hit));
    tracep->fullBit(oldp+535,(vlSelf->mips_core__DOT__D_CACHE__DOT__miss));
    tracep->fullBit(oldp+536,((1U & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we))));
    tracep->fullBit(oldp+537,((1U & (~ (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we)))));
    tracep->fullBit(oldp+538,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 1U))));
    tracep->fullBit(oldp+539,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 1U)))));
    tracep->fullBit(oldp+540,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 2U))));
    tracep->fullBit(oldp+541,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 2U)))));
    tracep->fullBit(oldp+542,((1U & ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                     >> 3U))));
    tracep->fullBit(oldp+543,((1U & (~ ((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__databank_we) 
                                        >> 3U)))));
    tracep->fullBit(oldp+544,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dc_miss));
    tracep->fullIData(oldp+545,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[0]),32);
    tracep->fullIData(oldp+546,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[1]),32);
    tracep->fullIData(oldp+547,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[2]),32);
    tracep->fullIData(oldp+548,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata[3]),32);
    tracep->fullBit(oldp+549,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_wr_en));
    tracep->fullIData(oldp+550,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[0]),32);
    tracep->fullIData(oldp+551,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[1]),32);
    tracep->fullIData(oldp+552,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[2]),32);
    tracep->fullIData(oldp+553,(vlSelf->mips_core__DOT__I_CACHE__DOT__databank_dataline[3]),32);
    tracep->fullSData(oldp+554,(vlSelf->mips_core__DOT__I_CACHE__DOT__tagbank_rdata),16);
    tracep->fullIData(oldp+555,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[0]),32);
    tracep->fullIData(oldp+556,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[1]),32);
    tracep->fullIData(oldp+557,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[2]),32);
    tracep->fullIData(oldp+558,(vlSelf->mips_core__DOT__I_CACHE__DOT____Vcellinp__victim_cache__data_in[3]),32);
    tracep->fullQData(oldp+559,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_entity_payload[0]),34);
    tracep->fullQData(oldp+561,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT____Vcellinp__write_address_arbiter__entity_payload[0]),34);
    tracep->fullQData(oldp+563,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_address_arbiter__DOT__merged_payload),34);
    tracep->fullBit(oldp+565,(vlSymsp->TOP__mips_core__DOT__m_hc.stall));
    tracep->fullBit(oldp+566,(vlSymsp->TOP__mips_core__DOT__cdb_output.valid));
    tracep->fullBit(oldp+567,(vlSymsp->TOP__mips_core__DOT__cdb_output.tag));
    tracep->fullIData(oldp+568,(vlSymsp->TOP__mips_core__DOT__cdb_output.data),32);
    tracep->fullIData(oldp+569,(vlSymsp->TOP__mips_core__DOT__d_cache_output.data),32);
    tracep->fullBit(oldp+570,(vlSelf->clk));
    tracep->fullBit(oldp+571,(vlSelf->rst_n));
    tracep->fullBit(oldp+572,(vlSelf->done));
    tracep->fullBit(oldp+573,(vlSelf->AWREADY));
    tracep->fullBit(oldp+574,(vlSelf->AWVALID));
    tracep->fullCData(oldp+575,(vlSelf->AWID),4);
    tracep->fullCData(oldp+576,(vlSelf->AWLEN),4);
    tracep->fullIData(oldp+577,(vlSelf->AWADDR),26);
    tracep->fullBit(oldp+578,(vlSelf->WREADY));
    tracep->fullBit(oldp+579,(vlSelf->WVALID));
    tracep->fullBit(oldp+580,(vlSelf->WLAST));
    tracep->fullCData(oldp+581,(vlSelf->WID),4);
    tracep->fullIData(oldp+582,(vlSelf->WDATA),32);
    tracep->fullBit(oldp+583,(vlSelf->BREADY));
    tracep->fullBit(oldp+584,(vlSelf->BVALID));
    tracep->fullCData(oldp+585,(vlSelf->BID),4);
    tracep->fullBit(oldp+586,(vlSelf->ARREADY));
    tracep->fullBit(oldp+587,(vlSelf->ARVALID));
    tracep->fullCData(oldp+588,(vlSelf->ARID),4);
    tracep->fullCData(oldp+589,(vlSelf->ARLEN),4);
    tracep->fullIData(oldp+590,(vlSelf->ARADDR),26);
    tracep->fullBit(oldp+591,(vlSelf->RREADY));
    tracep->fullBit(oldp+592,(vlSelf->RVALID));
    tracep->fullBit(oldp+593,(vlSelf->RLAST));
    tracep->fullCData(oldp+594,(vlSelf->RID),4);
    tracep->fullIData(oldp+595,(vlSelf->RDATA),32);
    tracep->fullQData(oldp+596,((((QData)((IData)(vlSelf->RID)) 
                                  << 0x21U) | (((QData)((IData)(vlSelf->RLAST)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->RDATA))))),37);
    tracep->fullIData(oldp+598,((((IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__tagbank_rdata) 
                                  << 0xaU) | (0x3f0U 
                                              & vlSymsp->TOP__mips_core__DOT__d_cache_input.addr))),26);
    tracep->fullBit(oldp+599,((((IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.valid) 
                                & (IData)(vlSelf->mips_core__DOT__D_CACHE__DOT__hit)) 
                               & (IData)(vlSymsp->TOP__mips_core__DOT__d_cache_input.mem_action))));
    tracep->fullIData(oldp+600,(((IData)(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_hit)
                                  ? vlSelf->mips_core__DOT__I_CACHE__DOT__victim_dataline
                                 [(3U & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                         >> 2U))] : 
                                 vlSelf->mips_core__DOT__I_CACHE__DOT__databank_rdata
                                 [(3U & (vlSymsp->TOP__mips_core__DOT__pc_current.pc 
                                         >> 2U))])),32);
    tracep->fullIData(oldp+601,(6U),32);
    tracep->fullIData(oldp+602,(2U),32);
    tracep->fullIData(oldp+603,(0x10U),32);
    tracep->fullIData(oldp+604,(4U),32);
    tracep->fullIData(oldp+605,(0x40U),32);
    tracep->fullIData(oldp+606,(0x20U),32);
    tracep->fullBit(oldp+607,(0U));
    tracep->fullBit(oldp+608,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__JR_STATE_LOGIC));
    tracep->fullBit(oldp+609,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__inst_q_full));
    tracep->fullBit(oldp+610,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__rob_full));
    tracep->fullBit(oldp+611,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__alu_res_full));
    tracep->fullBit(oldp+612,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__mem_res_full));
    tracep->fullBit(oldp+613,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ld_ready_st_stall));
    tracep->fullBit(oldp+614,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_stall));
    tracep->fullBit(oldp+615,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__if_flush));
    tracep->fullBit(oldp+616,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_stall));
    tracep->fullBit(oldp+617,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__dec_flush));
    tracep->fullBit(oldp+618,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_stall));
    tracep->fullBit(oldp+619,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__ex_flush));
    tracep->fullBit(oldp+620,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__mem_stall));
    tracep->fullBit(oldp+621,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__mem_flush));
    tracep->fullIData(oldp+622,(0x1000U),32);
    tracep->fullCData(oldp+623,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__TAKEN_COUNTER),2);
    tracep->fullCData(oldp+624,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__GSHARE_VS_2BIT_COUNTER),2);
    tracep->fullBit(oldp+625,(vlSelf->mips_core__DOT__HAZARD_CONTROLLER__DOT__BRANCH_CONTROLLER__DOT__PREDICTOR__DOT__cur_pred));
    tracep->fullSData(oldp+626,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_tag),16);
    tracep->fullSData(oldp+627,(vlSelf->mips_core__DOT__I_CACHE__DOT__victim_tag_output),16);
    tracep->fullIData(oldp+628,(1U),32);
    tracep->fullIData(oldp+629,(0x22U),32);
    tracep->fullIData(oldp+630,(0xffffffffU),32);
    tracep->fullIData(oldp+631,(0x25U),32);
    tracep->fullBit(oldp+632,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__read_data_splitter__DOT__pipe_ready));
    tracep->fullIData(oldp+633,(2U),32);
    tracep->fullBit(oldp+634,(vlSelf->mips_core__DOT__MEMORY_ARBITER__DOT__write_response_splitter__DOT__pipe_ready));
    tracep->fullIData(oldp+635,(1U),32);
    tracep->fullCData(oldp+636,(vlSelf->mips_core__DOT__REORDER_BUFFER__DOT__INSTRUCTION_TYPE),2);
    tracep->fullIData(oldp+637,(0x1aU),32);
    tracep->fullIData(oldp+638,(0xcU),32);
    tracep->fullCData(oldp+639,(0U),4);
    tracep->fullCData(oldp+640,(4U),4);
    tracep->fullBit(oldp+641,(1U));
    tracep->fullCData(oldp+642,(1U),4);
    tracep->fullBit(oldp+643,(vlSymsp->TOP__mips_core__DOT__i_hc.flush));
    tracep->fullBit(oldp+644,(vlSymsp->TOP__mips_core__DOT__rob_st_hc.flush));
    tracep->fullBit(oldp+645,(vlSymsp->TOP__mips_core__DOT__e_hc.flush));
    tracep->fullBit(oldp+646,(vlSymsp->TOP__mips_core__DOT__m_hc.flush));
    tracep->fullBit(oldp+647,(vlSymsp->TOP__mips_core__DOT__branch_pred_hc.correct_pred));
    tracep->fullBit(oldp+648,(vlSymsp->TOP__mips_core__DOT__d_cache_input.tag));
}
