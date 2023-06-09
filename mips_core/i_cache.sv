`include "mips_core.svh"

module i_cache #(
	parameter INDEX_WIDTH = 6, // 1 KB Cahe size 
	parameter BLOCK_OFFSET_WIDTH = 2
	)(
	// General signals
	input clk,    // Clock
	input rst_n,  // Synchronous reset active low

	// Request
	pc_ifc.in i_pc_current,
	pc_ifc.in i_pc_next,

	// Response
	i_cache_output_ifc.out out,

	// Memory interface
	axi_read_address.master mem_read_address,
	axi_read_data.master mem_read_data
);
	localparam TAG_WIDTH = `ADDR_WIDTH - INDEX_WIDTH - BLOCK_OFFSET_WIDTH - 2;
	localparam LINE_SIZE = 1 << BLOCK_OFFSET_WIDTH;
	localparam DEPTH = 1 << INDEX_WIDTH;

	// Check if the parameters are set correctly
	generate
		if(TAG_WIDTH <= 0 || LINE_SIZE > 16)
		begin
			INVALID_I_CACHE_PARAM invalid_i_cache_param ();
		end
	endgenerate

	// Parsing
	logic [TAG_WIDTH - 1 : 0] i_tag;
	logic [INDEX_WIDTH - 1 : 0] i_index;
	logic [BLOCK_OFFSET_WIDTH - 1 : 0] i_block_offset;

	logic [INDEX_WIDTH - 1 : 0] i_index_next;

	assign {i_tag, i_index, i_block_offset} = i_pc_current.pc[`ADDR_WIDTH - 1 : 2];
	assign i_index_next = i_pc_next.pc[BLOCK_OFFSET_WIDTH + 2 +: INDEX_WIDTH];
	// Above line uses +: slice, a feature of SystemVerilog
	// See https://stackoverflow.com/questions/18067571

	// States
	enum logic[1:0] {
		STATE_READY,            // Ready for incoming requests
		STATE_REFILL_REQUEST,   // Sending out a memory read request
		STATE_REFILL_DATA       // Missing on a read
	} state, next_state;

	// Registers for refilling
	logic [INDEX_WIDTH - 1:0] r_index;
	logic [TAG_WIDTH - 1:0] r_tag;

	// databank signals
	logic [LINE_SIZE - 1 : 0] databank_select;
	logic [LINE_SIZE - 1 : 0] databank_we;
	logic [`DATA_WIDTH - 1 : 0] databank_wdata;
	logic [`D]
	logic [INDEX_WIDTH - 1 : 0] databank_waddr;
	logic [INDEX_WIDTH - 1 : 0] databank_raddr;
	logic [`DATA_WIDTH - 1 : 0] databank_rdata [LINE_SIZE];

	logic [127:0] databank_line;

	assign databank_line = {databank[0].databank_rd_addr, databank[1], databank[2], databank[3]}

	// databanks
	genvar g;
	generate
		for (g = 0; g < LINE_SIZE; g++)
		begin : databanks
			cache_bank #(
				.DATA_WIDTH (`DATA_WIDTH),
				.ADDR_WIDTH (INDEX_WIDTH)
			) databank (
				.clk,
				.i_we (databank_we[g]),
				.i_wdata(databank_wdata),
				.i_waddr(databank_waddr),
				.i_raddr(databank_raddr),

				.o_rdata(databank_rdata[g])
			);
		end
	endgenerate

	genvar g;
	generate
		for (g = 0; g < LINE_SIZE; g++)
		begin : databanks
			cache_bank #(
				.DATA_WIDTH (`DATA_WIDTH),
				.ADDR_WIDTH (INDEX_WIDTH)
			) databank (
				.clk,
				.i_we (databank_we[g]),
				.i_wdata(databank_wdata[g]),
				.i_waddr(databank_waddr),
				.i_raddr(databank_raddr),

				.o_rdata(databank_rdata[g])
			);
		end
	endgenerate

	// tagbank signals
	logic tagbank_we;
	logic [TAG_WIDTH - 1 : 0] tagbank_wdata;
	logic [INDEX_WIDTH - 1 : 0] tagbank_waddr;
	logic [INDEX_WIDTH - 1 : 0] tagbank_raddr;
	logic [TAG_WIDTH - 1 : 0] tagbank_rdata;

	cache_bank #(
		.DATA_WIDTH (TAG_WIDTH),
		.ADDR_WIDTH (INDEX_WIDTH)
	) tagbank (
		.clk,
		.i_we    (tagbank_we),
		.i_wdata (tagbank_wdata),
		.i_waddr (tagbank_waddr),
		.i_raddr (tagbank_raddr),

		.o_rdata (tagbank_rdata)
	);

	// Valid bits
	logic [DEPTH - 1 : 0] valid_bits;

	// Intermediate signals
	logic hit, miss;
	logic last_refill_word;


	always_comb
	begin
		hit = valid_bits[i_index]
			& (i_tag == tagbank_rdata)
			& (state == STATE_READY);
		miss = ~hit;
		last_refill_word = databank_select[LINE_SIZE - 1]
			& mem_read_data.RVALID;
	end

	always_comb
	begin
		mem_read_address.ARADDR = {r_tag, r_index,
			{BLOCK_OFFSET_WIDTH + 2{1'b0}}};
		mem_read_address.ARLEN = LINE_SIZE;
		mem_read_address.ARVALID = state == STATE_REFILL_REQUEST;
		mem_read_address.ARID = 4'd0;

		// Always ready to consume data
		mem_read_data.RREADY = 1'b1;
	end

	always_comb
	begin
		if (mem_read_data.RVALID)
			databank_we = (victim_cache_wr_en) ? '1 : databank_select;
		else
			databank_we = '0;

		victim_cache_wr_en = victim_hit;

		databank_wdata[0] = (victim_cache_wr_en) ? victim_cache_data[31:0] : mem_read_data.RDATA;
		databank_wdata[1] = (victim_cache_wr_en) ? victim_cache_data[63:32] : mem_read_data.RDATA;
		databank_wdata[2] = (victim_cache_wr_en) ? victim_cache_data[95:64] : mem_read_data.RDATA;
		databank_wdata[3] = (victim_cache_wr_en) ? victim_cache_data[127:96] : mem_read_data.RDATA;
		databank_waddr = r_index;
		databank_raddr = i_index_next;
	end

	always_comb
	begin
		tagbank_we = last_refill_word | victim_cache_wr_en;
		tagbank_wdata = r_tag | victim_cache_wr_tag;
		tagbank_waddr = r_index;
		tagbank_raddr = i_index_next;
	end

	always_comb
	begin
		out.valid = hit;
		out.data = databank_rdata[i_block_offset];
        out.pc = i_pc_current.pc;
	end

	always_comb
	begin
		next_state = state;
		unique case (state)
			STATE_READY:
				if (miss)
					next_state = STATE_REFILL_REQUEST;
			STATE_REFILL_REQUEST:
				if (mem_read_address.ARREADY)
					next_state = STATE_REFILL_DATA;
			STATE_REFILL_DATA:
				if (last_refill_word)
					next_state = STATE_READY;
			default:
				next_state = state;
		endcase
	end

	always_ff @(posedge clk)
	begin
		if(~rst_n)
		begin
			state <= STATE_READY;
			databank_select <= 1;
			valid_bits <= '0;
		end
		else
		begin
			state <= next_state;

			case (state)
				STATE_READY:
				begin
					if (miss)
					begin
						r_tag <= i_tag;
						r_index <= i_index;
					end
				end
				STATE_REFILL_REQUEST:
				begin
				end
				STATE_REFILL_DATA:
				begin
					if (mem_read_data.RVALID)
					begin
						databank_select <= {databank_select[LINE_SIZE - 2 : 0],
							databank_select[LINE_SIZE - 1]};
						valid_bits[r_index] <= last_refill_word;
					end
				end
			endcase
		end
	end
endmodule
