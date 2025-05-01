// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtap_top.h for the primary calling header

#include "Vtap_top__pch.h"
#include "Vtap_top___024root.h"

VlCoroutine Vtap_top___024root___eval_initial__TOP__Vtiming__0(Vtap_top___024root* vlSelf);
VlCoroutine Vtap_top___024root___eval_initial__TOP__Vtiming__1(Vtap_top___024root* vlSelf);

void Vtap_top___024root___eval_initial(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtap_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtap_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__jtag_tb__DOT__clk__0 
        = vlSelfRef.jtag_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtap_top___024root___eval_initial__TOP__Vtiming__0(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlQueue<CData/*0:0*/> jtag_tb__DOT__dr_stream;
    jtag_tb__DOT__dr_stream.atDefault() = 0;
    VlQueue<CData/*0:0*/> jtag_tb__DOT__ir_stream_bypass;
    jtag_tb__DOT__ir_stream_bypass.atDefault() = 0;
    VlQueue<CData/*0:0*/> jtag_tb__DOT__ir_stream_idcode;
    jtag_tb__DOT__ir_stream_idcode.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vtask_jtag_tb__DOT__loadIR__0__stream;
    __Vtask_jtag_tb__DOT__loadIR__0__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i;
    __Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_jtag_tb__DOT__printStream__1__stream;
    __Vtask_jtag_tb__DOT__printStream__1__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i;
    __Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_jtag_tb__DOT__loadDR__3__stream;
    __Vtask_jtag_tb__DOT__loadDR__3__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i;
    __Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_jtag_tb__DOT__printStream__4__stream;
    __Vtask_jtag_tb__DOT__printStream__4__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i;
    __Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_jtag_tb__DOT__getDR__6__stream;
    __Vtask_jtag_tb__DOT__getDR__6__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__getDR__6__size;
    __Vtask_jtag_tb__DOT__getDR__6__size = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i;
    __Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_jtag_tb__DOT__printStream__8__stream;
    __Vtask_jtag_tb__DOT__printStream__8__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i;
    __Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i = 0;
    // Body
    jtag_tb__DOT__ir_stream_bypass = VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                   VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>{})))));
    jtag_tb__DOT__ir_stream_idcode = VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                   VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>{})))));
    __Vtask_jtag_tb__DOT__loadIR__0__stream = VlQueue<CData/*0:0*/>::consCC(jtag_tb__DOT__ir_stream_idcode, 
                                                                            VlQueue<CData/*0:0*/>::consCC(jtag_tb__DOT__ir_stream_bypass, 
                                                                                VlQueue<CData/*0:0*/>{}));
    VL_WRITEF_NX("loadIR: ",0);
    __Vtask_jtag_tb__DOT__printStream__1__stream = __Vtask_jtag_tb__DOT__loadIR__0__stream;
    __Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i, __Vtask_jtag_tb__DOT__printStream__1__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_jtag_tb__DOT__printStream__1__stream.at(__Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i));
        __Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_jtag_tb__DOT__printStream__1__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         56);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         58);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         60);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         62);
    if (VL_LTS_III(32, 0U, __Vtask_jtag_tb__DOT__loadIR__0__stream.size())) {
        vlSelfRef.jtag_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "series_taps/series_tb.sv", 
                                             67);
        __Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i, __Vtask_jtag_tb__DOT__loadIR__0__stream.size())) {
            vlSelfRef.jtag_tb__DOT__tms = (__Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i 
                                           == (__Vtask_jtag_tb__DOT__loadIR__0__stream.size() 
                                               - (IData)(1U)));
            vlSelfRef.jtag_tb__DOT__tdi = __Vtask_jtag_tb__DOT__loadIR__0__stream.at(__Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "series_taps/series_tb.sv", 
                                                 72);
            __Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i 
                = ((IData)(1U) + __Vtask_jtag_tb__DOT__loadIR__0__unnamedblk3__DOT__i);
        }
    }
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         78);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         80);
    VL_WRITEF_NX("%b\n%b\n",0,5,vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR,
                 5,(IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR));
    __Vtask_jtag_tb__DOT__loadDR__3__stream = VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                            VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>{})));
    VL_WRITEF_NX("loadDR: ",0);
    __Vtask_jtag_tb__DOT__printStream__4__stream = __Vtask_jtag_tb__DOT__loadDR__3__stream;
    __Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i, __Vtask_jtag_tb__DOT__printStream__4__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_jtag_tb__DOT__printStream__4__stream.at(__Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i));
        __Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_jtag_tb__DOT__printStream__4__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         97);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         99);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         101);
    if (VL_LTS_III(32, 0U, __Vtask_jtag_tb__DOT__loadDR__3__stream.size())) {
        vlSelfRef.jtag_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "series_taps/series_tb.sv", 
                                             106);
        __Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i, __Vtask_jtag_tb__DOT__loadDR__3__stream.size())) {
            vlSelfRef.jtag_tb__DOT__tms = (__Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i 
                                           == (__Vtask_jtag_tb__DOT__loadDR__3__stream.size() 
                                               - (IData)(1U)));
            vlSelfRef.jtag_tb__DOT__tdi = __Vtask_jtag_tb__DOT__loadDR__3__stream.at(__Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "series_taps/series_tb.sv", 
                                                 111);
            __Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_jtag_tb__DOT__loadDR__3__unnamedblk5__DOT__i);
        }
    }
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         117);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         119);
    __Vtask_jtag_tb__DOT__getDR__6__size = 0x21U;
    __Vtask_jtag_tb__DOT__getDR__6__stream.renew(__Vtask_jtag_tb__DOT__getDR__6__size);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    vlSelfRef.jtag_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         34);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         129);
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         131);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         133);
    if (VL_LTS_III(32, 0U, __Vtask_jtag_tb__DOT__getDR__6__stream.size())) {
        vlSelfRef.jtag_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "series_taps/series_tb.sv", 
                                             138);
        __Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i, __Vtask_jtag_tb__DOT__getDR__6__stream.size())) {
            vlSelfRef.jtag_tb__DOT__tms = (__Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i 
                                           == (__Vtask_jtag_tb__DOT__getDR__6__stream.size() 
                                               - (IData)(1U)));
            vlSelfRef.jtag_tb__DOT__tdi = 0U;
            __Vtask_jtag_tb__DOT__getDR__6__stream.atWrite(__Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i) 
                = (1U & (((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                          & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                          ? VL_SHIFTR_III(32,32,32, vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR, 0x1fU)
                          : (((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                              & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                              ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR)
                              : (((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                  & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                  ? (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                           >> 7U)) : 
                                 (((0x13U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                   & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                   ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user)
                                   : ((0xbU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                       ? (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                                                >> 4U))
                                       : 0U))))));
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "series_taps/series_tb.sv", 
                                                 144);
            __Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_jtag_tb__DOT__getDR__6__unnamedblk6__DOT__i);
        }
    }
    vlSelfRef.jtag_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         150);
    vlSelfRef.jtag_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "series_taps/series_tb.sv", 
                                         152);
    jtag_tb__DOT__dr_stream = __Vtask_jtag_tb__DOT__getDR__6__stream;
    VL_WRITEF_NX("getDR: ",0);
    __Vtask_jtag_tb__DOT__printStream__8__stream = jtag_tb__DOT__dr_stream;
    __Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i, __Vtask_jtag_tb__DOT__printStream__8__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_jtag_tb__DOT__printStream__8__stream.at(__Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i));
        __Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_jtag_tb__DOT__printStream__8__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    VL_FINISH_MT("series_taps/series_tb.sv", 179, "");
}

VL_INLINE_OPT VlCoroutine Vtap_top___024root___eval_initial__TOP__Vtiming__1(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "series_taps/series_tb.sv", 
                                             15);
        vlSelfRef.jtag_tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "series_taps/series_tb.sv", 
                                             16);
        vlSelfRef.jtag_tb__DOT__clk = 0U;
    }
}

void Vtap_top___024root___eval_act(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtap_top___024root___nba_sequent__TOP__0(Vtap_top___024root* vlSelf);

void Vtap_top___024root___eval_nba(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtap_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtap_top___024root___nba_sequent__TOP__0(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state = 0;
    CData/*4:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR = 0;
    CData/*4:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR = 0;
    IData/*31:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR = 0;
    CData/*7:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR = 0;
    IData/*31:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state = 0;
    CData/*4:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR = 0;
    CData/*4:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR = 0;
    IData/*31:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR = 0;
    CData/*7:0*/ __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR = 0;
    // Body
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR 
        = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    if ((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))) {
        if ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR = 0xdeaddeadU;
        }
        if ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0x20U;
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                = ((0xfffffff8U & __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR) 
                   | ((4U & (vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                             << 1U)) | ((2U & (vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0))));
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                = ((7U & __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR) 
                   | (0xfffffff8U & (vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
                                     << 1U)));
        }
    }
    if ((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))) {
        if ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
                = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN;
        }
        if ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 8U;
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
                = ((0xf8U & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR)) 
                   | ((4U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                             << 1U)) | ((2U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0))));
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
                = ((7U & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR)) 
                   | (0xf8U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                               << 1U)));
        }
        if ((8U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN 
                = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
        }
    }
    if ((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        if ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR = 0xdeadbeefU;
        }
        if ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i = 0x20U;
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                = ((0xfffffff8U & __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR) 
                   | ((4U & (vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                             << 1U)) | ((2U & (vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.jtag_tb__DOT__tdi))));
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                = ((7U & __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR) 
                   | (0xfffffff8U & (vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
                                     << 1U)));
        }
    }
    if ((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        if ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
                = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN;
        }
        if ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i = 8U;
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
                = ((0xf8U & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR)) 
                   | ((4U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                             << 1U)) | ((2U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                                               << 1U)) 
                                        | (IData)(vlSelfRef.jtag_tb__DOT__tdi))));
            __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
                = ((7U & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR)) 
                   | (0xf8U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                               << 1U)));
        }
        if ((8U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN 
                = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
        }
    }
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state 
        = (((((((((0U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state) 
                  | (1U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                 | (2U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                | (3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
               | (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
              | (5U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
             | (6U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
            | (7U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
            ? ((0U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                    ? vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state
                    : 1U) : ((1U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                              ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                  ? 2U : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                              : ((2U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                  ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                      ? 9U : 3U) : 
                                 ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                   ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                       ? 5U : 4U) : 
                                  ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                    ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                        ? 5U : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                    : ((5U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                        ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                            ? 8U : 6U)
                                        : ((6U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                            ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                ? 7U
                                                : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                            : ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                ? 8U
                                                : 4U))))))))
            : (((((((((8U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state) 
                      | (9U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                     | (0xaU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                    | (0xbU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                   | (0xcU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                  | (0xdU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                 | (0xeU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) 
                | (0xfU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                ? ((8U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                    ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                        ? 2U : 1U) : ((9U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                       ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                           ? 0U : 0xaU)
                                       : ((0xaU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                           ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                               ? 0xcU
                                               : 0xbU)
                                           : ((0xbU 
                                               == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                               ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                   ? 0xcU
                                                   : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                               : ((0xcU 
                                                   == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                    ? 0xfU
                                                    : 0xdU)
                                                   : 
                                                  ((0xdU 
                                                    == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                     ? 0xeU
                                                     : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                    : 
                                                   ((0xeU 
                                                     == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                     ? 
                                                    ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                      ? 0xfU
                                                      : 0xbU)
                                                     : 
                                                    ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                      ? 2U
                                                      : 1U))))))))
                : 0U));
    __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state 
        = (((((((((0U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state) 
                  | (1U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                 | (2U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                | (3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
               | (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
              | (5U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
             | (6U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
            | (7U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
            ? ((0U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                    ? vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state
                    : 1U) : ((1U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                              ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                  ? 2U : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                              : ((2U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                  ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                      ? 9U : 3U) : 
                                 ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                   ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                       ? 5U : 4U) : 
                                  ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                    ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                        ? 5U : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                    : ((5U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                        ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                            ? 8U : 6U)
                                        : ((6U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                            ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                ? 7U
                                                : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                            : ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                ? 8U
                                                : 4U))))))))
            : (((((((((8U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state) 
                      | (9U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                     | (0xaU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                    | (0xbU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                   | (0xcU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                  | (0xdU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                 | (0xeU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) 
                | (0xfU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                ? ((8U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                    ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                        ? 2U : 1U) : ((9U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                       ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                           ? 0U : 0xaU)
                                       : ((0xaU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                           ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                               ? 0xcU
                                               : 0xbU)
                                           : ((0xbU 
                                               == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                               ? ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                   ? 0xcU
                                                   : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                               : ((0xcU 
                                                   == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                   ? 
                                                  ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                    ? 0xfU
                                                    : 0xdU)
                                                   : 
                                                  ((0xdU 
                                                    == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                     ? 0xeU
                                                     : vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                    : 
                                                   ((0xeU 
                                                     == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)
                                                     ? 
                                                    ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                      ? 0xfU
                                                      : 0xbU)
                                                     : 
                                                    ((IData)(vlSelfRef.jtag_tb__DOT__tms)
                                                      ? 2U
                                                      : 1U))))))))
                : 0U));
    if ((0xaU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    }
    if ((0xbU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 5U;
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x1eU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x1dU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 1U));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                     >> 1U));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x1bU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 2U));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                     >> 2U));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0x17U & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 3U));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                     >> 3U));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
            = ((0xfU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT____Vlvbound_hd397bcbb__0) 
                  << 4U));
    }
    if ((0xfU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR 
            = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    }
    if ((0xaU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    }
    if ((0xbU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i = 5U;
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x1eU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | (IData)(vlSelfRef.jtag_tb__DOT__tdi));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x1dU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 1U));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                     >> 1U));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x1bU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 2U));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                     >> 2U));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0x17U & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 3U));
        vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0 
            = (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR) 
                     >> 3U));
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
            = ((0xfU & (IData)(__Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR)) 
               | ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT____Vlvbound_hd397bcbb__0) 
                  << 4U));
    }
    if ((0xfU == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
        __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR 
            = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    }
    if ((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))) {
        if ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR = 0U;
        }
        if ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR 
                = vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0;
        }
    }
    if ((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))) {
        if ((3U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR = 0U;
        }
        if ((4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state)) {
            vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR 
                = vlSelfRef.jtag_tb__DOT__tdi;
        }
    }
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR;
    vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state 
        = __Vdly__jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state;
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

void Vtap_top___024root___timing_resume(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtap_top___024root___eval_triggers__act(Vtap_top___024root* vlSelf);

bool Vtap_top___024root___eval_phase__act(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtap_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtap_top___024root___timing_resume(vlSelf);
        Vtap_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtap_top___024root___eval_phase__nba(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtap_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__nba(Vtap_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__act(Vtap_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtap_top___024root___eval(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval\n"); );
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
            Vtap_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("series_taps/series_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtap_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("series_taps/series_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtap_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtap_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtap_top___024root___eval_debug_assertions(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
