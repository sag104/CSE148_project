interface rob_to_rename_ifc ();
	logic [`DATA_WIDTH - 1 : 0] valid;
	logic [5:0] commit_reg;

	modport in  (input valid, commit_reg);
	modport out (output valid, commit_reg);
endinterface

interface rob_to_reg_file_ifc();
    logic reg_wr_en;
    logic [31:0] reg_wr_data;
    logic [5:0] reg_wr_addr;

    modport in  (input reg_wr_en, reg_wr_data, reg_wr_addr);
    modport out (output reg_wr_en, reg_wr_data, reg_wr_addr);
endinterface

interface rob_to_mem_unit_ifc();
    logic mem_wr_en;
    logic [31:0] mem_wr_addr;

    modport in (input mem_wr_en, mem_wr_addr);
    modport out (output mem_wr_en, mem_wr_addr);
endinterface

interface rob_to_res_stat_ifc();
    logic o_result_tag;

    modport in  (input o_result_tag);
    modport out (output o_result_tag);
endinterface

interface rob_write_status_ifc();
    logic empty_spot;
    logic [3:0] tag;

    modport in  (input empty_spot, tag);
    modport out (output empty_spot, tag);
endinterface

module reorder_buffer (
    input logic clk,
    input logic rst_n,
    decoder_output_ifc.in decoder_output,
    common_data_bus_ifc.in cdb_output,
    mem_addr_unit_to_rob_ifc.in mem_addr_unit_output,

    rob_write_status_ifc.out rob_wr_status,
    rob_to_reg_file_ifc.out rob_reg_wr,
    rob_to_mem_unit_ifc.out rob_mem_wr,
    rob_to_rename_ifc.out rob_rename

    output logic [31:0] rob_value,
);

//BR is for branch instructions
//ST is for store instructions that have a memory address destination
//REG is for register operation so ALU operations or load instructions
enum logic [1:0] {BR = 0, ST = 1, REG = 2} INSTRUCTION_TYPE;

struct entry {
    logic [1:0] inst_type;
    logic [5:0] reg_dest;
    logic [31:0] mem_dest;
    logic [31:0] value;
    logic [31:0] ready;
};

// Declare the queue
logic [`ROB_DEPTH / 2 - 1 : 0] wr_ptr;
logic [`ROB_DEPTH / 2 - 1 : 0] rd_ptr;
logic [15:0] cnt;
logic [1:0] input_inst_type;
entry [0:`ROB_DEPTH - 1] fifo;

assign rob_wr_status.empty_spot = (cnt < 4);
assign rob_wr_status.tag = wr_ptr;

assign input_inst_type = (dec_decoder_output.is_branch_jump) ? BR :
            (dec_decoder_output.is_mem_access & dec_decoder_output.mem_action == WRITE) ? ST :
            REG;

assign rob_mem_wr.mem_wr_en = (fifo[rd_ptr].ready & fifo[rd_ptr].inst_type == ST);
assign rob_mem_wr.mem_wr_addr = fifo[rd_ptr].mem_dest;

assign rob_reg_wr.reg_wr_en = (fifo[rd_ptr].ready & fifo[rd_ptr].inst_type == REG);
assign rob_mem_wr.rw_addr = fifo[rd_ptr].reg_dest;

assign rob_value = fifo[rd_ptr].value;

always_ff @(posedge clk) begin
    if(!rst_n) begin
        wr_pt <= 0;
        fifo <= '{default:0};
        cnt <= 0;
    end else if (dec_decoder_output.valid && (cnt < 4)) begin
        fifo[wr_ptr].inst_type <= input_inst_type;
        fifo[wr_ptr].reg_dest <= rob_rename.rw_phy;
        fifo[wr_ptr].mem_dest <= mem_addr_unit_output.mem_addr;
        fifo[wr_ptr].ready <= 0;
        wr_ptr <= wr_ptr + 1;
        cnt <= cnt + 1;
    end
end

always_ff @(posedge clk) begin
    if (cdb_output.valid) begin
        fifo[cdb_output.tag].value <= cdb_output.data;
        fifo[cdb_output.tag].ready <= 1;
    end
end

always_ff @(posedge clk) begin
    if(!rst_n) begin
        rd_ptr <= 0;
    end else if (fifo[rd_ptr].ready) begin
        rd_ptr <= rd_ptr + 1;
    end
end

endmodule