// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_tb.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_TB___024ROOT_H_
#define VERILATED_VVIRTUAL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vvirtual_tb___024unit;


class Vvirtual_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vvirtual_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ virtual_tb__DOT__clk;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d;
    CData/*0:0*/ virtual_tb__DOT__tms;
    CData/*0:0*/ virtual_tb__DOT__tdi;
    CData/*4:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d2;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen;
    CData/*4:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    CData/*4:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    CData/*7:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN;
    CData/*7:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_neg;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user;
    CData/*4:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    CData/*4:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    CData/*7:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN;
    CData/*7:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_neg;
    CData/*0:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0;
    CData/*4:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq;
    CData/*0:0*/ __Vtrigprevexpr___TOP__virtual_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvirtual_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvirtual_tb___024root(Vvirtual_tb__Syms* symsp, const char* v__name);
    ~Vvirtual_tb___024root();
    VL_UNCOPYABLE(Vvirtual_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
