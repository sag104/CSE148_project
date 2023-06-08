// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmips_core.h"
#include "Vmips_core__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vmips_core::Vmips_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmips_core__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , done{vlSymsp->TOP.done}
    , AWREADY{vlSymsp->TOP.AWREADY}
    , AWVALID{vlSymsp->TOP.AWVALID}
    , AWID{vlSymsp->TOP.AWID}
    , AWLEN{vlSymsp->TOP.AWLEN}
    , WREADY{vlSymsp->TOP.WREADY}
    , WVALID{vlSymsp->TOP.WVALID}
    , WLAST{vlSymsp->TOP.WLAST}
    , WID{vlSymsp->TOP.WID}
    , BREADY{vlSymsp->TOP.BREADY}
    , BVALID{vlSymsp->TOP.BVALID}
    , BID{vlSymsp->TOP.BID}
    , ARREADY{vlSymsp->TOP.ARREADY}
    , ARVALID{vlSymsp->TOP.ARVALID}
    , ARID{vlSymsp->TOP.ARID}
    , ARLEN{vlSymsp->TOP.ARLEN}
    , RREADY{vlSymsp->TOP.RREADY}
    , RVALID{vlSymsp->TOP.RVALID}
    , RLAST{vlSymsp->TOP.RLAST}
    , RID{vlSymsp->TOP.RID}
    , AWADDR{vlSymsp->TOP.AWADDR}
    , WDATA{vlSymsp->TOP.WDATA}
    , ARADDR{vlSymsp->TOP.ARADDR}
    , RDATA{vlSymsp->TOP.RDATA}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__mips_core__DOT__i_hc{vlSymsp->TOP.__PVT__mips_core__DOT__i_hc}
    , __PVT__mips_core__DOT__d_hc{vlSymsp->TOP.__PVT__mips_core__DOT__d_hc}
    , __PVT__mips_core__DOT__rob_st_hc{vlSymsp->TOP.__PVT__mips_core__DOT__rob_st_hc}
    , __PVT__mips_core__DOT__e_hc{vlSymsp->TOP.__PVT__mips_core__DOT__e_hc}
    , __PVT__mips_core__DOT__m_hc{vlSymsp->TOP.__PVT__mips_core__DOT__m_hc}
    , __PVT__mips_core__DOT__branch_pred_hc{vlSymsp->TOP.__PVT__mips_core__DOT__branch_pred_hc}
    , __PVT__mips_core__DOT__i_load_pc{vlSymsp->TOP.__PVT__mips_core__DOT__i_load_pc}
    , __PVT__mips_core__DOT__pc_current{vlSymsp->TOP.__PVT__mips_core__DOT__pc_current}
    , __PVT__mips_core__DOT__pc_next{vlSymsp->TOP.__PVT__mips_core__DOT__pc_next}
    , __PVT__mips_core__DOT__inst_q_output{vlSymsp->TOP.__PVT__mips_core__DOT__inst_q_output}
    , __PVT__mips_core__DOT__decoder_output{vlSymsp->TOP.__PVT__mips_core__DOT__decoder_output}
    , __PVT__mips_core__DOT__rob_reg_wr{vlSymsp->TOP.__PVT__mips_core__DOT__rob_reg_wr}
    , __PVT__mips_core__DOT__rob_mem_wr{vlSymsp->TOP.__PVT__mips_core__DOT__rob_mem_wr}
    , __PVT__mips_core__DOT__rob_status{vlSymsp->TOP.__PVT__mips_core__DOT__rob_status}
    , __PVT__mips_core__DOT__rob_branch_commit{vlSymsp->TOP.__PVT__mips_core__DOT__rob_branch_commit}
    , __PVT__mips_core__DOT__rob_jump_reg_commit{vlSymsp->TOP.__PVT__mips_core__DOT__rob_jump_reg_commit}
    , __PVT__mips_core__DOT__phy_reg_output{vlSymsp->TOP.__PVT__mips_core__DOT__phy_reg_output}
    , __PVT__mips_core__DOT__reg_file_data{vlSymsp->TOP.__PVT__mips_core__DOT__reg_file_data}
    , __PVT__mips_core__DOT__alu_res_stat_output{vlSymsp->TOP.__PVT__mips_core__DOT__alu_res_stat_output}
    , __PVT__mips_core__DOT__alu_res_stat_status{vlSymsp->TOP.__PVT__mips_core__DOT__alu_res_stat_status}
    , __PVT__mips_core__DOT__alu_output{vlSymsp->TOP.__PVT__mips_core__DOT__alu_output}
    , __PVT__mips_core__DOT__st_data_output{vlSymsp->TOP.__PVT__mips_core__DOT__st_data_output}
    , __PVT__mips_core__DOT__mem_res_stat_status{vlSymsp->TOP.__PVT__mips_core__DOT__mem_res_stat_status}
    , __PVT__mips_core__DOT__d_cache_input{vlSymsp->TOP.__PVT__mips_core__DOT__d_cache_input}
    , __PVT__mips_core__DOT__d_cache_output{vlSymsp->TOP.__PVT__mips_core__DOT__d_cache_output}
    , __PVT__mips_core__DOT__cdb_output{vlSymsp->TOP.__PVT__mips_core__DOT__cdb_output}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmips_core::Vmips_core(const char* _vcname__)
    : Vmips_core(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmips_core::~Vmips_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmips_core___024root___eval_initial(Vmips_core___024root* vlSelf);
void Vmips_core___024root___eval_settle(Vmips_core___024root* vlSelf);
void Vmips_core___024root___eval(Vmips_core___024root* vlSelf);
QData Vmips_core___024root___change_request(Vmips_core___024root* vlSelf);
#ifdef VL_DEBUG
void Vmips_core___024root___eval_debug_assertions(Vmips_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vmips_core___024root___final(Vmips_core___024root* vlSelf);

static void _eval_initial_loop(Vmips_core__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmips_core___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmips_core___024root___eval_settle(&(vlSymsp->TOP));
        Vmips_core___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmips_core___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mips_core/mips_core.sv", 9, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmips_core___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmips_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmips_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmips_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmips_core___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmips_core___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mips_core/mips_core.sv", 9, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmips_core___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vmips_core::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmips_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmips_core::final() {
    Vmips_core___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vmips_core___024root__trace_init_top(Vmips_core___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmips_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmips_core___024root*>(voidSelf);
    Vmips_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmips_core___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmips_core___024root__trace_register(Vmips_core___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vmips_core::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmips_core___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
