// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelfRef.top_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         23);
    vlSelfRef.top_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         24);
    vlSelfRef.top_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x384ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         26);
    vlSelfRef.top_tb__DOT__data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         27);
    vlSelfRef.top_tb__DOT__data = 1U;
    VL_WRITEF_NX("%t %b\n",0,64,VL_TIME_UNITED_Q(100),
                 -9,1,(IData)(vlSelfRef.top_tb__DOT__data));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         29);
    vlSelfRef.top_tb__DOT__data = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         30);
    vlSelfRef.top_tb__DOT__data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         31);
    vlSelfRef.top_tb__DOT__data = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         32);
    vlSelfRef.top_tb__DOT__data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         33);
    vlSelfRef.top_tb__DOT__data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         34);
    vlSelfRef.top_tb__DOT__data = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         35);
    vlSelfRef.top_tb__DOT__data = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         36);
    vlSelfRef.top_tb__DOT__data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "clk_gen/top_tb.sv", 
                                         37);
    vlSelfRef.top_tb__DOT__data = 1U;
    VL_FINISH_MT("clk_gen/top_tb.sv", 39, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.top_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.top_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.top_tb__DOT__top_i__DOT__clk_out) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__top_i__DOT__clk_out__0))));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__top_i__DOT__clk_out__0 
        = vlSelfRef.top_tb__DOT__top_i__DOT__clk_out;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
