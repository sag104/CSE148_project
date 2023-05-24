`include "mips_core.svh"

//finish but no testing. and still need to know the logic here. every time get one instruction in and put one instruction out?
module instruction_queue (
    input clk,    // Clock
	input rst_n,  // Synchronous reset active low
    
    //request
    cache_output_ifc.in instruction_in,

    output instruc_1;
    output full;

);
Queue instruc_queue;

initial begin
    
end

always_ff @(posedge clk)
begin
    if(~rst_n)
    begin 
        //give the first one in queue to instruction out, but not sure
        instruc_queue.add(instruction_in);
        instruc_1 <- instruc_queue[instruc_queue.head];
        full <- instruc_queue.full;
    end
end

endmodule

module Queue;
  reg [31:0] queue [0:3];  // 4-element queue
  reg [1:0] head;
  reg [1:0] tail;
  logic full;
  
  initial begin
    head = 0;
    tail = 0;
    full = 0;
  end
  
  function void add(input reg [7:0] data);
    if ((tail + 1) % 4 != head) begin
      queue[tail] = data;
      tail = (tail + 1) % 4;
    end else begin
      full = 1;
    end
  endfunction
  
endmodule