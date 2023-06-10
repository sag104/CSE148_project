`include "mips_core.svh"

module fetch_unit (
	input clk,
	input rst_n,

    hazard_control_ifc.in i_hc,

    load_pc_ifc.in i_load_pc,
    pc_ifc.out o_pc_current,
    pc_ifc.out o_pc_next
);

	always_comb begin

		if(i_load_pc.we) begin
			o_pc_next.pc = i_load_pc.new_pc;
		end else begin
			o_pc_next.pc = (i_hc.stall) ? o_pc_current.pc : o_pc_current.pc + 4;
		end

        /*if(i_hc.stall) begin
            o_pc_next.pc = o_pc_current.pc;
        end else begin
            o_pc_next.pc = i_load_pc.we
				? i_load_pc.new_pc
				: o_pc_current.pc + 4;
        end*/
    end

	always_ff @(posedge clk) begin
		if(~rst_n)
			o_pc_current.pc <= '0;	// Start point of programs are always 0x0
		else
		begin
			o_pc_current.pc <= o_pc_next.pc;
		end
	end

endmodule
