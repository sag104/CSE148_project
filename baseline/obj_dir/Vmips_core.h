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
class Vmips_core_pc_ifc;
class Vmips_core_cache_output_ifc;
class Vmips_core_decoder_output_ifc;
class Vmips_core_reg_file_output_ifc;
class Vmips_core_branch_decoded_ifc;
class Vmips_core_alu_input_ifc;
class Vmips_core_alu_pass_through_ifc;
class Vmips_core_alu_output_ifc;
class Vmips_core_d_cache_input_ifc;
class Vmips_core_d_cache_pass_through_ifc;
class Vmips_core_write_back_ifc;
class Vmips_core_hazard_control_ifc;


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
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__if_pc_current;
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__if_pc_next;
    Vmips_core_cache_output_ifc* const __PVT__mips_core__DOT__if_i_cache_output;
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__i2d_pc;
    Vmips_core_cache_output_ifc* const __PVT__mips_core__DOT__i2d_inst;
    Vmips_core_decoder_output_ifc* const __PVT__mips_core__DOT__dec_decoder_output;
    Vmips_core_reg_file_output_ifc* const __PVT__mips_core__DOT__dec_reg_file_output;
    Vmips_core_reg_file_output_ifc* const __PVT__mips_core__DOT__dec_forward_unit_output;
    Vmips_core_branch_decoded_ifc* const __PVT__mips_core__DOT__dec_branch_decoded;
    Vmips_core_alu_input_ifc* const __PVT__mips_core__DOT__dec_alu_input;
    Vmips_core_alu_pass_through_ifc* const __PVT__mips_core__DOT__dec_alu_pass_through;
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__d2e_pc;
    Vmips_core_alu_input_ifc* const __PVT__mips_core__DOT__d2e_alu_input;
    Vmips_core_alu_pass_through_ifc* const __PVT__mips_core__DOT__d2e_alu_pass_through;
    Vmips_core_alu_output_ifc* const __PVT__mips_core__DOT__ex_alu_output;
    Vmips_core_d_cache_input_ifc* const __PVT__mips_core__DOT__ex_d_cache_input;
    Vmips_core_d_cache_pass_through_ifc* const __PVT__mips_core__DOT__ex_d_cache_pass_through;
    Vmips_core_pc_ifc* const __PVT__mips_core__DOT__e2m_pc;
    Vmips_core_d_cache_input_ifc* const __PVT__mips_core__DOT__e2m_d_cache_input;
    Vmips_core_d_cache_pass_through_ifc* const __PVT__mips_core__DOT__e2m_d_cache_pass_through;
    Vmips_core_cache_output_ifc* const __PVT__mips_core__DOT__mem_d_cache_output;
    Vmips_core_write_back_ifc* const __PVT__mips_core__DOT__mem_write_back;
    Vmips_core_write_back_ifc* const __PVT__mips_core__DOT__m2w_write_back;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__i2i_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__i2d_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__d2e_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__e2m_hc;
    Vmips_core_hazard_control_ifc* const __PVT__mips_core__DOT__m2w_hc;

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
