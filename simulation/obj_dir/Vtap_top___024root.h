// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtap_top.h for the primary calling header

#ifndef VERILATED_VTAP_TOP___024ROOT_H_
#define VERILATED_VTAP_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtap_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtap_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ jtag_tb__DOT__clk;
    CData/*0:0*/ jtag_tb__DOT__tms;
    CData/*0:0*/ jtag_tb__DOT__tdi;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tdo0;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_user;
    CData/*4:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    CData/*4:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    CData/*7:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN;
    CData/*7:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user;
    CData/*4:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    CData/*4:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    CData/*7:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN;
    CData/*7:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR;
    CData/*0:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__jtag_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtap_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtap_top___024root(Vtap_top__Syms* symsp, const char* v__name);
    ~Vtap_top___024root();
    VL_UNCOPYABLE(Vtap_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
