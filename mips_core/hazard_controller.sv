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
    
    hazard_control_ifc.out i_hc,
    hazard_control_ifc.out d_hc,
    checkpoint_hc_ifc.out ch_hc,
    hazard_control_ifc.out rob_st_hc,
    hazard_control_ifc.out e_hc,
    hazard_control_ifc.out m_hc,
    branch_pred_hc_ifc.out branch_pred_hc,
    load_pc_ifc.out i_load_pc

);

    enum logic [1:0] {WAIT_B_J = 0, WAIT_FOR_NEXT_INSTRUCTION = 1, WAIT_FOR_NEXT_INSTRUCTION_JR = 2, WAIT_FOR_TARGET = 3} B_J_STATE_LOGIC;
    enum logic {NO_BR_COMMIT = 0, WAT_FOR_NEXT_COMMIT = 1} BR_COMMIT_LOGIC;
    enum logic {WAIT_FOR_BRANCH = 0, WAIT_FOR_INPUT_INSTRUCTION = 1} CHECKPOINT_STATE_LOGIC;

    branch_controller BRANCH_CONTROLLER (
		.clk, .rst_n,

        .req_valid(req_valid),
		.decoder_output(decoder_output),
        .rob_branch_commit(rob_branch_commit),
        .branch_fb(bp_buffer[bp_rd_ptr]),

        .branch_pred_output(branch_pred_output)
	);

    branch_pred_storage branch_pred_output;

    branch_pred_storage bp_buffer [ROB_DEPTH];
    logic [ROB_DEPTH_BITS - 1 : 0] bp_wr_ptr, bp_rd_ptr;

    logic ic_miss;
	logic dec_overload_jump, dec_overload_branch, dec_overload;		// Branch predict taken or Jump
    logic jr_overload;
	logic ex_overload;		// Branch prediction wrong
	logic dc_miss;			// D cache miss
    logic inst_q_full;
    logic rob_full;
    logic alu_res_full;
    logic mem_res_full;
    logic ld_ready_st_stall;

    logic req_valid;

    logic [1:0] b_j_state;
    logic b_j_load_pc;

    logic jr_stall;
    logic jr_state, br_wait_flush_state, checkpoint_state;

    // Control signals
	logic if_stall, if_flush;
	logic dec_stall, dec_flush;
	logic ex_stall, ex_flush;
	logic mem_stall, mem_flush;
    logic branch_hit;
    logic dec_jump_reg, dec_branch_reg;
    logic [ADDR_WIDTH - 1 : 0] dec_jump_reg_target, dec_branch_reg_target, b_j_branch_target;

  /*  always_comb begin
        case(checkpoint_state)

            WAIT_FOR_BRANCH: begin
                ch_hc.capture = 0;
            end

            WAIT_FOR_INPUT_INSTRUCTION: begin
                ch_hc.capture = (!d_hc.stall & decoder_output.valid);
            end

        endcase
    end 
*/
    always_ff @(posedge clk) begin
        case(checkpoint_state)
            WAIT_FOR_BRANCH: begin
                ch_hc.capture <= 0;
                if(!d_hc.stall & decoder_output.is_branch_jump & !decoder_output.is_jump) begin
                    checkpoint_state <= WAIT_FOR_INPUT_INSTRUCTION;
                end else begin
                    checkpoint_state <= checkpoint_state;
                end
            end

            WAIT_FOR_INPUT_INSTRUCTION: begin
                if(!d_hc.stall & decoder_output.valid) begin
                    ch_hc.capture <= 1;
                    checkpoint_state <= WAIT_FOR_BRANCH;
                end else begin
                    ch_hc.capture <= 0;
                    checkpoint_state <= checkpoint_state;
                end
            end
        endcase
    end



    /*always_ff @(posedge clk) begin
        case(checkpoint_state)
            WAIT_FOR_BRANCH: begin
                ch_hc.capture <= 0;
                if(decoder_output.is_branch_jump & !decoder_output.is_jump) begin
                    checkpoint_state <= WAIT_FOR_INPUT_INSTRUCTION;
                end else begin
                    checkpoint_state <= checkpoint_state;
                end
            end

            WAIT_FOR_INPUT_INSTRUCTION: begin
                if(!d_hc.stall & decoder_output.valid) begin
                    ch_hc.capture <= 1;
                    checkpoint_state <= WAIT_FOR_BRANCH;
                end else begin
                    ch_hc.capture <= 0;
                    checkpoint_state <= checkpoint_state;
                end
            end
        endcase
    end*/

    always_comb begin
        case (b_j_state)

            WAIT_B_J: begin
                b_j_load_pc = 0;
            end

            WAIT_FOR_NEXT_INSTRUCTION: begin
                b_j_load_pc = (!d_hc.stall & decoder_output.valid);
            end


        endcase
    end 

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            b_j_state <= WAIT_B_J;
        end else begin
            case (b_j_state)

                WAIT_B_J: begin
                    //b_j_load_pc <= 0;
                    if(d_hc.stall) begin
                        b_j_state <= WAIT_B_J;
                    end else begin
                        if(decoder_output.valid) begin
                            if (dec_overload_branch | dec_overload_jump) begin
                                b_j_state <= WAIT_FOR_NEXT_INSTRUCTION;
                                b_j_branch_target <= decoder_output.branch_target;
                            end else if (decoder_output.is_jump_reg) begin
                                b_j_state <= WAIT_FOR_NEXT_INSTRUCTION_JR;
                            end
                        end else begin
                            b_j_state <= WAIT_B_J;
                        end
                    end
                end

                WAIT_FOR_NEXT_INSTRUCTION: begin
                    if(d_hc.stall) begin
                        b_j_state <= WAIT_FOR_NEXT_INSTRUCTION;
                    end else begin
                        if(decoder_output.valid) begin
                            //b_j_load_pc <= 1;
                            b_j_state <= WAIT_B_J;
                        end else begin
                            b_j_state <= WAIT_FOR_NEXT_INSTRUCTION;
                        end
                    end
                end

                WAIT_FOR_NEXT_INSTRUCTION_JR: begin
                    //b_j_load_pc <= 0;
                    if(d_hc.stall) begin
                        b_j_state <= WAIT_FOR_NEXT_INSTRUCTION_JR;
                    end else begin
                        if(decoder_output.valid) begin
                            b_j_state <= WAIT_FOR_TARGET;
                            jr_stall <= 1;
                        end else begin
                            b_j_state <= WAIT_FOR_NEXT_INSTRUCTION_JR;
                        end
                    end
                end

                WAIT_FOR_TARGET: begin
                    if(rob_jump_reg_commit.valid_jump_reg) begin
                        jr_stall <= 0;
                        b_j_state <= WAIT_B_J;
                        //b_j_load_pc <= 1;
                        b_j_branch_target <= rob_jump_reg_commit.jump_target;
                    end else begin
                        b_j_state <= WAIT_FOR_TARGET;
                    end
                end

            endcase
        end
    end
    

    // Determine if we have these hazards

    always_ff @(posedge clk) begin
        dec_jump_reg <= (d_hc.stall) ? dec_jump_reg : dec_overload_jump;
        dec_jump_reg_target <= (d_hc.stall) ? dec_jump_reg_target : decoder_output.branch_target;
        dec_branch_reg <= (d_hc.stall) ? dec_branch_reg : dec_overload_branch;
        dec_branch_reg_target <= (d_hc.stall) ? dec_branch_reg_target : decoder_output.branch_target;
    end

	always_comb begin
		ic_miss = ~i_cache_output.valid;
        dec_overload_jump = decoder_output.valid
			& (decoder_output.is_jump & !decoder_output.is_jump_reg);
		dec_overload_branch = decoder_output.valid
			& (decoder_output.is_branch_jump & !decoder_output.is_jump & branch_pred_output.prediction == TAKEN);
        jr_overload = rob_jump_reg_commit.valid_jump_reg;
        ex_overload = rob_branch_commit.valid_branch
            & (bp_buffer[bp_rd_ptr].prediction != rob_branch_commit.branch_outcome);
        branch_pred_hc.correct_pred = rob_branch_commit.valid_branch
            & (bp_buffer[bp_rd_ptr].prediction == rob_branch_commit.branch_outcome);
		dc_miss = d_cache_input.valid & !d_cache_output.valid;
        req_valid = !d_hc.stall & (decoder_output.is_branch_jump & !decoder_output.is_jump);

        i_hc.stall = ic_miss | inst_q_output.full;
        d_hc.stall = rob_status.full | alu_res_stat_status.full | mem_res_stat_status.full | jr_stall;
        //d_hc.flush = (!d_hc.stall & (dec_branch_reg | dec_jump_reg | jr_overload)) | ex_overload;
        d_hc.flush = b_j_load_pc | branch_pred_hc.flush;
        //d_hc.flush = (!d_hc.stall & (dec_overload_branch | dec_overload_jump | jr_overload)) | ex_overload;
        //branch_pred_hc.flush = ex_overload;
        rob_st_hc.stall = mem_res_stat_status.ld_ready | dc_miss;
        e_hc.stall = d_cache_input.valid & d_cache_output.valid & (d_cache_input.mem_action == READ);
        m_hc.stall = dc_miss;

        i_load_pc.we = d_hc.flush;
        i_load_pc.new_pc = b_j_branch_target;


        /*i_load_pc.we = dec_overload_branch | dec_overload_jump | jr_overload | ex_overload;
		if (dec_overload_branch) begin 
			i_load_pc.new_pc = decoder_output.branch_target;
        end else if(dec_overload_jump) begin
            i_load_pc.new_pc = decoder_output.branch_target;
        end else if(ex_overload) begin
			i_load_pc.new_pc = bp_buffer[bp_rd_ptr].recovery_target;
        end else if(jr_overload) begin
            i_load_pc.new_pc = rob_jump_reg_commit.jump_target;
        end else begin
            i_load_pc.new_pc = 0;
        end*/
	end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            bp_buffer <= '{default:0};
            bp_wr_ptr <= 0;
            bp_rd_ptr <= 0;
        end else begin
            if(!d_hc.stall & decoder_output.is_branch_jump & !decoder_output.is_jump) begin
                bp_wr_ptr <= bp_wr_ptr + 1;
                bp_buffer[bp_wr_ptr].pc <= decoder_output.pc;
                bp_buffer[bp_wr_ptr].ghistory <= branch_pred_output.ghistory;
                bp_buffer[bp_wr_ptr].prediction <= branch_pred_output.prediction;
                bp_buffer[bp_wr_ptr].prediction_gshare <= branch_pred_output.prediction_gshare;
                bp_buffer[bp_wr_ptr].prediction_2bit <= branch_pred_output.prediction_2bit;
                bp_buffer[bp_wr_ptr].recovery_target <= branch_pred_output.recovery_target;
            end

            if(rob_branch_commit.valid_branch) begin
                bp_rd_ptr <= bp_rd_ptr + 1;
            end
        end
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            branch_pred_hc.flush <= 0;
            br_wait_flush_state <= NO_BR_COMMIT;
        end else begin
            case (br_wait_flush_state)
                NO_BR_COMMIT: begin
                    if(ex_overload) begin
                        branch_pred_hc.flush <= 0;
                        br_wait_flush_state <= WAT_FOR_NEXT_COMMIT;
                        b_j_branch_target <= bp_buffer[bp_rd_ptr].recovery_target;
                    end else begin
                        branch_pred_hc.flush <= 0;
                        br_wait_flush_state <= br_wait_flush_state;
                    end
                end

                WAT_FOR_NEXT_COMMIT: begin
                    if(rob_status.valid_commit) begin
                        branch_pred_hc.flush <= 1;
                        br_wait_flush_state <= NO_BR_COMMIT;
                        
                    end else begin
                        branch_pred_hc.flush <= branch_pred_hc.flush;
                        br_wait_flush_state <= br_wait_flush_state;
                    end
                end
            endcase
        end
    end

    /*always_ff @(posedge clk) begin
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
    end*/

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