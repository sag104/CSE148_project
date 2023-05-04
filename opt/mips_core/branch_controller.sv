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
	branch_predictor_tournament PREDICTOR (
		.clk, .rst_n,

		.i_req_valid     (request_prediction),
		.i_req_pc        (dec_pc.pc),
		.i_req_target    (dec_branch_decoded.target),
		.o_req_prediction(dec_branch_decoded.prediction),
		.o_req_prediction_gshare(dec_branch_decoded.prediction_gshare),
		.o_req_prediction_2bit(dec_branch_decoded.prediction_2bit),
		.o_req_ghistory	 (dec_branch_decoded.ghistory),

		.i_fb_valid      (ex_branch_result.valid),
		.i_fb_pc         (ex_pc.pc),

		.i_fb_ghistory   (ex_branch_result.ghistory),
		.i_fb_prediction (ex_branch_result.prediction),
		.i_fb_prediction_gshare (ex_branch_result.prediction_gshare),
		.i_fb_prediction_2bit (ex_branch_result.prediction_2bit),
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

module branch_predictor_tournament (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,
	output mips_core_pkg::BranchOutcome o_req_prediction_gshare,
	output mips_core_pkg::BranchOutcome o_req_prediction_2bit,
	output logic [`G_HISTORY_BITS - 1 : 0]o_req_ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [`G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	localparam BHT_ENTRIES = 1 << `G_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 2, ST = 3} TAKEN_COUNTER;
	enum logic [1:0] {SG = 0, WG = 1, W2 = 2, S2 = 3} GSHARE_VS_2BIT_COUNTER;
	logic [1:0] bht_chooser [BHT_ENTRIES - 1 : 0];
	logic [1:0] bht_gshare [BHT_ENTRIES - 1 : 0];
	logic [`G_HISTORY_BITS - 1 : 0] ghistory;
	logic [`G_HISTORY_BITS - 1 : 0] predict_index_gshare;
	logic [`G_HISTORY_BITS - 1 : 0] predict_index_chooser;
	logic [`G_HISTORY_BITS - 1 : 0] feedback_index_gshare;
	logic [`G_HISTORY_BITS - 1 : 0] feedback_index_chooser;
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
		predict_index_gshare = i_req_pc[`G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index_gshare = i_fb_pc[`G_HISTORY_BITS - 1 : 0] ^ i_fb_ghistory;	
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
		
		predict_index_chooser = i_req_pc[`G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index_chooser = i_fb_pc[`G_HISTORY_BITS - 1 : 0] ^ i_fb_ghistory;	
		
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
				ghistory <= {i_fb_ghistory[`G_HISTORY_BITS - 2 : 0], i_fb_outcome};
			end else if(i_req_valid) begin
				ghistory <= {ghistory[`G_HISTORY_BITS - 2 : 0], chooser_pred};
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

module branch_predictor_chooser (
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request	
	input logic i_req_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_pc,
	input logic [`ADDR_WIDTH - 1 : 0] i_req_target,
	output mips_core_pkg::BranchOutcome o_req_prediction,
	
	input logic [`G_HISTORY_BITS - 1 : 0] ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [`G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	//localparam G_HISTORY_BITS = 12;
	localparam BHT_ENTRIES = 1 << `G_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 2, ST = 3} prediction;
	logic [1:0] bht_chooser [BHT_ENTRIES - 1 : 0];
	logic [`G_HISTORY_BITS - 1 : 0] predict_index, feedback_index;
	logic gshare_correct;
	mips_core_pkg::BranchOutcome cur_pred;

	always_comb
	begin
		predict_index = i_req_pc[`G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index = i_fb_pc[`G_HISTORY_BITS - 1 : 0] ^ i_fb_ghistory;
		gshare_correct = (i_fb_outcome == i_fb_prediction_gshare);
	end

	initial begin
		for (int i = 0; i < BHT_ENTRIES; i++) begin
			bht_chooser[i] = WN;
		end
	end

	always_ff@(posedge clk) begin
		if (!rst_n) begin
		end else begin
			if(i_fb_valid & (i_fb_prediction_gshare != i_fb_prediction_2bit)) begin
				case(bht_chooser[feedback_index])
					SN:
					begin
						bht_chooser[feedback_index] <= (gshare_correct) ? WN : SN;
					end
			
					WN:
					begin
						bht_chooser[feedback_index] <= (gshare_correct) ? WT : SN;
					end
			
					WT:
					begin
						bht_chooser[feedback_index] <= (gshare_correct) ? ST :WN;
					end
			
					ST:
					begin
						bht_chooser[feedback_index] <= (gshare_correct) ? ST : WT;
					end
				endcase
			end
		end
	end

	always_comb
	begin
		o_req_prediction = cur_pred;
		case(bht_chooser[predict_index])
			SN, WN:
			begin
				cur_pred = NOT_TAKEN;
			end
			
			WT, ST:
			begin
				cur_pred = TAKEN;
			end
		endcase
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
	output mips_core_pkg::BranchOutcome o_req_prediction_gshare,
	output mips_core_pkg::BranchOutcome o_req_prediction_2bit,
	output logic [`G_HISTORY_BITS - 1 : 0]o_req_ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [`G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
	input mips_core_pkg::BranchOutcome i_fb_outcome
);

	//localparam G_HISTORY_BITS = 12;
	localparam BHT_ENTRIES = 1 << `G_HISTORY_BITS;

	enum logic [1:0] {SN = 0, WN = 1, WT = 2, ST = 3} prediction;
	logic [1:0] bht_gshare [BHT_ENTRIES - 1 : 0];
	logic [`G_HISTORY_BITS - 1 : 0] ghistory, predict_index, feedback_index;
	logic ghistory_flush;
	mips_core_pkg::BranchOutcome cur_pred;

	always_comb
	begin
		predict_index = i_req_pc[`G_HISTORY_BITS - 1 : 0] ^ ghistory;
		feedback_index = i_fb_pc[`G_HISTORY_BITS - 1 : 0] ^ i_fb_ghistory;
		ghistory_flush = i_fb_valid & ~(i_fb_prediction == i_fb_outcome);
	end

	always_ff@(posedge clk)
	begin
		if(!rst_n) begin
			ghistory <= '0;
		end else  begin
			if(ghistory_flush) begin
				ghistory <= {i_fb_ghistory[`G_HISTORY_BITS - 2 : 0], i_fb_outcome};
			end else if(i_req_valid) begin
				ghistory <= {ghistory[`G_HISTORY_BITS - 2 : 0], cur_pred};
			end else begin
				ghistory <= ghistory;
			end
		end
	end

	initial begin
		for (int i = 0; i < BHT_ENTRIES; i++) begin
			bht_gshare[i] = WN;
		end
	end

	always_ff@(posedge clk) begin
		if (!rst_n) begin
			//foreach(bht_gshare[index]) begin
			//	bht_gshare[index] <= WN;
			//end
			//for (int i = 0; i < (1 << 6); i++) begin
			//	bht_gshare[i] <= WN;
			//end
			//bht_gshare <= '0;
		end else begin
			if(i_fb_valid) begin
				case(bht_gshare[feedback_index])
					SN:
					begin
						bht_gshare[feedback_index] <= (i_fb_outcome) ? WN : SN;
					end
			
					WN:
					begin
						bht_gshare[feedback_index] <= (i_fb_outcome) ? WT : SN;
					end
			
					WT:
					begin
						bht_gshare[feedback_index] <= (i_fb_outcome) ? ST :WN;
					end
			
					ST:
					begin
						bht_gshare[feedback_index] <= (i_fb_outcome) ? ST : WT;
					end
				endcase
			end
		end
	end

	always_comb
	begin
		o_req_prediction = cur_pred;
		o_req_ghistory = ghistory;
		case(bht_gshare[predict_index])
			SN, WN:
			begin
				cur_pred = NOT_TAKEN;
			end
			
			WT, ST:
			begin
				cur_pred = TAKEN;
			end
		endcase
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
	output mips_core_pkg::BranchOutcome o_req_prediction_gshare,
	output mips_core_pkg::BranchOutcome o_req_prediction_2bit,
	output logic [`G_HISTORY_BITS - 1 : 0]o_req_ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [`G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
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
	output mips_core_pkg::BranchOutcome o_req_prediction_gshare,
	output mips_core_pkg::BranchOutcome o_req_prediction_2bit,
	output logic [`G_HISTORY_BITS - 1 : 0]o_req_ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [`G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
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
	output mips_core_pkg::BranchOutcome o_req_prediction_gshare,
	output mips_core_pkg::BranchOutcome o_req_prediction_2bit,
	output logic [`G_HISTORY_BITS - 1 : 0]o_req_ghistory,

	// Feedback
	input logic i_fb_valid,
	input logic [`ADDR_WIDTH - 1 : 0] i_fb_pc,
	input logic [`G_HISTORY_BITS - 1 : 0]i_fb_ghistory,
	input mips_core_pkg::BranchOutcome i_fb_prediction,
	input mips_core_pkg::BranchOutcome i_fb_prediction_gshare,
	input mips_core_pkg::BranchOutcome i_fb_prediction_2bit,
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
