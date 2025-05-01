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

  task static loadIR (input logic[5-1: 0] instruction);
    logic [5-1: 0] tms_seq;
    logic [5-1: 0] tdi_seq; 

    $display("loadIR %b", instruction);
    jtag_reset();
    jtag_ir_shift();

    assign tms_seq = 5'b0000_1;
    assign tdi_seq = instruction;

    // Shift the instruction
    for (int i = 5-1 ; i>=0 ; i--) begin
      tms = tms_seq[i];
      tdi = tdi_seq[i];
      #period;
    end

    // Go to capture state
    tms = 1;
    #period;
    tms = 1;
    #period;

    jtag_reset();
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

  initial begin
    
    // USER mode test
    loadIR(5'b10011);
    loadDR('{1, 1,0});
    
    // BCN mode test
    loadIR(5'b10101);
    loadDR('{1, 1, 1, 1, 1, 0, 1, 0});
    getDR(dr_stream, 8);
    $write("getDR: "); printStream(dr_stream);

    $finish;
  end

  always begin
    $write("%b %b", tdi, tdo);
    $display(" %b", sel_user);
    #period;
  end


  logic clk_user;
  logic tms_user;
  logic tdi_user;
  logic tdo_user;
  logic sel_user;

  assign tdo_user = tdi_user;

  tap_top jtag_tap_i (
    .clk(clk),
    .tms(tms),
    .tdi(tdi),
    .tdo(tdo),
    .clk_user(clk_user),
    .tms_user(tms_user),
    .tdi_user(tdi_user),
    .tdo_user(tdo_user),
    .sel_user(sel_user)
  );

endmodule

    //   $display("%s", jtag_tap_i.tap_state.name);
    //   $display("%b", jtag_tap_i.IR_SR);
    //   $display("%b", jtag_tap_i.IR);
    // $display("%b", jtag_tap_i.BCN);

