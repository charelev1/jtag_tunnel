`timescale 1ns / 10ps

module tap_top #(
  parameter int g_IR_WIDTH = 5,
  parameter int g_IDCODE_WIDTH = 32,
  parameter logic [g_IDCODE_WIDTH-1: 0] IDCODE = 32'hCAFE_CAFE
) (
  // JTAG main signals
  input  logic clk,
  input  logic tms,
  input  logic tdi,
  output logic tdo,
  // User  expansion port
  output logic sel_user,
  output logic clk_user,
  output logic tms_user,
  output logic tdi_user,
  input  logic tdo_user
);

  enum { TEST_LOGIC_RESET, 
         RUN_TEST_IDLE   , 
         SELECT_DR       , 
         CAPTURE_DR      , 
         SHIFT_DR        , 
         EXIT1_DR        , 
         PAUSE_DR        , 
         EXIT2_DR        , 
         UPDATE_DR       , 
         SELECT_IR       , 
         CAPTURE_IR      , 
         SHIFT_IR        , 
         EXIT1_IR        , 
         PAUSE_IR        , 
         EXIT2_IR        , 
         UPDATE_IR }  tap_state;

  localparam logic [g_IR_WIDTH-1: 0] IDCODE_ADDR = 5'b11001;
  localparam logic [g_IR_WIDTH-1: 0] BYPASS_ADDR = 5'b11111;
  localparam logic [g_IR_WIDTH-1: 0] BCN_ADDR    = 5'b10101;
  localparam logic [g_IR_WIDTH-1: 0] USER_ADDR   = 5'b10011;

  localparam int g_BCN_WIDTH    =  8;

  logic [g_IR_WIDTH-1:  0]    IR;
  logic [g_IR_WIDTH-1:  0]    IR_SR;
  logic [g_BCN_WIDTH-1: 0]    BCN;
  logic [g_BCN_WIDTH-1: 0]    BCN_SR;
  logic [g_IDCODE_WIDTH-1: 0] IDCODE_SR;
  logic                       BYPASS_SR;

  logic IDCODE_selected;
  logic BYPASS_selected;
  logic BCN_selected;
  logic USER_selected;

  assign IDCODE_selected = (IR == IDCODE_ADDR);
  assign BYPASS_selected = (IR == BYPASS_ADDR);
  assign BCN_selected    = (IR == BCN_ADDR);
  assign USER_selected   = (IR == USER_ADDR);


  always_ff @(posedge clk) begin : tapFSM
    case (tap_state)
      TEST_LOGIC_RESET: tap_state <= (~tms)? RUN_TEST_IDLE:   tap_state; 
      RUN_TEST_IDLE   : tap_state <= (tms)? SELECT_DR:        tap_state; 
      SELECT_DR       : tap_state <= (tms)? SELECT_IR:        CAPTURE_DR; 
      CAPTURE_DR      : tap_state <= (tms)? EXIT1_DR:         SHIFT_DR;
      SHIFT_DR        : tap_state <= (tms)? EXIT1_DR:         tap_state;
      EXIT1_DR        : tap_state <= (tms)? UPDATE_DR:        PAUSE_DR;
      PAUSE_DR        : tap_state <= (tms)? EXIT2_DR:         tap_state;
      EXIT2_DR        : tap_state <= (tms)? UPDATE_DR:        SHIFT_DR;
      UPDATE_DR       : tap_state <= (tms)? SELECT_DR:        RUN_TEST_IDLE;
      SELECT_IR       : tap_state <= (tms)? TEST_LOGIC_RESET: CAPTURE_IR;
      CAPTURE_IR      : tap_state <= (tms)? EXIT1_IR:         SHIFT_IR;
      SHIFT_IR        : tap_state <= (tms)? EXIT1_IR:         tap_state;
      EXIT1_IR        : tap_state <= (tms)? UPDATE_IR:        PAUSE_IR;
      PAUSE_IR        : tap_state <= (tms)? EXIT2_IR:         tap_state;
      EXIT2_IR        : tap_state <= (tms)? UPDATE_IR:        SHIFT_IR;
      UPDATE_IR       : tap_state <= (tms)? SELECT_DR:        RUN_TEST_IDLE; 
      default         : tap_state <= TEST_LOGIC_RESET;
    endcase
  end

  always_ff @(posedge clk) begin : instruction_register
    if (tap_state == CAPTURE_IR) begin
      IR_SR <= IR;
    end

    if (tap_state == SHIFT_IR) begin
      IR_SR[0] <= tdi;
      for (int i = 1; i < g_IR_WIDTH; i++) begin
        IR_SR[i] <= IR_SR[i-1];
      end
    end

    if (tap_state == UPDATE_IR) begin
      IR <= IR_SR;
    end
  end

  always_ff @(posedge clk) begin : idcode_register
    if (IDCODE_selected) begin
      if (tap_state == CAPTURE_DR) begin
        IDCODE_SR <= IDCODE;
      end

      if (tap_state == SHIFT_DR) begin
        IDCODE_SR[0] <= tdi;
        for (int i = 1; i < g_IDCODE_WIDTH; i++) begin
          IDCODE_SR[i] <= IDCODE_SR[i-1];
        end
      end
    end
  end

  always_ff @(posedge clk) begin : bypass_register
    if (BYPASS_selected) begin
      if (tap_state == CAPTURE_DR) begin
        BYPASS_SR <= 0;
      end

      if (tap_state == SHIFT_DR) begin
        BYPASS_SR <= tdi;
      end
    end
  end

  always_ff @(posedge clk) begin : bcn_register
    if (BCN_selected) begin
      if (tap_state == CAPTURE_DR) begin
        BCN_SR <= BCN;
      end

      if (tap_state == SHIFT_DR) begin
        BCN_SR[0] <= tdi;
        for (int i = 1; i < g_BCN_WIDTH; i++) begin
          BCN_SR[i] <= BCN_SR[i-1];
        end
      end

      if (tap_state == UPDATE_DR) begin
        BCN <= BCN_SR;
      end
    end
  end


  // User mode (expose the output)
  assign sel_user = USER_selected;
  assign clk_user = clk;
  assign tms_user = tms;
  assign tdi_user = tdi;

  logic tdo_pos;
  logic tdo_neg;
  // assign tdo = (IDCODE_selected && tap_state == SHIFT_DR)? IDCODE_SR[g_IDCODE_WIDTH-1]: 
  assign tdo_pos = (IDCODE_selected && tap_state == SHIFT_DR)? IDCODE_SR[g_IDCODE_WIDTH-1]: 
                   (BYPASS_selected && tap_state == SHIFT_DR)? BYPASS_SR:
                   (BCN_selected    && tap_state == SHIFT_DR)? BCN_SR[g_BCN_WIDTH-1]: 
                   (USER_selected   && tap_state == SHIFT_DR)? tdo_user:
                   (tap_state == SHIFT_IR)                   ? IR_SR[g_IR_WIDTH-1]:
                   0;

  // Delay tdo_pos by half a cycle (output on negedge)
  always_ff @(negedge clk) begin: tdo_delay
    tdo_neg <= tdo_pos;  // Latch on falling edge of TCK
  end

  assign tdo = tdo_neg;
  
endmodule
