import mips_core_pkg::*;

module instruction_queue (
    input clk,
    input rst_n,

    i_cache_output_ifc.in i_cache_output,
    hazard_control_ifc.in d_hc,
    inst_q_output_ifc.out inst_q_output
);

    inst inst_queue [INSTRUCTION_QUEUE_DEPTH];
    logic [INSTRUCTION_QUEUE_DEPTH_BITS:0] wr_ptr, rd_ptr;
    logic full, empty;

    always_comb begin
        empty = (wr_ptr == rd_ptr);
        full = (wr_ptr[INSTRUCTION_QUEUE_DEPTH_BITS-1:0] == rd_ptr[INSTRUCTION_QUEUE_DEPTH_BITS-1:0])
                && (wr_ptr[INSTRUCTION_QUEUE_DEPTH_BITS] != rd_ptr[INSTRUCTION_QUEUE_DEPTH_BITS]);

        inst_q_output.valid = !empty;
        inst_q_output.full = full;
        inst_q_output.data = inst_queue[rd_ptr].data;
        inst_q_output.pc = inst_queue[rd_ptr].pc;
    end

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            inst_queue <= '{default:0};
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            if(d_hc.flush) begin
                inst_queue <= '{default:0};
                wr_ptr <= 0;
                rd_ptr <= 0;
            end else begin
                if(!full) begin
                    if(i_cache_output.valid) begin
                        inst_queue[wr_ptr].data <= i_cache_output.data;
                        inst_queue[wr_ptr].pc   <= i_cache_output.pc;
                        wr_ptr <= wr_ptr + 1;
                    end
                end

                if(!empty) begin
                    if(!d_hc.stall)
                        rd_ptr <= rd_ptr + 1;
                end
            end
        end
    end


endmodule
