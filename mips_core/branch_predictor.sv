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
import mips_core_pkg::*;

module branch_controller (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	input req_valid,
	decoder_output_ifc.in decoder_output,
	rob_branch_commit_ifc.in rob_branch_commit,
	input branch_pred_storage branch_fb,

    output branch_pred_storage branch_pred_output
);

	// Change the following line to switch predictor
	branch_predictor_tournament PREDICTOR (
		.clk, .rst_n,

		.i_req_valid     (req_valid),
		.i_req_pc        (decoder_output.pc),
		.i_req_target    (decoder_output.branch_target),
		.o_req_prediction(branch_pred_output.prediction),
		.o_req_prediction_gshare(branch_pred_output.prediction_gshare),
		.o_req_prediction_2bit(branch_pred_output.prediction_2bit),
		.o_req_ghistory	 (branch_pred_output.ghistory),

		.i_fb_valid      (rob_branch_commit.valid_branch),
		
		.i_fb_pc         (branch_fb.pc),
		.i_fb_ghistory   (branch_fb.ghistory),
		.i_fb_prediction (branch_fb.prediction),
		.i_fb_prediction_gshare (branch_fb.prediction_gshare),
		.i_fb_prediction_2bit (branch_fb.prediction_2bit),
		.i_fb_outcome    (rob_branch_commit.branch_outcome)
	);

	always_comb
	begin
		branch_pred_output.recovery_target =
			(branch_pred_output.prediction == TAKEN)
			? decoder_output.pc + 8
			: decoder_output.branch_target;
        branch_pred_output.pc = decoder_output.pc;
	end

endmodule

module branch_predictor_tournament (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,
	output mips_core_pkg::BranchOutcome o_req_prediction_gshare,
	output mips_core_pkg::BranchOutcome o_req_prediction_2bit,
	output logic [G_HISTORY_BITS - 1 : 0]o_req_ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	localparam BHT_ENTRIES = 1 << G_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 2, ST = 3} TAKEN_COUNTER;
	enum logic [1:0] {SG = 0, WG = 1, W2 = 2, S2 = 3} GSHARE_VS_2BIT_COUNTER;
	logic [1:0] bht_chooser [BHT_ENTRIES - 1 : 0];
	logic [1:0] bht_gshare [BHT_ENTRIES - 1 : 0];
	logic [G_HISTORY_BITS - 1 : 0] ghistory;
	logic [G_HISTORY_BITS - 1 : 0] predict_index_gshare;
	logic [G_HISTORY_BITS - 1 : 0] predict_index_chooser;
	logic [G_HISTORY_BITS - 1 : 0] feedback_index_gshare;
	logic [G_HISTORY_BITS - 1 : 0] feedback_index_chooser;
	logic [1:0] counter;
	logic gshare_pred;
	logic two_bit_local_pred;
	logic chooser_pred;
	logic gshare_correct;
	logic ghistory_flush;
	mips_core_pkg::BranchOutcome cur_pred;
	
	initial begin
		counter = 2'b00;
		for (int i = 0; i < BHT_ENTRIES; i++) begin
			bht_gshare[i] = WN;
			bht_chooser[i] = WG;
		end
	end

	always_comb
	begin
		predict_index_gshare = i_req_pc[G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index_gshare = i_fb_pc[G_HISTORY_BITS - 1 : 0] ^ i_fb_ghistory;	
		gshare_correct = i_fb_outcome == i_fb_prediction_gshare;
		ghistory_flush = i_fb_valid & ~(i_fb_prediction == i_fb_outcome);

		case(bht_gshare[predict_index_gshare])
			SN, WN:
			begin
				gshare_pred = NOT_TAKEN;
			end
			
			WT, ST:
			begin
				gshare_pred = TAKEN;
			end
		endcase
		
		two_bit_local_pred = counter[1] ? TAKEN : NOT_TAKEN;
		
		predict_index_chooser = i_req_pc[G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index_chooser = i_fb_pc[G_HISTORY_BITS - 1 : 0] ^ i_fb_ghistory;	
		
		case(bht_chooser[predict_index_chooser])
			SG, WG:
			begin
				chooser_pred = gshare_pred;
			end
			
			W2, S2:
			begin
				chooser_pred = two_bit_local_pred;
			end
		endcase
	end
	
	always_comb begin
		o_req_prediction = chooser_pred;
		o_req_prediction_gshare = gshare_pred;
		o_req_prediction_2bit = two_bit_local_pred;
		o_req_ghistory = ghistory;
	end
	
	always_ff@(posedge clk)
	begin
		if(!rst_n) begin
			ghistory <= '0;
		end else  begin
			if(ghistory_flush) begin
				ghistory <= {i_fb_ghistory[G_HISTORY_BITS - 2 : 0], i_fb_outcome};
			end else if(i_req_valid) begin
				ghistory <= {ghistory[G_HISTORY_BITS - 2 : 0], chooser_pred};
			end else begin
				ghistory <= ghistory;
			end

			if(i_fb_valid) begin
				case(bht_gshare[feedback_index_gshare])
					SN:
					begin
						bht_gshare[feedback_index_gshare] <= (i_fb_outcome) ? WN : SN;
					end
			
					WN:
					begin
						bht_gshare[feedback_index_gshare] <= (i_fb_outcome) ? WT : SN;
					end
			
					WT:
					begin
						bht_gshare[feedback_index_gshare] <= (i_fb_outcome) ? ST :WN;
					end
			
					ST:
					begin
						bht_gshare[feedback_index_gshare] <= (i_fb_outcome) ? ST : WT;
					end
				endcase

				case (i_fb_outcome)
					NOT_TAKEN:
					begin
						if (counter != 2'b00)
							counter <= counter - 2'b01;
					end

					TAKEN:
					begin
						if (counter != 2'b11)
							counter <= counter + 2'b01;
					end
				endcase
			end
			
			if(i_fb_valid & (i_fb_prediction_gshare != i_fb_prediction_2bit)) begin
				case(bht_chooser[feedback_index_chooser])
					S2:
					begin
						bht_chooser[feedback_index_chooser] <= (gshare_correct) ? W2 : S2;
					end
			
					W2:
					begin
						bht_chooser[feedback_index_chooser] <= (gshare_correct) ? WG : S2;
					end
			
					WG:
					begin
						bht_chooser[feedback_index_chooser] <= (gshare_correct) ? SG :W2;
					end
			
					SG:
					begin
						bht_chooser[feedback_index_chooser] <= (gshare_correct) ? SG : WG;
					end
				endcase
			end
		end
	end

	
endmodule
