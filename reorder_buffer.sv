module reorder_buffer (
    input clk,
    input rst_n,
    decoder_output_ifc.in decoder_output,
    hazard_control_ifc.in d_hc,
    rob_st_stall_hc_ifc.in rob_st_stall_hc,
    branch_pred_hc_ifc.in mispredict_hc,
    common_data_bus_ifc.in cdb_output,
    mem_addr_unit_st_output_ifc.in st_data_output,

    rob_status_ifc.out rob_empty_spot,
    rob_reg_wr_ifc.out rob_reg_wr,
    rob_to_mem_unit_ifc.out rob_mem_wr,
    rob_branch_commit_ifc.out rob_branch_commit,
    rob_jump_reg_commit.out rob_jump_reg_commit
);

    //BR is for branch instructions
    //ST is for store instructions that have a memory address destination
    //REG is for register operation so ALU operations or load instructions
    enum logic [1:0] {BR = 0, JU = 1, ST = 2, REG = 3} INSTRUCTION_TYPE;

    struct entry {
        logic [2:0] inst_type;
        logic [5:0] reg_dest;
        logic [31:0] mem_dest;
        logic [31:0] value;
        logic jump_reg;
        logic ready;
    };

    entry fifo [ROB_DEPTH];

    logic [ROB_DEPTH_BITS : 0] wr_ptr;
    logic [ROB_DEPTH_BITS : 0] rd_ptr;
    logic [ROB_DEPTH_BITS - 1 : 0] empty_spot;

    logic [1:0] input_inst_type;
    logic full, empty;
    logic top_ready;
    logic mem_stall;

    always_comb begin
        empty           = wr_ptr == rd_ptr;
        empty_spot      = wr_ptr[ROB_DEPTH_BITS - 1 : 0];
        full            = (wr_ptr[ROB_DEPTH_BITS-1:0] == rd_ptr[ROB_DEPTH_BITS-1:0]) 
                        && (wr_ptr[ROB_DEPTH_BITS] != rd_ptr[ROB_DEPTH_BITS]);
        input_inst_type = (decoder_output.uses_rw) ? REG :
                            (decoder_output.is_branch) ? BR :
                            (decoder_output.is_jump) ? JU :
                            (decoder_output.is_mem_access & decoder_output.mem_action == WRITE) ? ST :
                            REG;

        mem_stall = (fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == ST) & rob_st_stall_hc.stall;

        rob_status.full = full;
        rob_status.tag = tag;

        top_ready = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready;

        rob_mem_wr.mem_wr_en    = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == ST;
        rob_mem_wr.mem_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].mem_dest;
        rob_mem_wr.mem_wr_data  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value;

        rob_reg_wr.reg_wr_en    = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == REG;
        rob_reg_wr.reg_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].reg_dest;
        rob_reg_wr.reg_wr_data  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value;

        rob_branch_commit.valid_branch      = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == BR;
        rob_branch_commit.branch_outcome    = (fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value == 0) ? NOT_TAKEN : TAKEN;

        rob_jump_reg_commit.valid_jump_reg  = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].jump_reg;
        rob_jump_reg_commit.jump_target     = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value[`ADDR_WIDTH - 1 : 0];
    end

    always

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            fifo <= '{default:0};
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            if(mispredict_hc.flush) begin
                ifo <= '{default:0};
                wr_ptr <= 0;
                rd_ptr <= 0;
            end else begin
                if (!d_hc.stall & decoder_output.valid) begin
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].inst_type <= input_inst_type;
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].jump_reg <= decoder_output.is_jump_reg;
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
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].reg_dest <= rob_rename.rw_phy;
                    end else begin //ST type instructions
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 0;
                    end
                    wr_ptr <= wr_ptr + 1;
                end

                if(fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready) begin
                    if(!mem_stall) begin
                        fifo[rd_ptr[ROB_DEPTH_BITS-1:0]] <= '0;
                        rd_ptr <= rd_ptr + 1;
                    end
                end

                if (cdb_output.valid) begin
                    fifo[cdb_output.tag].value <= cdb_output.data;
                    fifo[cdb_output.tag].ready <= 1;
                end

                if(mem_addr_unit_output.valid_st) begin
                    fifo[st_data_output.tag].mem_dest <= st_data_output.mem_addr;
                    fifo[st_data_output.tag].value <= st_data_output.reg_value;
                    fifo[st_data_output.tag].ready <= 1;
                end
            end
        end
    end

endmodule