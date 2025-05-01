/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module jtag_tb;

  logic clk;
  logic tms;
  logic tdi;
  logic tdo;

  parameter period = 10; // 100MHz Clock

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


  bit dr_stream[];
  bit ir_stream_bypass[];
  bit ir_stream_idcode[];

  initial begin
    ir_stream_bypass = '{1,1,1,1,1};
    ir_stream_idcode = '{1,1,0,0,1};
    
    loadIR('{ir_stream_bypass, ir_stream_idcode});
    // loadIR('{ir_stream_idcode, ir_stream_bypass});

    $display("%b", jtag_taps_i.tap_0.IR);
    $display("%b", jtag_taps_i.tap_1.IR);

    loadDR('{1,1,0});
    getDR(dr_stream, 33);

    $write("getDR: "); printStream(dr_stream);

    $finish;
  end

  // always begin
  //   $display("%b %b", tdi, tdo);
  //   #period;
  // end


  series_taps jtag_taps_i (
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

