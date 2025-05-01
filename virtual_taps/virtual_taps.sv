/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module virtual_taps #(
  parameter int g_IR_WIDTH0 = 5,
  parameter int g_IR_WIDTH1 = 5
) (
  // JTAG main signals
  input  logic clk,
  input  logic tms,
  input  logic tdi,
  output logic tdo
);

logic sel_user;
logic clk_user;
logic tms_user;
logic tdi_user;
logic tdo_user;

logic clk_virtual;
logic tms_virtual;
logic tdi_virtual;
logic tdo_virtual;

virtual_tap_bridge bridge_i (
  // user side
  .sel_user (sel_user),
  .clk_user (clk_user),
  .tms_user (tms_user),
  .tdi_user (tdi_user),
  .tdo_user (tdo_user),
  // virtual side
  .clk_virtual(clk_virtual),
  .tms_virtual(tms_virtual),
  .tdi_virtual(tdi_virtual),
  .tdo_virtual(tdo_virtual)
);

// Physical tap
tap_top #(
  .g_IR_WIDTH(g_IR_WIDTH0),
  .IDCODE(32'hDEADBEEF)
  ) tap_0 (
  // Physical interface
  .clk      (clk),
  .tms      (tms),
  .tdi      (tdi),
  .tdo      (tdo),
  // User interface
  .sel_user (sel_user),
  .clk_user (clk_user),
  .tms_user (tms_user),
  .tdi_user (tdi_user),
  .tdo_user (tdo_user) 
);




// Virtual tap
tap_top #(
  .g_IR_WIDTH(g_IR_WIDTH1),
  .IDCODE(32'hABAD_BABE)
) tap_1 (
   .clk     (clk_virtual),
   .tms     (tms_virtual),
   .tdi     (tdi_virtual),
   .tdo     (tdo_virtual)
);
  
endmodule
