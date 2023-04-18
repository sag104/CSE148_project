/*
 * branch_controller.sv
 * Author: Zinsser Zhang
 * Last Revision: 04/08/2018
 *
 * branch_controller is a bridge between branch predictor to hazard controller.
 * Two simple predictors are also provided as examples.
 *
 * See wiki page "Branch and Jump" for details.
 */
`include "mips_core.svh"

module branch_controller (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request
	pc_ifc.in dec_pc,
	branch_decoded_ifc.hazard dec_branch_decoded,

	// Feedback
	pc_ifc.in ex_pc,
	branch_result_ifc.in ex_branch_result
);
	logic request_prediction;

	// Change the following line to switch predictor
	branch_predictor_always_not_taken PREDICTOR (
		.clk, .rst_n,

		.i_req_valid     (request_prediction),
		.i_req_pc        (dec_pc.pc),
		.i_req_target    (dec_branch_decoded.target),
		.o_req_prediction(dec_branch_decoded.prediction),

		.i_fb_valid      (ex_branch_result.valid),
		.i_fb_pc         (ex_pc.pc),
		.i_fb_prediction (ex_branch_result.prediction),
		.i_fb_outcome    (ex_branch_result.outcome)
	);

	always_comb
	begin
		request_prediction = dec_branch_decoded.valid & ~dec_branch_decoded.is_jump;
		dec_branch_decoded.recovery_target =
			(dec_branch_decoded.prediction == TAKEN)
			? dec_pc.pc + `ADDR_WIDTH'd8
			: dec_branch_decoded.target;
	end

endmodule
/*
module branch_predictor_tournament (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	localparam G_HISTORY_BITS = 12;
	localparam G_BHT_ENTRIES = 1 << G_HISTORY_BITS;
	localparam L_HISTORY_BITS = 10;
	localparam L_BHT_ENTRIES = 1 << L_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 2, ST = 3} predictin;

	logic [G_BHT_ENTRIES - 1 : 0] bht_gshare [1:0];
	logic [G_HISTORY_BITS - 1 : 0] ghistory, g_predict_index, g_feedback_index;
	
	logic [L_BHT_ENTRIES - 1 : 0] bht_local [1:0];
	logic [L_BHT_ENTRIES - 1 : 0] lht [L_HISTORY_BITS - 1 : 0];
	logic [L_HISTORY_BITS - 1 : 0] l_predict_index, l_feedback_index;
	
	logic feedback_taken;

	logic mips_core_pkg::BranchOutcome g_prediction, 

	always_comb
	begin
		predict_index = lht[i_req_pc[L_HISTORY_BITS - 1: 0]];
		feedback_index = lht[i_fb_pc[L_HISTORY_BITS - 1: 0]];
		feedback_taken = (i_fb_outcome == TAKEN) ? 1 : 0;
		
		case(bht_local[predict_index])
			SN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WT:
			begin
				o_req_prediction = TAKEN;
			end
			
			ST:
			begin
				o_req_prediction = TAKEN;
			end
		endcase
	end

	);
endmodule

module branch_predictor_chooser (
	input clk,
	input rst_n,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome 

);

	localparam G_HISTORY_BITS = 10;
	localparam BHT_ENTRIES = 1 << G_HISTORY_BITS;
	
	enum logic [1:0] {SN = 0, WN = 1, WT = 1, ST = 1} prediction;

	logic [BHT_ENTRIES - 1 : 0] bht_chooser [1:0];
	logic [LOCAL_HISTORY_BITS - 1 : 0] predict_index, feedback_index;

	always_comb
	begin
		case(bht_chooser[ghistory])
		begin
			state SN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			state WN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			state WT:
			begin
				o_req_prediction = TAKEN;
			end
			
			state ST:
			begin
				o_req_prediction = TAKEN;
			end
		end
	end

	always_ff @(posedge clk)
	begin
		if(!rst_n)
		begin
			bht_local <= WN;
			lht <= 0;
		end
		else
		begin
			if(i_fb_valid)
				ghistory <= {ghistory[G_HISTORY_BITS - 2 : 0], i_fb_outcome};
				case(bht_local[feedback_index])
				begin
					state SN:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? WN : SN;
					end
			
					state WN:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? WT : SN;
					end
			
					state WT:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? ST :WN;
					end
			
					state ST:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? ST : WT;
					end
				end
			end
		end
	end


endmodule

*/	

module branch_predictor_local (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	localparam LOCAL_HISTORY_BITS = 10;
	localparam BHT_ENTRIES = 1 << LOCAL_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 1, ST = 1} prediction;

	logic [BHT_ENTRIES - 1 : 0] bht_local [1:0];
	logic [BHT_ENTRIES - 1 : 0] lht [LOCAL_HISTORY_BITS - 1 : 0];
	logic [LOCAL_HISTORY_BITS - 1 : 0] predict_index, feedback_index;
	logic feedback_taken;
	
	always_comb
	begin
		predict_index = lht[i_req_pc[LOCAL_HISTORY_BITS - 1: 0]];
		feedback_index = lht[i_fb_pc[LOCAL_HISTORY_BITS - 1: 0]];
		feedback_taken = (i_fb_outcome == TAKEN) ? 1 : 0;
		
		case(bht_local[predict_index])
			SN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WT:
			begin
				o_req_prediction = TAKEN;
			end
			
			ST:
			begin
				o_req_prediction = TAKEN;
			end
		endcase
	end

	always_ff @(posedge clk)
	begin
		if(!rst_n)
		begin
			bht_local <= WN;
			lht <= 0;
		end
		else 
		begin
			if (i_fb_valid)
			begin
				lht[i_fb_pc[LOCAL_HISTORY_BITS - 1: 0]] <= {lht[i_fb_pc[LOCAL_HISTORY_BITS - 1 : 0]][LOCAL_HISTORY_BITS - 2 : 0], i_fb_outcome};
				case(bht_local[feedback_index])
					SN:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? WN : SN;
					end
			
					WN:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? WT : SN;
					end
			
					WT:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? ST :WN;
					end
			
					ST:
					begin
						bht_local[feedback_index] <= (feedback_taken) ? ST : WT;
					end
				endcase
			end
		end
	end

endmodule

module branch_predictor_gshare (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	localparam G_HISTORY_BITS = 12;
	localparam BHT_ENTRIES = 1 << G_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 1, ST = 1} prediction;

	logic [BHT_ENTRIES - 1 : 0] bht_gshare [1:0];
	logic [G_HISTORY_BITS - 1 : 0] ghistory, predict_index, feedback_index;
	logic feedback_taken;
	

	always_comb
	begin
		predict_index = i_req_pc[G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index = i_fb_pc[G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_taken = (i_fb_outcome == TAKEN) ? 1 : 0;
		
		case(bht_gshare[predict_index])
			SN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WT:
			begin
				o_req_prediction = TAKEN;
			end
			
			ST:
			begin
				o_req_prediction = TAKEN;
			end
		endcase
	end

	always_ff @(posedge clk)
	begin
		if(!rst_n)
		begin
			bht_gshare <= WN;
			ghistory <= 0;
		end
		else 
		begin
			if (i_fb_valid)
			begin
				ghistory <= {ghistory[G_HISTORY_BITS - 2 : 0], i_fb_outcome};
				case(bht_gshare[predict_index])
					SN:
					begin
						bht_gshare[predict_index] <= (feedback_taken) ? WN : SN;
					end
			
					WN:
					begin
						bht_gshare[predict_index] <= (feedback_taken) ? WT : SN;
					end
			
					WT:
					begin
						bht_gshare[predict_index] <= (feedback_taken) ? ST :WN;
					end
			
					ST:
					begin
						bht_gshare[predict_index] <= (feedback_taken) ? ST : WT;
					end
				endcase
			end
		end
	end

endmodule

module branch_predictor_global (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	localparam G_HISTORY_BITS = 12;
	localparam BHT_ENTRIES = 1 << G_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 1, ST = 1} prediction;

	logic [BHT_ENTRIES - 1 : 0] bht_gshare [1:0];
	logic [G_HISTORY_BITS - 1 : 0] ghistory;
	logic feedback_taken;
	

	always_comb
	begin
		feedback_taken = (i_fb_outcome == TAKEN) ? 1 : 0;
		
		case(bht_gshare[ghistory])
			SN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WN:
			begin
				o_req_prediction = NOT_TAKEN;
			end
			
			WT:
			begin
				o_req_prediction = TAKEN;
			end
			
			ST:
			begin
				o_req_prediction = TAKEN;
			end
		endcase
	end

	always_ff @(posedge clk)
	begin
		if(!rst_n)
		begin
			bht_gshare <= WN;
			ghistory <= 0;
		end
		else 
		begin
			if (i_fb_valid)
			begin
				ghistory <= {ghistory[G_HISTORY_BITS - 2 : 0], i_fb_outcome};
				case(bht_gshare[ghistory])
					SN:
					begin
						bht_gshare[ghistory] <= (feedback_taken) ? WN : SN;
					end
			
					WN:
					begin
						bht_gshare[ghistory] <= (feedback_taken) ? WT : SN;
					end
			
					WT:
					begin
						bht_gshare[ghistory] <= (feedback_taken) ? ST :WN;
					end
			
					ST:
					begin
						bht_gshare[ghistory] <= (feedback_taken) ? ST : WT;
					end
				endcase
			end
		end
	end

endmodule

module branch_predictor_always_taken (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	always_comb
	begin
		o_req_prediction = TAKEN;
	end

endmodule

module branch_predictor_always_not_taken (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	always_comb
	begin
		o_req_prediction = NOT_TAKEN;
	end

endmodule

module branch_predictor_2bit (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	logic [1:0] counter;

	task incr;
		begin
			if (counter != 2'b11)
				counter <= counter + 2'b01;
		end
	endtask

	task decr;
		begin
			if (counter != 2'b00)
				counter <= counter - 2'b01;
		end
	endtask

	always_ff @(posedge clk)
	begin
		if(~rst_n)
		begin
			counter <= 2'b01;	// Weakly not taken
		end
		else
		begin
			if (i_fb_valid)
			begin
				case (i_fb_outcome)
					NOT_TAKEN: decr();
					TAKEN:     incr();
				endcase
			end
		end
	end

	always_comb
	begin
		o_req_prediction = counter[1] ? TAKEN : NOT_TAKEN;
	end

endmodule
