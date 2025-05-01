// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_tb.h for the primary calling header

#include "Vvirtual_tb__pch.h"
#include "Vvirtual_tb___024root.h"

VL_ATTR_COLD void Vvirtual_tb___024root___eval_static(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvirtual_tb___024root___eval_final(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvirtual_tb___024root___eval_settle(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvirtual_tb___024root___dump_triggers__act(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge virtual_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge virtual_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge virtual_tb.jtag_taps_i.bridge_i.clk_gen)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge virtual_tb.jtag_taps_i.bridge_i.clk_gen_d)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge virtual_tb.jtag_taps_i.bridge_i.clk_gen_d)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvirtual_tb___024root___dump_triggers__nba(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge virtual_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge virtual_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge virtual_tb.jtag_taps_i.bridge_i.clk_gen)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge virtual_tb.jtag_taps_i.bridge_i.clk_gen_d)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge virtual_tb.jtag_taps_i.bridge_i.clk_gen_d)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvirtual_tb___024root___ctor_var_reset(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->virtual_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__tms = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__tdi = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq = VL_RAND_RESET_I(5);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d2 = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR = VL_RAND_RESET_I(5);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR = VL_RAND_RESET_I(5);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN = VL_RAND_RESET_I(8);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR = VL_RAND_RESET_I(8);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR = VL_RAND_RESET_I(32);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_neg = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR = VL_RAND_RESET_I(5);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR = VL_RAND_RESET_I(5);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN = VL_RAND_RESET_I(8);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR = VL_RAND_RESET_I(8);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR = VL_RAND_RESET_I(32);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_neg = VL_RAND_RESET_I(1);
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__virtual_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
