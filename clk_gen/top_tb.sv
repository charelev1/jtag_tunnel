/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module top_tb;

  logic clk;
  logic rst;
  logic data;

  parameter period = 10; // 100MHz Clock

  // Generate Clock
  always begin
    #(period/2) clk = 0;
    #(period/2) clk = 1;
  end

  initial begin 
    $dumpfile("wave.vcd");      // Name of VCD file
    $dumpvars(0, top_module);   // Dump all signals in top_module
    rst = 0;

    #period rst = 1;
    #(2*period) rst = 0;

    #(period -1) data =0;
    #period data =1;
    $display("%t %b", $time, data);
    #period data =1;
    #period data =0;
    #period data =1;
    #period data =0;
    #period data =0;
    #period data =1;
    #period data =1;
    #period data =0;
    #period data =1;

    $finish;
  end


  top top_i (
    .rst(rst),
    .clk_in(clk),
    .data_in(data)
  );

endmodule

    //   $display("%s", jtag_tap_i.tap_state.name);
    //   $display("%b", jtag_tap_i.IR_SR);
    //   $display("%b", jtag_tap_i.IR);
    // $display("%b", jtag_tap_i.BCN);

