import mips_core_pkg::*;

module reorder_buffer (
    input clk,
    input rst_n,
    decoder_output_ifc.in decoder_output,
    register_rename_ifc.in phy_reg_output,
    hazard_control_ifc.in d_hc,
    hazard_control_ifc.in rob_st_hc,
    branch_pred_hc_ifc.in branch_pred_hc,
    common_data_bus_ifc.in cdb_output,
    mem_addr_unit_st_output_ifc.in st_data_output,

    rob_status_ifc.out rob_status,
    rob_reg_wr_ifc.out rob_reg_wr,
    rob_mem_wr_ifc.out rob_mem_wr,
    rob_branch_commit_ifc.out rob_branch_commit,
    rob_jump_reg_commit_ifc.out rob_jump_reg_commit
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

    always_comb begin

        if(fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready) begin
            if (!(fifo[rd_ptr[ROB_DEPTH_BITS - 1 : 0]].inst_type == ST & rob_st_hc.stall)) begin
                rob_status.valid_commit = 1;
            end else begin
                rob_status.valid_commit = 0;
            end
        end

        empty           = wr_ptr == rd_ptr;
        empty_spot      = wr_ptr[ROB_DEPTH_BITS - 1 : 0];
        full            = (wr_ptr[ROB_DEPTH_BITS-1:0] == rd_ptr[ROB_DEPTH_BITS-1:0]) 
                        && (wr_ptr[ROB_DEPTH_BITS] != rd_ptr[ROB_DEPTH_BITS]);
        input_inst_type = (decoder_output.uses_rw) ? REG :
                            (decoder_output.is_branch_jump & !decoder_output.is_jump) ? BR :
                            (decoder_output.is_jump) ? JU :
                            (decoder_output.is_mem_access & decoder_output.mem_action == WRITE) ? ST :
                            REG;

        mem_stall = (fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == ST) & rob_st_hc.stall;

        rob_status.full = full;
        rob_status.tag = empty_spot;

        top_ready = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready;

        rob_mem_wr.mem_wr_en    = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == ST;
        rob_mem_wr.mem_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].mem_dest;
        rob_mem_wr.mem_wr_data  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value;

        rob_reg_wr.reg_wr_en    = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == REG & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].logic_reg_dest != 0;
        rob_reg_wr.reg_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].reg_dest;
        rob_reg_wr.reg_log_wr_addr  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].logic_reg_dest;
        rob_reg_wr.reg_wr_data  = fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].value;

        rob_branch_commit.valid_branch      = top_ready & fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].inst_type == BR;
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
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].inst_type <= input_inst_type;
                    fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].jump_reg <= decoder_output.is_jump_reg;
                    if(input_inst_type == BR) begin
                        //$display("wr_ptr %d, rd_ptr %d, REG %d, BR %d", wr_ptr, rd_ptr, REG, BR);
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
                        //$display("log res is %d, rw_phy is %d", decoder_output.rw_addr, phy_reg_output.rw_phy);
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].logic_reg_dest <= decoder_output.rw_addr;
                    end else begin //ST type instructions
                        fifo[wr_ptr[ROB_DEPTH_BITS-1:0]].ready <= 0;
                    end
                    wr_ptr <= wr_ptr + 1;
                end

                if(fifo[rd_ptr[ROB_DEPTH_BITS-1:0]].ready) begin
                    if (!(fifo[rd_ptr[ROB_DEPTH_BITS - 1 : 0]].inst_type == ST & rob_st_hc.stall)) begin
                        fifo[rd_ptr[ROB_DEPTH_BITS-1:0]] <= '{default:0};
                        rd_ptr <= rd_ptr + 1;
                    end
                end

                if (cdb_output.valid) begin
                    fifo[cdb_output.tag].value <= cdb_output.data;
                    fifo[cdb_output.tag].ready <= 1;
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
