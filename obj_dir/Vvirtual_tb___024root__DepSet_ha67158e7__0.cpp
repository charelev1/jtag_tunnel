// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_tb.h for the primary calling header

#include "Vvirtual_tb__pch.h"
#include "Vvirtual_tb___024root.h"

VlCoroutine Vvirtual_tb___024root___eval_initial__TOP__Vtiming__0(Vvirtual_tb___024root* vlSelf);
VlCoroutine Vvirtual_tb___024root___eval_initial__TOP__Vtiming__1(Vvirtual_tb___024root* vlSelf);
VlCoroutine Vvirtual_tb___024root___eval_initial__TOP__Vtiming__2(Vvirtual_tb___024root* vlSelf);

void Vvirtual_tb___024root___eval_initial(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvirtual_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vvirtual_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vvirtual_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__clk__0 
        = vlSelfRef.virtual_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen__0 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
    vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d__0 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d;
}

VL_INLINE_OPT VlCoroutine Vvirtual_tb___024root___eval_initial__TOP__Vtiming__2(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "tb/virtual_tb.sv", 
                                             16);
        vlSelfRef.virtual_tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "tb/virtual_tb.sv", 
                                             17);
        vlSelfRef.virtual_tb__DOT__clk = 0U;
    }
}

void Vvirtual_tb___024root___eval_act(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vvirtual_tb___024root___nba_sequent__TOP__0(Vvirtual_tb___024root* vlSelf);
void Vvirtual_tb___024root___nba_sequent__TOP__1(Vvirtual_tb___024root* vlSelf);
void Vvirtual_tb___024root___nba_sequent__TOP__2(Vvirtual_tb___024root* vlSelf);
void Vvirtual_tb___024root___nba_sequent__TOP__3(Vvirtual_tb___024root* vlSelf);
void Vvirtual_tb___024root___nba_sequent__TOP__4(Vvirtual_tb___024root* vlSelf);
void Vvirtual_tb___024root___nba_sequent__TOP__5(Vvirtual_tb___024root* vlSelf);

void Vvirtual_tb___024root___eval_nba(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvirtual_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvirtual_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvirtual_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvirtual_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvirtual_tb___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvirtual_tb___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vvirtual_tb___024root___nba_sequent__TOP__0(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state = 0;
    CData/*4:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR = 0;
    CData/*4:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR = 0;
    IData/*31:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR = 0;
    CData/*7:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR = 0;
    // Body
    vlSelfRef.__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    if ((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        if ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR = 0xdeadbeefU;
        }
        if ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0x20U;
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                = ((0xfffffff8U & __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR) 
                   | ((4U & (vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                             << 1U)) | ((2U & (vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.virtual_tb__DOT__tdi))));
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                = ((7U & __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR) 
                   | (0xfffffff8U & (vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                                     << 1U)));
        }
    }
    if ((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        if ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
                = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN;
        }
        if ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 8U;
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
                = ((0xf8U & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR)) 
                   | ((4U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                             << 1U)) | ((2U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.virtual_tb__DOT__tdi))));
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
                = ((7U & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR)) 
                   | (0xf8U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                               << 1U)));
        }
        if ((8U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN 
                = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
        }
    }
    vlSelfRef.__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq 
        = ((0x18U & (IData)(vlSelfRef.__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq)) 
           | ((4U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq) 
                     << 1U)) | ((2U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq) 
                                       << 1U)) | (IData)(vlSelfRef.virtual_tb__DOT__tms))));
    vlSelfRef.__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq 
        = ((7U & (IData)(vlSelfRef.__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq)) 
           | (0x18U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq) 
                       << 1U)));
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state 
        = (((((((((0U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state) 
                  | (1U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                 | (2U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                | (3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
               | (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
              | (5U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
             | (6U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
            | (7U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
            ? ((0U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                    ? vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state
                    : 1U) : ((1U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                              ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                  ? 2U : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                              : ((2U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                  ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                      ? 9U : 3U) : 
                                 ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                   ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                       ? 5U : 4U) : 
                                  ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                    ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                        ? 5U : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                    : ((5U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                        ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                            ? 8U : 6U)
                                        : ((6U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                            ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                ? 7U
                                                : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                            : ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                ? 8U
                                                : 4U))))))))
            : (((((((((8U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state) 
                      | (9U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                     | (0xaU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                    | (0xbU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                   | (0xcU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                  | (0xdU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                 | (0xeU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                | (0xfU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                ? ((8U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                    ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                        ? 2U : 1U) : ((9U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                       ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                           ? 0U : 0xaU)
                                       : ((0xaU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                           ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                               ? 0xcU
                                               : 0xbU)
                                           : ((0xbU 
                                               == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                               ? ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                   ? 0xcU
                                                   : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                               : ((0xcU 
                                                   == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                    ? 0xfU
                                                    : 0xdU)
                                                   : 
                                                  ((0xdU 
                                                    == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                     ? 0xeU
                                                     : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                    : 
                                                   ((0xeU 
                                                     == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                     ? 
                                                    ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                      ? 0xfU
                                                      : 0xbU)
                                                     : 
                                                    ((IData)(vlSelfRef.virtual_tb__DOT__tms)
                                                      ? 2U
                                                      : 1U))))))))
                : 0U));
    if ((0xaU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    }
    if ((0xbU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 5U;
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x1eU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | (IData)(vlSelfRef.virtual_tb__DOT__tdi));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x1dU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 1U));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                     >> 1U));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x1bU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 2U));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                     >> 2U));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x17U & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 3U));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                     >> 3U));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0xfU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 4U));
    }
    if ((0xfU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR 
            = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    }
    if ((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        if ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR = 0U;
        }
        if ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR 
                = vlSelfRef.virtual_tb__DOT__tdi;
        }
    }
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
}

VL_INLINE_OPT void Vvirtual_tb___024root___nba_sequent__TOP__1(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen = 0;
    // Body
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
    if ((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))) {
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen = 1U;
    } else if ((0x13U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen 
            = (1U & (~ (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen)));
    }
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_neg 
        = (1U & (((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                  & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR, 0x1fU)
                  : (((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                      & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                      ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR)
                      : (((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                          & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                          ? (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                                   >> 7U)) : (((0x13U 
                                                == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                               & (4U 
                                                  == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                               ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_neg)
                                               : ((0xbU 
                                                   == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                                                      >> 4U))
                                                   : 0U))))));
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
}

VL_INLINE_OPT void Vvirtual_tb___024root___nba_sequent__TOP__2(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state = 0;
    CData/*4:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR = 0;
    CData/*4:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR = 0;
    IData/*31:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR = 0;
    CData/*7:0*/ __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR = 0;
    // Body
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    if ((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))) {
        if ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR = 0xabadbabeU;
        }
        if ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0x20U;
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                = ((0xfffffff8U & __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR) 
                   | ((4U & (vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                             << 1U)) | ((2U & (vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen))));
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                = ((7U & __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR) 
                   | (0xfffffff8U & (vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                                     << 1U)));
        }
    }
    if ((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))) {
        if ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
                = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN;
        }
        if ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 8U;
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
                = ((0xf8U & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR)) 
                   | ((4U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                             << 1U)) | ((2U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen))));
            __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
                = ((7U & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR)) 
                   | (0xf8U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                               << 1U)));
        }
        if ((8U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN 
                = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
        }
    }
    __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state 
        = (((((((((0U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state) 
                  | (1U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                 | (2U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                | (3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
               | (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
              | (5U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
             | (6U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
            | (7U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
            ? ((0U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                    ? vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state
                    : 1U) : ((1U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                              ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                  ? 2U : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                              : ((2U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                  ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                      ? 9U : 3U) : 
                                 ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                   ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                       ? 5U : 4U) : 
                                  ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                    ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                        ? 5U : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                    : ((5U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                        ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                            ? 8U : 6U)
                                        : ((6U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                            ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                ? 7U
                                                : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                            : ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                ? 8U
                                                : 4U))))))))
            : (((((((((8U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state) 
                      | (9U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                     | (0xaU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                    | (0xbU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                   | (0xcU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                  | (0xdU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                 | (0xeU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                | (0xfU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                ? ((8U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                    ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                        ? 2U : 1U) : ((9U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                       ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                           ? 0U : 0xaU)
                                       : ((0xaU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                           ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                               ? 0xcU
                                               : 0xbU)
                                           : ((0xbU 
                                               == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                               ? ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                   ? 0xcU
                                                   : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                               : ((0xcU 
                                                   == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                    ? 0xfU
                                                    : 0xdU)
                                                   : 
                                                  ((0xdU 
                                                    == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                     ? 0xeU
                                                     : vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                    : 
                                                   ((0xeU 
                                                     == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                     ? 
                                                    ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                      ? 0xfU
                                                      : 0xbU)
                                                     : 
                                                    ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen)
                                                      ? 2U
                                                      : 1U))))))))
                : 0U));
    if ((0xaU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    }
    if ((0xbU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 5U;
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x1eU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x1dU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 1U));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                     >> 1U));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x1bU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 2U));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                     >> 2U));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x17U & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 3U));
        vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                     >> 3U));
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0xfU & (IData)(__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 4U));
    }
    if ((0xfU == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
        __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR 
            = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    }
    if ((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))) {
        if ((3U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR = 0U;
        }
        if ((4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR 
                = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen;
        }
    }
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state 
        = __Vdly__virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
}

VL_INLINE_OPT void Vvirtual_tb___024root___nba_sequent__TOP__3(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_neg 
        = (1U & (((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                  & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR, 0x1fU)
                  : (((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                      & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                      ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR)
                      : (((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                          & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                          ? (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                   >> 7U)) : (((0x13U 
                                                == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                               & (4U 
                                                  == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                               ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user)
                                               : ((0xbU 
                                                   == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                                                      >> 4U))
                                                   : 0U))))));
}

VL_INLINE_OPT void Vvirtual_tb___024root___nba_sequent__TOP__4(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen 
        = ((1U & (~ (IData)((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))))) 
           && (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d2));
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen 
        = ((1U & (~ (IData)((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))))) 
           && (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d));
}

VL_INLINE_OPT void Vvirtual_tb___024root___nba_sequent__TOP__5(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d2 
        = ((1U & (~ (IData)((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))))) 
           && (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d));
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d 
        = ((1U & (~ (IData)((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))))) 
           && (IData)(vlSelfRef.virtual_tb__DOT__tdi));
    vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq 
        = vlSelfRef.__Vdly__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq;
}

void Vvirtual_tb___024root___timing_resume(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vvirtual_tb___024root___eval_triggers__act(Vvirtual_tb___024root* vlSelf);

bool Vvirtual_tb___024root___eval_phase__act(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvirtual_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvirtual_tb___024root___timing_resume(vlSelf);
        Vvirtual_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvirtual_tb___024root___eval_phase__nba(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvirtual_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvirtual_tb___024root___dump_triggers__nba(Vvirtual_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvirtual_tb___024root___dump_triggers__act(Vvirtual_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vvirtual_tb___024root___eval(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vvirtual_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/virtual_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vvirtual_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/virtual_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvirtual_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvirtual_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvirtual_tb___024root___eval_debug_assertions(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
