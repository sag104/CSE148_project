import mips_core_pkg::*;

module reorder_buffer (
    input clk,
    input rst_n,
    decoder_output_ifc.in decoder_output,
    register_rename_ifc.in phy_reg_output,
    hazard_control_ifc.in d_hc,
    hazard_control_ifc.in rob_st_hc,
    branch_pred_hc_ifc.in branch_pred_hc,
    branch_stall_hc_ifc.in branch_stall_hc,
    common_data_bus_ifc.in cdb_output,
    mem_addr_unit_st_output_ifc.in st_data_output,

    rob_status_ifc.out rob_status,
    rob_reg_wr_ifc.out rob_reg_wr,
    rob_mem_wr_ifc.out rob_mem_wr,
    rob_branch_commit_ifc.out rob_branch_commit,
    rob_jump_reg_commit_ifc.out rob_jump_reg_commit,
    rob_reg_ready_data_ifc.out rob_reg_ready_data
);

    //BR is for branch instructions
    //ST is for store instructions that have a memory address destination
    //REG is for register operation so ALU operations or load instructions
    enum logic [1:0] {REG = 0, JU = 1, ST = 2, BR = 3} INSTRUCTION_TYPE;

    rob_entry fifo [ROB_DEPTH];

    logic [ROB_DEPTH_BITS : 0] wr_ptr;
    logic [ROB_DEPTH_BITS : 0] rd_ptr;
    logic [ROB_DEPTH_BITS - 1 : 0] empty_spot;

    logic [1:0] input_inst_type;
    logic full, empty;
    logic top_ready;
    logic mem_stall;
    logic branch_commit_wait;

    logic [1:0] top_inst_type;
    logic top_br;

    always_comb begin

        rob_reg_ready_data.rob_rs_ready = fifo[phy_reg_output.rs_tag].ready;
        rob_reg_ready_data.rs_data = fifo[phy_reg_output.rs_tag].value;
        rob_reg_ready_data.rob_rt_ready = fifo[phy_reg_output.rt_tag].ready;
        rob_reg_ready_data.rt_data = fifo[phy_reg_output.rt_tag].value;

        rob_status.valid_commit = top_ready & !mem_stall & !branch_commit_wait & !branch_pred_hc.flush;
        rob_status.commit_pc = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].pc;
        rob_status.commit_instr = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].instr;

        /*if(fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready) begin
            if(!mem_stall) begin
                rob_status.valid_commit = 1;
            end
        end else begin
            rob_status.valid_commit = 0;
        end*/
        empty           = wr_ptr == rd_ptr;
        empty_spot      = wr_ptr[ROB_DEPTH_BITS - 1 : 0];
        full            = (wr_ptr[ROB_DEPTH_BITS-1:0] == rd_ptr[ROB_DEPTH_BITS-1:0]) 
                        && (wr_ptr[ROB_DEPTH_BITS] != rd_ptr[ROB_DEPTH_BITS]);
        input_inst_type = (decoder_output.uses_rw) ? REG :
                            (decoder_output.is_branch_jump & !decoder_output.is_jump) ? BR :
                            (decoder_output.is_jump) ? JU :
                            (decoder_output.is_mem_access & decoder_output.mem_action == WRITE) ? ST :
                            REG;

        top_inst_type = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type;
        top_br = top_inst_type == BR;

        mem_stall = (top_inst_type == ST) & rob_st_hc.stall;
        branch_commit_wait = top_br & branch_stall_hc.stall;

        rob_status.full = full;
        rob_status.tag = empty_spot;
        rob_status.pass = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].pass;
        rob_status.fail = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].fail;
        rob_status.done = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].done;
        rob_status.mtc0_op = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].mtc0_op;

        top_ready = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready;

        rob_mem_wr.mem_wr_en    = !branch_pred_hc.flush & top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == ST & !rob_st_hc.stall;
        rob_mem_wr.mem_wr_addr  = (rob_mem_wr.mem_wr_en) ? fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].mem_dest : 0;
        rob_mem_wr.mem_wr_data  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value;

        rob_reg_wr.reg_wr_en    = !branch_pred_hc.flush & top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == REG & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].logic_reg_dest != 0;
        rob_reg_wr.reg_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].reg_dest;
        rob_reg_wr.reg_log_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].logic_reg_dest;
        rob_reg_wr.reg_wr_data  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value;
        rob_reg_wr.is_load      = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].is_load;
        rob_reg_wr.addr         = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].addr;
        rob_reg_wr.tag          = rd_ptr[ROB_DEPTH_BITS-1:0];

        rob_branch_commit.valid_branch      = top_ready & (fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == BR) & !branch_stall_hc.stall;
        rob_branch_commit.branch_outcome    = (fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value == 0) ? NOT_TAKEN : TAKEN;

        rob_jump_reg_commit.valid_jump_reg  = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].jump_reg;
        rob_jump_reg_commit.jump_target     = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value[ADDR_WIDTH - 1 : 0];
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            fifo <= '{default:0};
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            if(branch_pred_hc.flush) begin
                fifo <= '{default:0};
                wr_ptr <= 0;
                rd_ptr <= 0;
            end else begin
                if (!d_hc.stall & decoder_output.valid) begin
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].valid      <= 1;
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].instr       <=decoder_output.instr;
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].inst_type  <= input_inst_type;
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].jump_reg   <= decoder_output.is_jump_reg;
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].pc         <= decoder_output.pc;
                    if(input_inst_type == BR) begin
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 0;
                    end else if(input_inst_type == JU) begin
                        if(decoder_output.is_jump_reg) begin
                            fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 0;
                        end else begin
                            fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 1;
                        end  
                    end else if(input_inst_type == REG) begin
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 0;
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].reg_dest <= phy_reg_output.rw_phy;
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].logic_reg_dest <= decoder_output.rw_addr;
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].is_load <= decoder_output.is_mem_access;
                    end else begin //ST type instructions
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 0;
                    end
                    wr_ptr <= wr_ptr + 1;
                end

                if(fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready) begin
                    if (!mem_stall & !branch_commit_wait) begin
                        fifo[rd_ptr[ROB_DEPTH_BITS-1:0]] <= '{default:0};
                        rd_ptr <= rd_ptr + 1;
                    end
                end

                if (cdb_output.valid) begin
                    //if(fifo[cdb_output.tag].valid) begin
                    if(!empty) begin
                        fifo[cdb_output.tag].value <= cdb_output.data;
                        fifo[cdb_output.tag].ready <= 1;
                        if(fifo[cdb_output.tag].is_load) begin
                            fifo[cdb_output.tag].addr <= cdb_output.addr;
                        end
                        fifo[cdb_output.tag].pass <= cdb_output.pass;
                        fifo[cdb_output.tag].fail <= cdb_output.fail;
                        fifo[cdb_output.tag].done <= cdb_output.done;
                        fifo[cdb_output.tag].mtc0_op <= cdb_output.mtc0_op;
                    end
                end

                if(st_data_output.valid_st) begin
                    fifo[st_data_output.tag].mem_dest <= st_data_output.mem_addr[ADDR_WIDTH - 1 : 0];
                    fifo[st_data_output.tag].value <= st_data_output.reg_value;
                    fifo[st_data_output.tag].ready <= 1;
                end
            end
        end
    end

endmodule
