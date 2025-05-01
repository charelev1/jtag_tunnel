/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module series_taps #(
  parameter int g_IR_WIDTH0 = 5,
  parameter int g_IR_WIDTH1 = 5
) (
  // JTAG main signals
  input  logic clk,
  input  logic tms,
  input  logic tdi,
  output logic tdo
);

logic tdo0;

tap_top #(
  .g_IR_WIDTH(g_IR_WIDTH0),
  .IDCODE(32'hDEADBEEF)
) tap_0 (
   .clk     (clk),
   .tms     (tms),
   .tdi     (tdi),
   .tdo     (tdo0)
);

tap_top #(
  .g_IR_WIDTH(g_IR_WIDTH1),
  .IDCODE(32'hDEADDEAD)
) tap_1 (
   .clk     (clk),
   .tms     (tms),
   .tdi     (tdo0),
   .tdo     (tdo)
);
  
endmodule
