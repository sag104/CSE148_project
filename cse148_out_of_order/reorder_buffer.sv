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

module reorder_buffer (
    input logic clk,
    input logic rst_n,
    input logic [31:0] memory_address,
	input decoder_output_ifc decoder_output,
    input logic [31:0] rw_rename,
    input common_data_bus_ifc.in cdb_output,
    output logic o_empty_spot,
    output logic [3:0] o_result_tag,
    output logic mem_wr_en,
    output logic [31:0] mem_wr_addr,
    output logic reg_wr_en,
    output logic [5:0] rw_addr,
    output logic [31:0] rob_value,
    rob_to_rename_ifc rob_rename
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

assign o_empty_spot = (cnt < 4);
assign o_result_tag = wr_ptr;
assign input_inst_type = (dec_decoder_output.is_branch_jump) ? BR :
            (dec_decoder_output.is_mem_access & dec_decoder_output.mem_action == WRITE) ? ST :
            REG;
assign mem_wr_en = (fifo[rd_ptr].ready & fifo[rd_ptr].inst_type == ST);
assign reg_wr_en = (fifo[rd_ptr].ready & fifo[rd_ptr].inst_type == REG);
assign rob_value = fifo[rd_ptr].value;
assign rw_addr = fifo[rd_ptr].reg_dest;
assign mem_wr_addr = fifo[rd_ptr].mem_dest;

always_ff @(posedge clk) begin
    if(!rst_n) begin
        wr_pt <= 0;
        fifo <= '{default:0};
        cnt <= 0;
    end else if (dec_decoder_output.valid && (cnt < 4)) begin
        fifo[wr_ptr].inst_type <= input_inst_type;
        fifo[wr_ptr].reg_dest <= rw_rename;
        fifo[wr_ptr].mem_dest <= memory_address;
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