module reservation_station (
    input logic clk,
    input logic rst_n,
	decoder_output_ifc.in decoder_output,
    register_rename_ifc.in reg_phy_ready,
    reg_file_output_ifc.in reg_file_data,
    common_data_bus_ifc.in cdb_output,
    rob_write_status_ifc.in rob_write_tag,
    cdb_alu_status_ifc.in reserv_stat_stall,

    output logic valid_entry,
    output mips_core_pkg::AluCtl opcode,
    output [31:0] logic op1,
    output [31:0] logic op2,
    output [`ROB_DEPTH / 2 - 1 : 0] rob_tag,
    output logic full
);

//BR is for branch instructions
//ST is for store instructions that have a memory address destination
//REG is for register operation so ALU operations or load instructions

struct entry {
    mips_core_pkg::AluCtl alu_ctl;
    logic [`ROB_DEPTH / 2 - 1 : 0] rob_tag;
    logic [31:0] v_j;
    logic [31:0] v_k;
    logic [31:0] q_j;
    logic [31:0] q_k;
};

logic valid [`RESERVATION_STATION_DEPTH - 1 : 0];
entry [`RESERVATION_STATION_DEPTH - 1 : 0] reserv_stat_table;
logic [`RESERVATION_STATION_DEPTH / 2 - 1 : 0] count;
logic full;
logic ready_check [`RESERVATION_STATION_DEPTH - 1 : 0];
logic [31:0] op1_check [`RESERVATION_STATION_DEPTH - 1 : 0];
logic [31:0] op2_check [`RESERVATION_STATION_DEPTH - 1 : 0];
mips_core_pkg::AluCtl opcode_check [`RESERVATION_STATION_DEPTH - 1 : 0];
logic [`ROB_DEPTH / 2 - 1 : 0] rob_tag_check [`RESERVATION_STATION_DEPTH - 1 : 0];
logic [`RESERVATION_STATION_DEPTH - 1 : 0] ready_index [`RESERVATION_STATION_DEPTH - 1 : 0];

assign full = reserv_stat_stall.alu_stall & (count == `RESERVATION_STATION_DEPTH);

assign ready_check[0] = (!reserv_stat_table[0].q_j) & (!reserv_stat_table[0].q_k);
assign op1_check[0] = reserv_stat_table[0].v_j;
assign op2_check[0] = reserv_stat_table[0].v_k;
assign opcode_check[0] = reserv_stat_table[0].alu_ctl;
assign rob_tag_check[0] = reserv_stat_table[0].alu_ctl;
assign ready_index[0] = 0;

assign valid_entry = ready_check['RESERVATION_STATION_DEPTH - 1];
assign opcode = opcode_check['RESERVATION_STATION_DEPTH - 1];
assign op1 = op1_check['RESERVATION_STATION_DEPTH - 1];
assign op2 = op2_check['RESERVATION_STATION_DEPTH - 1];
assign rob_tag = rob_tag_check['RESERVATION_STATION_DEPTH - 1];

generate
    genvar i;
    for (i = 1; i < `RESERVATION_STATION_DEPTH; i++) begin
        ready_check[i] = ready_check[i-1] | ((!reserv_stat_table[i].q_j) & (!reserv_stat_table[i].q_k));
        op1_check[i] = (ready_check[i-1]) ? op1_check[i-1] : reserv_stat_table[i].v_j;
        op2_check[i] = (ready_check[i-1]) ? op2_check[i-1] : reserv_stat_table[i].v_k;
        opcode_check[i] = (ready_check[i-1]) ? opcode_check[i-1] : reserv_stat_table[i].alu_ctl;
        rob_tag_check[i] = (ready_check[i-1]) ? rob_tag_check[i-1] : reserv_stat_table[i].rob_tag;
        ready_index[i] = (ready_check[i-1]) ? ready_index[i-1] : i;
    end
endgenerate

always_ff @(posedge clk) begin
    if(cdb_output.valid) begin
        for (int a = 0; a < `RESERVATION_STATION_DEPTH; a++) begin
            if (reserv_stat_table[a].q_j == cdb_output.tag) begin
                reserv_stat_table[a].q_j <= 0;
                reserv_stat_table[a].v_j <= cdb_output.value;
            end

            if (reserv_stat_table[a].q_k == cdb_output.tag) begin
                reserv_stat_table[a].q_k <= 0;
                reserv_stat_table[a].v_k <= cdb_output.value;
            end
        end
    end
end

always_ff @(posedge clk) begin
    if(rst) begin
        reserv_stat_table <= '{default:0};
        count <= 0;
    end else if (dec_decoder_output.valid & !dec_decoder_output.is_mem_access) begin
        if(!full) begin
            if(reserv_stat_stall.alu_stall | !valid_entry) begin
                reserv_stat_table[count].alu_ctl = dec_decoder_output.alu_ctl;
                if(dec_decoder_output.uses_rs) begin
                    if(reg_phy_ready.rs_ready) begin
                        reserv_stat_table[count].v_j <= reg_file_data.rs_data;
                        reserv_stat_table[count].q_j <= 0;
                    end else begin
                        reserv_stat_table[count].v_j <= 0;
                        reserv_stat_table[count].q_j <= reg_phy_ready.rs_tag; ////////////////shouldn't use current tag, have a storage somewhere where rob tag maps to register
                    end
                end
                if(dec_decoder_output.uses_rt) begin
                    if(reg_phy_ready.rt_ready) begin
                        reserv_stat_table[count].v_k <= reg_file_data.rt_data;
                        reserv_stat_table[count].q_k <= 0;
                    end else begin
                        reserv_stat_table[count].v_k <= 0;
                        reserv_stat_table[count].q_k <= reg_phy_ready.rs_tag; 
                    end
                end
                reserv_stat_table[count].rob_tag <= rob_write_tag.tag;
                count <= count + 1;
            end else if(valid_entry) begin
                for(int j = 0 ; j < `RESERVATION_STATION_DEPTH; j++) begin
                    if(j > ready_index) begin
                        reserv_stat_table[j-1] <= reserv_stat_table[j];
                    end
                end
                reserv_stat_table[count-1].alu_ctl = dec_decoder_output.alu_ctl;
                if(dec_decoder_output.uses_rs) begin
                    if(reg_phy_ready.rs_ready) begin
                        reserv_stat_table[count-1].v_j <= reg_file_data.rs_data;
                        reserv_stat_table[count-1].q_j <= 0;
                    end else begin
                        reserv_stat_table[count-1].v_j <= 0;
                        reserv_stat_table[count-1].q_j <= reg_phy_ready.rs_tag; ////////////////shouldn't use current tag, have a storage somewhere where rob tag maps to register
                    end
                end
                if(dec_decoder_output.uses_rt) begin
                    if(reg_phy_ready.rt_ready) begin
                        reserv_stat_table[count-1].v_k <= reg_file_data.rt_data;
                        reserv_stat_table[count-1].q_k <= 0;
                    end else begin
                        reserv_stat_table[count-1].v_k <= 0;
                        reserv_stat_table[count-1].q_k <= reg_phy_ready.rs_tag; 
                    end
                end
                reserv_stat_table[count-1].rob_tag <= rob_write_tag.tag;
            end
        end
    end
end

endmodule