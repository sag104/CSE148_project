module hazard_controller (
    input clk,
    input rst_n,

    i_cache_output_ifc.in i_cache_output,
    inst_q_output_ifc.in inst_q_output,
    decoder_output_ifc.in decoder_output,
    rob_status_ifc.in rob_status,
    alu_res_stat_status_ifc.in alu_res_stat_status,
    mem_res_stat_status_ifc.in mem_res_stat_status,
    d_cache_input_ifc.in d_cache_input,
    d_cache_output_ifc.in d_cache_output,
    rob_branch_commit_ifc.in rob_branch_commit,
    rob_jump_reg_commit_ifc.in rob_jump_reg_commit,
    
    hazard_control_ifc.in i_hc,
    hazard_control_ifc.in d_hc,
    hazard_control_ifc.in rob_st_hc,
    hazard_control_ifc.in e_hc,
    hazard_control_ifc.in m_hc,
    branch_pred_hc_ifc.in branch_pred_hc,
    load_pc_ifc.in i_load_pc
);

    enum logic {NO_JR = 0, WAIT_FOR_TARGET = 1} JR_STATE_LOGIC;

    branch_controller BRANCH_CONTROLLER (
		.clk, .rst_n,

        .req_valid(req_valid),
		.decoder_output(decoder_output),
        .rob_branch_commit(rob_branch_commit),
        .branch_fb(bp_buffer[bp_rd_ptr]),

        .branch_pred_output(branch_pred_output)
	);

    branch_pred_storage branch_pred_output;

    branch_pred_info bp_buffer [`ROB_DEPTH];
    logic [`ROB_DEPTH_BITS - 1 : 0] bp_wr_ptr, bp_rd_ptr;

    logic ic_miss;
	logic dec_overload;		// Branch predict taken or Jump
    logic jump_reg_target_overload;
	logic ex_overload;		// Branch prediction wrong
	logic dc_miss;			// D cache miss
    logic inst_q_full;
    logic rob_full;
    logic alu_res_full;
    logic mem_res_full;
    logic ld_ready_st_stall;

    logic jr_stall;
    logic jr_state;

    // Control signals
	logic if_stall, if_flush;
	logic dec_stall, dec_flush;
    logic mispredict_flush;
	logic ex_stall, ex_flush;
	logic mem_stall, mem_flush;

    // Determine if we have these hazards
	always_comb begin
		ic_miss = ~if_i_cache_output.valid;
		dec_overload = decoder_output.valid
			& ( (decoder_output.is_jump & !decoder_output.is_jump_reg)
				| (decoder_output.is_branch & branch_pred_output.prediction == TAKEN));
        jr_overload = rob_jump_reg_commit.valid_jump_reg;
        ex_overload = rob_branch_commit.valid_branch
            & (branch_pred_hist.prediction != rob_branch_commit.branch_outcome);
		branch_hit = rob_branch_commit.valid_branch
            & (branch_pred_hist.prediction == rob_branch_commit.branch_outcome);
		// lw_hazard is determined by forward unit.
		dc_miss = d_cache_input.valid & !d_cache_output.valid;

        i_hc.stall = ic_miss | inst_q_output.full;
        d_hc.stall = rob_status.full | alu_res_stat_status.full | mem_res_stat_status.full | jr_stall;
        d_hc.flush = dec_overload | jr_overload | ex_overload;
        branch_pred_hc.flush = ex_overload;
        rob_st_hc.stall = mem_res_stat_status.ld_ready;
        e_hc.stall = d_cache_input.valid & d_cache_output.valid & (d_cache_input.mem_action == READ);
        m_hc.stall = dc_miss;

        load_pc.we = dec_overload | ex_overload | jr_overload;
		if (dec_overload) begin 
			load_pc.new_pc = decoder_output.branch_target;
        end else if(ex_overload) begin
			load_pc.new_pc = branch_pred_hist.recovery_target;
        end else if(jr_overload) begin
            load_pc.new_pc = rob_jump_reg_commit.jump_target;
        end else begin
            load_pc.new_pc = 0;
        end
	end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            bp_buffer <= '{default:0};
            bp_wr_ptr <= 0;
            bp_rd_ptr <= 0;
        end else begin
            if(!d_hc.stall & decoder_output.is_branch) begin
                bp_wr_ptr <= bp_wr_ptr + 1;
                bp_buffer[bp_wr_ptr].pc <= decoder_output.pc;
                bp_buffer[bp_wr_ptr].ghistory <= branch_pred_output.ghistory;
                bp_buffer[bp_wr_ptr].prediction <= branch_pred_output.prediction;
                bp_buffer[bp_wr_ptr].prediction_gshare <= branch_pred_output.prediction_gshare;
                bp_buffer[bp_wr_ptr].prediction_2bit <= branch_pred_output.prediction_2bit;
            end

            if(rob_branch_commit.valid_branch) begin
                bp_rd_ptr <= bp_rd_ptr + 1;
            end
        end
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            jr_stall <= 0;
        end else begin
            case (jr_state)
                NO_JR: begin
                    if(decoder_output.is_jump_reg) begin
                        jr_stall <= decoder_output.is_jump_reg;
                        jr_state <= WAIT_FOR_TARGET;
                    end else begin
                        jr_stall <= jr_stall;
                        jr_state <= jr_state;
                    end
                end

                WAIT_FOR_TARGET: begin
                    if(rob_jump_reg_commit.valid_jump_reg) begin
                        jr_stall <= 0;
                        jr_state <= NO_JR;
                    end else begin
                        jr_stall <= jr_stall;
                        jr_state <= jr_state;
                    end
                end
            endcase
        end
    end

    /*
    `ifdef SIMULATION
        always_ff @(posedge clk)
        begin
            if (ic_miss) stats_event("ic_miss");
            if (ds_miss) stats_event("ds_miss");
            if (dec_overload) stats_event("dec_overload");
            if (ex_overload) stats_event("ex_overload");
            if (branch_hit) stats_event("branch_hit");
            if (lw_hazard) stats_event("lw_hazard");
            if (dc_miss) stats_event("dc_miss");
            if (if_stall) stats_event("if_stall");
            if (if_flush) stats_event("if_flush");
            if (dec_stall) stats_event("dec_stall");
            if (dec_flush) stats_event("dec_flush");
            if (ex_stall) stats_event("ex_stall");
            if (ex_flush) stats_event("ex_flush");
            if (mem_stall) stats_event("mem_stall");
            if (mem_flush) stats_event("mem_flush");
        end
    `endif*/

endmodule