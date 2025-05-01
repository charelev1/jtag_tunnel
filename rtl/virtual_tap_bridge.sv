/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module virtual_tap_bridge #(
) (
  // JTAG main signals
  input  logic sel_user,
  input  logic clk_user,
  input  logic tms_user,
  input  logic tdi_user,
  output logic tdo_user,
  // virtual side
  output logic clk_virtual,
  output logic tms_virtual,
  output logic tdi_virtual,
  input  logic tdo_virtual
);


  logic clk_gen, clk_gen_d, rst;
  logic[4:0] rstq; 
  
  always_ff @(posedge clk_user) begin : reset_pipeline
      rstq[0] <= tms_user;
      rstq[1] <= rstq[0];
      rstq[2] <= rstq[1];
      rstq[3] <= rstq[2];
      rstq[4] <= rstq[3];
  end

  assign rst  = &rstq;  

  always_ff @(negedge clk_user) begin : clkdiv2
    if(rst) begin
      clk_gen <= 1;
    end else begin
      if (sel_user) begin
        clk_gen <= ~clk_gen;
      end
    end 
  end

  always_ff @(negedge clk_user) begin : clkgend
    clk_gen_d <= clk_gen;
  end

  // Synchronize and delay the tdi_user signal
  logic tdi_user_d;
  logic tdi_user_d2;

  always_ff @(posedge clk_user) begin : test
    if(rst) begin
      tdi_user_d <= 0;
      tdi_user_d2<= 0;
    end else begin
      tdi_user_d <= tdi_user;
      tdi_user_d2<= tdi_user_d;
    end
  end

  logic tms_gen;
  logic tdi_gen;

  always_ff @(posedge clk_gen) begin
    if(rst) begin
      tms_gen <= 0;
      tdi_gen <= 0;
    end else begin
      tdi_gen <= tdi_user_d;
      tms_gen <= tdi_user_d2;
    end
  end

  assign clk_virtual = clk_gen_d;
  assign tms_virtual = tms_gen;
  assign tdi_virtual = tdi_gen;

  assign tdo_user = tdo_virtual;

endmodule
