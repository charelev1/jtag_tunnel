// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtap_top.h for the primary calling header

#include "Vtap_top__pch.h"
#include "Vtap_top___024root.h"

VL_ATTR_COLD void Vtap_top___024root___eval_static(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtap_top___024root___eval_final(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__stl(Vtap_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtap_top___024root___eval_phase__stl(Vtap_top___024root* vlSelf);

VL_ATTR_COLD void Vtap_top___024root___eval_settle(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtap_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("series_taps/series_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtap_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__stl(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtap_top___024root___stl_sequent__TOP__0(Vtap_top___024root* vlSelf);
VL_ATTR_COLD void Vtap_top___024root____Vm_traceActivitySetAll(Vtap_top___024root* vlSelf);

VL_ATTR_COLD void Vtap_top___024root___eval_stl(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtap_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtap_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtap_top___024root___stl_sequent__TOP__0(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0 
        = (1U & (((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                  & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR, 0x1fU)
                  : (((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                      & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                      ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR)
                      : (((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                          & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                          ? (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                                   >> 7U)) : (((0x13U 
                                                == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                               & (4U 
                                                  == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                               ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_user)
                                               : ((0xbU 
                                                   == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                                                      >> 4U))
                                                   : 0U))))));
}

VL_ATTR_COLD void Vtap_top___024root___eval_triggers__stl(Vtap_top___024root* vlSelf);

VL_ATTR_COLD bool Vtap_top___024root___eval_phase__stl(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtap_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtap_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__act(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge jtag_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__nba(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge jtag_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtap_top___024root____Vm_traceActivitySetAll(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtap_top___024root___ctor_var_reset(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->jtag_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__tms = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__tdi = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tdo0 = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_user = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR = VL_RAND_RESET_I(5);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR = VL_RAND_RESET_I(5);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN = VL_RAND_RESET_I(8);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR = VL_RAND_RESET_I(8);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR = VL_RAND_RESET_I(32);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR = VL_RAND_RESET_I(5);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR = VL_RAND_RESET_I(5);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN = VL_RAND_RESET_I(8);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR = VL_RAND_RESET_I(8);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR = VL_RAND_RESET_I(32);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR = VL_RAND_RESET_I(1);
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__jtag_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
