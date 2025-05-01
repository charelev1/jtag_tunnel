/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module virtual_tb;
  logic clk;
  logic tms;
  logic tdi;
  logic tdo;

  parameter period = 10; // 100MHz Clock

  typedef bit bit_array_t[];  // Define a dynamic array of bits

  // Generate Clock
  always begin
    #(period/2) clk = 1;
    #(period/2) clk = 0;
  end

  task put (int i);
      $write("Time: %4t sample %4d", $time, i);
      $write("  tms = %0b", tms);
      $write("  tdi = %0b", tdi);
      $write("  tdo = %0b", tdo);
      $write("\n");
  endtask

  task static jtag_reset();
    logic [5-1: 0] tms_seq = 5'b1111_1;
    logic [5-1: 0] tdi_seq = 5'b0000_0;

    for (int i = 5-1 ; i>=0 ; i--) begin
      tms = tms_seq[i];
      tdi = tdi_seq[i];
      #period;
    end
  endtask

  task static jtag_ir_shift();
    logic [5-1: 0] tms_seq = 5'b0110_0;
    logic [5-1: 0] tdi_seq = 5'b0000_0;

    for (int i = 5-1 ; i>=0 ; i--) begin
      tms = tms_seq[i];
      tdi = tdi_seq[i];
      #period;
    end
  endtask


  task static loadIR (input bit stream[]);
    $write("loadIR: "); printStream(stream);
    jtag_reset();
    
    // Go to CAPTURE_IR state
    tms = 0;
    #period;
    tms = 1;
    #period;
    tms = 1;
    #period;
    tms = 0;
    #period;

    if(stream.size() > 0) begin
      // Go to SHIFT_IR state
      tms = 0;
      #period;
      // Shift the stream of data
      for(int i=0; i<stream.size(); i++) begin
        tms = (i == stream.size()-1);
        tdi = stream[i];
        #period;
      end
    end

    // Go to Run test IDLE state state
    tms = 1;
    #period;
    tms = 0;
    #period;
  endtask

  task static printStream(input bit stream[]);
    foreach (stream[i]) begin
      $write("%b",stream[i]);
    end
    $write("\n");
  endtask

  task static loadDR (input bit stream[]);
    // Go to TEST_LOGIC_RESET state
    $write("loadDR: "); printStream(stream);

    jtag_reset();
    // Go to CAPTURE_DR state
    tms = 0;
    #period;
    tms = 1;
    #period;
    tms = 0;
    #period;

    if(stream.size() > 0) begin
      // Go to SHIFT_DR state
      tms = 0;
      #period;
      // Shift the stream of data
      for(int i=0; i<stream.size(); i++) begin
        tms = (i == stream.size()-1);
        tdi = stream[i];
        #period;
      end
    end

    // Go to Run test IDLE state state
    tms = 1;
    #period;
    tms = 0;
    #period;
  endtask

  task static getDR (output bit stream[], input int size);
    stream = new[size];
    // Go to TEST_LOGIC_RESET state
    jtag_reset();
    // Go to CAPTURE_DR state
    tms = 0;
    #period;
    tms = 1;
    #period;
    tms = 0;
    #period;

    if(stream.size() > 0) begin
      // Go to SHIFT_DR state
      tms = 0;
      #period;
      // Shift the stream of data
      for(int i=0; i<stream.size(); i++) begin
        tms = (i == stream.size()-1);
        tdi = 0;
        stream[i] = tdo;
        #period;
      end
    end

    // Go to Run test IDLE state state
    tms = 1;
    #period;
    tms = 0;
    #period;
  endtask


  function automatic bit_array_t interleave(input bit_array_t vec1, input bit_array_t vec2);
      bit_array_t result;
  
      // Check if vectors are same length
      if (vec1.size() != vec2.size()) begin
          $error("Input vectors must be the same length");
          return '{};  // Return empty array
      end
  
      // Allocate space for the interleaved result
      result = new[2 * vec1.size()];
  
      // Interleave the bits
      for (int i = 0; i < vec1.size(); i++) begin
          result[2 * i]     = vec1[i]; // Even index: vec2
          result[2 * i + 1] = vec2[i]; // Odd index: vec1
      end
  
      return result;
  endfunction


  bit_array_t idcode_addr;
  bit_array_t bypass_addr;
  bit_array_t bcn_addr;
  bit_array_t user_addr;

  bit_array_t dr_stream;

  initial begin 
    $dumpfile("wave.vcd");      // Name of VCD file
    $dumpvars(0, top_module);   // Dump all signals in top_module

    idcode_addr = '{1,1,0,0,1};
    bypass_addr = '{1,1,1,1,1};
    bcn_addr    = '{1,0,1,0,1};
    user_addr   = '{1,0,0,1,1};
    
    loadIR(user_addr);

    // Go to VIRTUAL TEST_LOGIC_RESET state
    loadDR(interleave('{1,1,1,1,1},'{1,0,1,0,0}));

    // Go to VIRTUAL SHIFT_IR      SHIFT_IRx5 TEST_LOGIC_RESET
    //                     \           \        \
    //                     v           v        v
    loadDR(interleave('{0,1,1,0,0, 0,0,0,0,1, 1,1,1,1,1},   // tdms signals
                      '{0,0,0,0,0, 1,1,0,0,1, 1,1,1,1,1})); // tdi signals

    // Go to VIRTUAL SHIFT_DR      SHIFT_DRx5 TEST_LOGIC_RESET
    //                     \           \        \
    //                     v           v        v
    loadDR(interleave('{0,1,0,0, 0,0,0,0,1, 1,1,1,1,1},    // tdms signals
                      '{0,0,0,0, 1,0,1,1,1, 1,1,1,1,1}));  // tdi  signals

    #period;
    #period;
    #period;
    #period;
    $finish;
  end

  always begin
    $write("%b %b", tdi, tdo);
    $write(" %s", jtag_taps_i.tap_1.tap_state.name);
    $write(" %h", jtag_taps_i.tap_1.tap_state);
    $write("\n");
    #period;
    #period;
  end

  virtual_taps jtag_taps_i (
    .clk(clk),
    .tms(tms),
    .tdi(tdi),
    .tdo(tdo)
  );

endmodule

    //   $display("%s", jtag_tap_i.tap_state.name);
    //   $display("%b", jtag_tap_i.IR_SR);
    //   $display("%b", jtag_tap_i.IR);
    // $display("%b", jtag_tap_i.BCN);

