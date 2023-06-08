// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMIPS_CORE_H_
#define VERILATED_VMIPS_CORE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vmips_core__Syms;
class Vmips_core___024root;
class VerilatedFstC;
class Vmips_core___024unit;
class Vmips_core_hazard_control_ifc;
class Vmips_core_branch_pred_hc_ifc;
class Vmips_core_load_pc_ifc;
class Vmips_core_pc_ifc;
class Vmips_core_inst_q_output_ifc;
class Vmips_core_decoder_output_ifc;
class Vmips_core_rob_reg_wr_ifc;
class Vmips_core_rob_mem_wr_ifc;
class Vmips_core_rob_status_ifc;
class Vmips_core_rob_branch_commit_ifc;
class Vmips_core_rob_jump_reg_commit_ifc;
class Vmips_core_register_rename_ifc;
class Vmips_core_reg_file_output_ifc;
class Vmips_core_alu_res_stat_output_ifc;
class Vmips_core_alu_res_stat_status_ifc;
class Vmips_core_alu_output_ifc;
class Vmips_core_mem_addr_unit_st_output_ifc;
class Vmips_core_mem_res_stat_status_ifc;
class Vmips_core_d_cache_input_ifc;
class Vmips_core_d_cache_output_ifc;
class Vmips_core_common_data_bus_ifc;


// This class is the main interface to the Verilated model
class Vmips_core VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmips_core__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_OUT8(&done,0,0);
    VL_IN8(&AWREADY,0,0);
    VL_OUT8(&AWVALID,0,0);
    VL_OUT8(&AWID,3,0);
    VL_OUT8(&AWLEN,3,0);
    VL_IN8(&WREADY,0,0);
    VL_OUT8(&WVALID,0,0);
    VL_OUT8(&WLAST,0,0);
    VL_OUT8(&WID,3,0);
    VL_OUT8(&BREADY,0,0);
    VL_IN8(&BVALID,0,0);
    VL_IN8(&BID,3,0);
    VL_IN8(&ARREADY,0,0);
    VL_OUT8(&ARVALID,0,0);
    VL_OUT8(&ARID,3,0);
    VL_OUT8(&ARLEN,3,0);
    VL_OUT8(&RREADY,0,0);
    VL_IN8(&RVALID,0,0);
    VL_IN8(&RLAST,0,0);
    VL_IN8(&RID,3,0);
    VL_OUT(&AWADDR,25,0);
    VL_OUT(&WDATA,31,0);
    VL_OUT(&ARADDR,25,0);
    VL_IN(&RDATA,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vmips_core___024unit* const __PVT____024unit;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__i_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__d_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__rob_st_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__e_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__m_hc;
    Vmips_core_branch_pred_hc_ifc* const __PVT__mips_core__DOT__branch_pred_hc;
    Vmips_core_load_pc_ifc* const __PVT__mips_core__DOT__i_load_pc;
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__pc_current;
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__pc_next;
    Vmips_core_inst_q_output_ifc* const __PVT__mips_core__DOT__inst_q_output;
    Vmips_core_decoder_output_ifc* const __PVT__mips_core__DOT__decoder_output;
    Vmips_core_rob_reg_wr_ifc* const __PVT__mips_core__DOT__rob_reg_wr;
    Vmips_core_rob_mem_wr_ifc* const __PVT__mips_core__DOT__rob_mem_wr;
    Vmips_core_rob_status_ifc* const __PVT__mips_core__DOT__rob_status;
    Vmips_core_rob_branch_commit_ifc* const __PVT__mips_core__DOT__rob_branch_commit;
    Vmips_core_rob_jump_reg_commit_ifc* const __PVT__mips_core__DOT__rob_jump_reg_commit;
    Vmips_core_register_rename_ifc* const __PVT__mips_core__DOT__phy_reg_output;
    Vmips_core_reg_file_output_ifc* const __PVT__mips_core__DOT__reg_file_data;
    Vmips_core_alu_res_stat_output_ifc* const __PVT__mips_core__DOT__alu_res_stat_output;
    Vmips_core_alu_res_stat_status_ifc* const __PVT__mips_core__DOT__alu_res_stat_status;
    Vmips_core_alu_output_ifc* const __PVT__mips_core__DOT__alu_output;
    Vmips_core_mem_addr_unit_st_output_ifc* const __PVT__mips_core__DOT__st_data_output;
    Vmips_core_mem_res_stat_status_ifc* const __PVT__mips_core__DOT__mem_res_stat_status;
    Vmips_core_d_cache_input_ifc* const __PVT__mips_core__DOT__d_cache_input;
    Vmips_core_d_cache_output_ifc* const __PVT__mips_core__DOT__d_cache_output;
    Vmips_core_common_data_bus_ifc* const __PVT__mips_core__DOT__cdb_output;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmips_core___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmips_core(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmips_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmips_core();
  private:
    VL_UNCOPYABLE(Vmips_core);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
