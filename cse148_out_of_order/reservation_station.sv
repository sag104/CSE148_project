module reservation_station (
    input logic clk,
    input logic rst_n,
	decoder_output_ifc.in decoder_output,
    register_rename_ifc.in reg_phy_ready,
    reg_file_output_ifc.in reg_file_data
);

//BR is for branch instructions
//ST is for store instructions that have a memory address destination
//REG is for register operation so ALU operations or load instructions

struct entry {
    mips_core_pkg::AluCtl alu_ctl;
    logic [31:0] v_j;
    logic [31:0] v_k;
    logic [31:0] q_j;
    logic [31:0] q_k;
};

logic valid [`RESERVATION_STATION_DEPTH - 1 : 0];
entry [0:`ROB_DEPTH - 1] reserv_stat_table;

always_ff @(posedge clk) begin
    if(!rst_n) begin
        valid <= '0;
    end else if (dec_decoder_output.valid & !dec_decoder_output.is_mem_access) begin
        if(dec_decoder_output.uses_rs) begin
            if(reg_phy_ready.rs_ready) begin
                v_j <= reg_file_data.rs_data;
                q_j <= 0;
            end else begin
                q_q <= 
            end
        end
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
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
    if(rst) begin
        rd_ptr <= 0;
    end else if (fifo[rd_ptr].ready) begin
        rd_ptr <= rd_ptr + 1;
    end
end

endmodule