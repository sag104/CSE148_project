/*
 * i_cache.sv
 * Author: Zinsser Zhang 
 * Revision : Sankara 			
 * Last Revision: 04/04/2023
 *
 * This is a direct-mapped instruction cache. Line size and depth (number of
 * lines) are set via INDEX_WIDTH and BLOCK_OFFSET_WIDTH parameters. Notice that
 * line size means number of words (each consist of 32 bit) in a line. Because
 * all addresses in mips_core are 26 byte addresses, so the sum of TAG_WIDTH,
 * INDEX_WIDTH and BLOCK_OFFSET_WIDTH is `ADDR_WIDTH - 2.
 *
 * Typical line sizes are from 2 words to 8 words. The memory interfaces only
 * support up to 8 words line size.
 *
 * Because we need a hit latency of 1 cycle, we need an asynchronous read port,
 * i.e. data is ready during the same cycle when address is calculated. However,
 * SRAMs only support synchronous read, i.e. data is ready the cycle after the
 * address is calculated. Due to this conflict, we need to read from the banks
 * on the clock edge at the beginning of the cycle. As a result, we need both
 * the registered version of address and a non-registered version of address
 * (which will effectively be registered in SRAM).
 *
 * See wiki page "Synchronous Caches" for details.
 */
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
	cache_output_ifc.out out,

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
	//logic [`DATA_WIDTH - 1 : 0] databank_wdata;
	logic [128 - 1 : 0] databank_wdata;
	logic [INDEX_WIDTH - 1 : 0] databank_waddr;
	logic [INDEX_WIDTH - 1 : 0] databank_raddr;
	logic [`DATA_WIDTH - 1 : 0] databank_rdata [LINE_SIZE];
	
	//put all the logic here.
	logic victim_hit;
	logic [127 : 0] victim_dataline;
	logic [15 : 0] victim_tag;
	logic [15 : 0] victim_tag_output;
	logic victim_wr_en;

	logic [127:0] databank_dataline;

	assign databank_dataline = {databank_rdata[3],databank_rdata[2],databank_rdata[1],databank_rdata[0]};
	

	victim_cache_module victim_cache(
		.clk,
		.rst_n,
		.tag_in(tagbank_rdata),
		.data_in(databank_rdata),
		.victim_wr_en(victim_wr_en),
		.hit(victim_hit),
		.data_out(victim_dataline)

	);

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
	logic main_cache_hit;


	// Intermediate signals
	logic hit, miss;
	logic last_refill_word;

	always_ff @(posedge clk) begin
		if(!rst_n) begin
			read <= 1'b0;
		end
	end

	always_comb
	begin
		victim_wr_en = valid_bits[i_index] & (i_tag != tagbank_rdata);
		main_cache_hit = valid_bits[i_index]
			& (i_tag == tagbank_rdata);
		hit = main_cache_hit
			& victim_hit
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
			databank_we = databank_select;
		else
			databank_we = (victim_hit & !main_cache_hit) ? '1 : '0;

		databank_wdata[0] = (victim_hit) ? victim_dataline[31:0]:mem_read_data.RDATA;
		databank_wdata[1] = (victim_hit) ? victim_dataline[63:32]:mem_read_data.RDATA;
		databank_wdata[2] = (victim_hit) ? victim_dataline[95:64]:mem_read_data.RDATA;
		databank_wdata[3] = (victim_hit) ? victim_dataline[127:96]:mem_read_data.RDATA;

		databank_waddr = r_index;
		databank_raddr = i_index_next;
	end

	always_comb
	begin
		tagbank_we = last_refill_word;
		tagbank_wdata = (victim_hit) ? victim_tag:r_tag;
		tagbank_waddr = r_index;
		tagbank_raddr = i_index_next;
	end

	always_comb
	begin
		out.valid = hit;
		out.data = databank_rdata[i_block_offset];
	end

	always_comb
	begin
		next_state = state;
		unique case (state)
			STATE_READY:
				if (miss)
					next_state = STATE_REFILL_REQUEST;
					// victim_cache.pc_tag = i_tag;
					// victim_cache.dataline = databank_rdata;
			STATE_REFILL_REQUEST:
				if (mem_read_address.ARREADY)
					next_state = STATE_REFILL_DATA;
			STATE_REFILL_DATA:
				if (last_refill_word)
					next_state = STATE_READY;
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

	// typedef struct packed {
	// 	//only store the tag
	// 	//the line_size of the index
	// 	//array to store 4 data
	// 	//store the data
	// 	//lru
	// 	//the victim cache has 16 entries, so we have 4 bits for lru
	// 	[15:0] pc_tag,
	// 	[128 - 1:0] dataline,
	// 	//16 lines. lru to check which one will be evicted.
	// 	logic [3:0] lru

	// } victim_cache_entry;


module victim_cache_module (
  input wire rst_n;
  input wire [15:0] tag_in,
  input wire [127:0] data_in,
  input wire victim_wr_en,
  output wire hit,
  output wire [127:0] data_out
);
localparam VICTIM_CACHE_SIZE = 4;  // Size of the victim cache
logic [15:0] tag [VICTIM_CACHE_SIZE - 1:0];
logic [127:0] data [VICTIM_CACHE_SIZE - 1:0];
logic [1:0] lru [VICTIM_CACHE_SIZE - 1:0];
logic [1:0] victim;
//we may actually do not need the used and the full.
assign hit = (search && (tag_in == tag[victim]));
assign data_out = data[victim];

always_comb begin
	for (int j = 0; j < 4; j++) begin
		if (tag_in == tag[j])begin
			victim = j;
		end
	end
end

always_ff @(posedge clk) begin
	if (!rst_n) begin
      	tag <= 16'b0;
      	data <= 128'b0;
      	lru[0] <= 2'b0;
	  	lru[1] <= 2'b1;
	  	lru[2] <= 2'b2;
	  	lru[3] <= 2'b3;
	end else 
		if(victim_wr_en) begin
			for (int i = 0; i < 4; i++) begin
				if (lru[i] == 3) begin
					for (int j = 0; j < 4; j++) begin
						if (lru[j] < lru[i]) begin
							lru[j] <= lru[j] + 1;
						end
					end
					tag[i] <= tag_in;
					data[i] <= data_in;
					lru[i] <= 0;
				end	
			end
		end
	end
end


  
  
				for (int i = 0; i < 4; i++) begin
					if (lru[i] < lru[j]) begin
						lru[i]++;
					end
				end
			//if we search, we just remove this one
			tag[j] = 16'b0;
			data[j] = 128'b0;
			full = 1'b0;
			used[j] = 1'b0;
		end
		
		end
	  end
    end
  end
  
endmodule




endmodule
