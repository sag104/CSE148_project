# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmips_core.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmips_core \
	Vmips_core___024root__DepSet_h917a3913__0 \
	Vmips_core___024root__DepSet_hb58e9eb8__0 \
	Vmips_core___024unit__DepSet_hf44c8034__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmips_core__ConstPool_0 \
	Vmips_core___024root__Slow \
	Vmips_core___024root__DepSet_h917a3913__0__Slow \
	Vmips_core___024root__DepSet_hb58e9eb8__0__Slow \
	Vmips_core___024unit__Slow \
	Vmips_core___024unit__DepSet_h525c4795__0__Slow \
	Vmips_core_cache_output_ifc__Slow \
	Vmips_core_cache_output_ifc__DepSet_h476799f3__0__Slow \
	Vmips_core_alu_pass_through_ifc__Slow \
	Vmips_core_alu_pass_through_ifc__DepSet_h51e121e3__0__Slow \
	Vmips_core_d_cache_pass_through_ifc__Slow \
	Vmips_core_d_cache_pass_through_ifc__DepSet_hf998b9b3__0__Slow \
	Vmips_core_write_back_ifc__Slow \
	Vmips_core_write_back_ifc__DepSet_h89be1f14__0__Slow \
	Vmips_core_hazard_control_ifc__Slow \
	Vmips_core_hazard_control_ifc__DepSet_hd5e5b6ad__0__Slow \
	Vmips_core_alu_input_ifc__Slow \
	Vmips_core_alu_input_ifc__DepSet_h93817648__0__Slow \
	Vmips_core_alu_output_ifc__Slow \
	Vmips_core_alu_output_ifc__DepSet_hcc27327e__0__Slow \
	Vmips_core_d_cache_input_ifc__Slow \
	Vmips_core_d_cache_input_ifc__DepSet_hc0cb94c1__0__Slow \
	Vmips_core_decoder_output_ifc__Slow \
	Vmips_core_decoder_output_ifc__DepSet_h842f1388__0__Slow \
	Vmips_core_reg_file_output_ifc__Slow \
	Vmips_core_reg_file_output_ifc__DepSet_h2f6d4764__0__Slow \
	Vmips_core_pc_ifc__Slow \
	Vmips_core_pc_ifc__DepSet_h70e07b49__0__Slow \
	Vmips_core_branch_decoded_ifc__Slow \
	Vmips_core_branch_decoded_ifc__DepSet_hf31889ee__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vmips_core__Dpi \
	Vmips_core__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmips_core__Syms \
	Vmips_core__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
