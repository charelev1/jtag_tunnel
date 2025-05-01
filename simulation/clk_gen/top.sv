/* verilator lint_off PINMISSING */
`timescale 1ns / 10ps

module top #(
) (
  input  logic rst,
  input  logic clk_in,
  input  logic data_in,
  output logic clk_out,
  output logic data_out
);


  always_ff @(negedge clk_in) begin : clkdiv2
    if(rst) begin
     clk_out <= 0;
    end else begin
     clk_out <= ~clk_out;
    end 
  end

  // clkin   to clk_out
  // data_in to data_out
  logic data_0;
  always_ff @(posedge clk_in) begin : test
    if(rst) begin
      data_0 <= 0;
    end else begin
      data_0 <= data_in;
    end
  end


  logic data_1;
  always_ff @(posedge clk_out) begin
    if(rst) begin
      data_1 <= 0;
    end else begin
      data_1 <= data_0;
    end
  end
  
  assign data_out = data_1;

  // clkout  to clk_in
  // data_2  to data_3

  logic data_2;
  always_ff @(posedge clk_out) begin
    if(rst) begin
      data_2 <= 0;
    end else begin
      data_2 <= data_1;
    end
  end

  logic data_3;
  always_ff @(posedge clk_in) begin
    if(rst) begin
      data_3 <= 0;
    end else begin
      data_3 <= data_2;
    end
  end




endmodule
