// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_tb.h for the primary calling header

#include "Vvirtual_tb__pch.h"
#include "Vvirtual_tb__Syms.h"
#include "Vvirtual_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vvirtual_tb___024root___eval_initial__TOP__Vtiming__0(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlQueue<CData/*0:0*/> virtual_tb__DOT__user_addr;
    virtual_tb__DOT__user_addr.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__loadIR__0__stream;
    __Vtask_virtual_tb__DOT__loadIR__0__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i;
    __Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__printStream__1__stream;
    __Vtask_virtual_tb__DOT__printStream__1__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i;
    __Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__loadDR__3__stream;
    __Vtask_virtual_tb__DOT__loadDR__3__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i;
    __Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__4__Vfuncout;
    __Vfunc_virtual_tb__DOT__interleave__4__Vfuncout.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__4__vec1;
    __Vfunc_virtual_tb__DOT__interleave__4__vec1.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__4__vec2;
    __Vfunc_virtual_tb__DOT__interleave__4__vec2.atDefault() = 0;
    IData/*31:0*/ __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i;
    __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__4__result;
    __Vfunc_virtual_tb__DOT__interleave__4__result.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__printStream__5__stream;
    __Vtask_virtual_tb__DOT__printStream__5__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i;
    __Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__loadDR__7__stream;
    __Vtask_virtual_tb__DOT__loadDR__7__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i;
    __Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__8__Vfuncout;
    __Vfunc_virtual_tb__DOT__interleave__8__Vfuncout.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__8__vec1;
    __Vfunc_virtual_tb__DOT__interleave__8__vec1.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__8__vec2;
    __Vfunc_virtual_tb__DOT__interleave__8__vec2.atDefault() = 0;
    IData/*31:0*/ __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i;
    __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__8__result;
    __Vfunc_virtual_tb__DOT__interleave__8__result.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__printStream__9__stream;
    __Vtask_virtual_tb__DOT__printStream__9__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i;
    __Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__loadDR__11__stream;
    __Vtask_virtual_tb__DOT__loadDR__11__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i;
    __Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__12__Vfuncout;
    __Vfunc_virtual_tb__DOT__interleave__12__Vfuncout.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__12__vec1;
    __Vfunc_virtual_tb__DOT__interleave__12__vec1.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__12__vec2;
    __Vfunc_virtual_tb__DOT__interleave__12__vec2.atDefault() = 0;
    IData/*31:0*/ __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i;
    __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i = 0;
    VlQueue<CData/*0:0*/> __Vfunc_virtual_tb__DOT__interleave__12__result;
    __Vfunc_virtual_tb__DOT__interleave__12__result.atDefault() = 0;
    VlQueue<CData/*0:0*/> __Vtask_virtual_tb__DOT__printStream__13__stream;
    __Vtask_virtual_tb__DOT__printStream__13__stream.atDefault() = 0;
    IData/*31:0*/ __Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i;
    __Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    virtual_tb__DOT__user_addr = VlQueue<CData/*0:0*/>::consVC(1U, 
                                                               VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>{})))));
    __Vtask_virtual_tb__DOT__loadIR__0__stream = virtual_tb__DOT__user_addr;
    VL_WRITEF_NX("loadIR: ",0);
    __Vtask_virtual_tb__DOT__printStream__1__stream 
        = __Vtask_virtual_tb__DOT__loadIR__0__stream;
    __Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i, __Vtask_virtual_tb__DOT__printStream__1__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_virtual_tb__DOT__printStream__1__stream.at(__Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i));
        __Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_virtual_tb__DOT__printStream__1__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         57);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         59);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         61);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         63);
    if (VL_LTS_III(32, 0U, __Vtask_virtual_tb__DOT__loadIR__0__stream.size())) {
        vlSelfRef.virtual_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "virtual_taps/virtual_tb.sv", 
                                             68);
        __Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i, __Vtask_virtual_tb__DOT__loadIR__0__stream.size())) {
            vlSelfRef.virtual_tb__DOT__tms = (__Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i 
                                              == (__Vtask_virtual_tb__DOT__loadIR__0__stream.size() 
                                                  - (IData)(1U)));
            vlSelfRef.virtual_tb__DOT__tdi = __Vtask_virtual_tb__DOT__loadIR__0__stream.at(__Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "virtual_taps/virtual_tb.sv", 
                                                 73);
            __Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i 
                = ((IData)(1U) + __Vtask_virtual_tb__DOT__loadIR__0__unnamedblk3__DOT__i);
        }
    }
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         79);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         81);
    __Vfunc_virtual_tb__DOT__interleave__4__vec2 = 
        VlQueue<CData/*0:0*/>::consVC(0U, VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                        VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>{})))));
    __Vfunc_virtual_tb__DOT__interleave__4__vec1 = 
        VlQueue<CData/*0:0*/>::consVC(1U, VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                        VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>{})))));
    {
        if (VL_UNLIKELY((__Vfunc_virtual_tb__DOT__interleave__4__vec1.size() 
                         != __Vfunc_virtual_tb__DOT__interleave__4__vec2.size()))) {
            VL_WRITEF_NX("[%0t] %%Error: virtual_tb.sv:161: Assertion failed in %Nvirtual_tb.interleave: Input vectors must be the same length\n",0,
                         64,VL_TIME_UNITED_Q(100),-9,
                         vlSymsp->name());
            VL_STOP_MT("virtual_taps/virtual_tb.sv", 161, "");
            __Vfunc_virtual_tb__DOT__interleave__4__Vfuncout 
                = VlQueue<CData/*0:0*/>{};
            goto __Vlabel1;
        }
        __Vfunc_virtual_tb__DOT__interleave__4__result.renew(
                                                             VL_MULS_III(32, (IData)(2U), __Vfunc_virtual_tb__DOT__interleave__4__vec1.size()));
        __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i, __Vfunc_virtual_tb__DOT__interleave__4__vec1.size())) {
            __Vfunc_virtual_tb__DOT__interleave__4__result.atWrite(
                                                                   VL_SHIFTL_III(32,32,32, __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i, 1U)) 
                = __Vfunc_virtual_tb__DOT__interleave__4__vec1.at(__Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i);
            __Vfunc_virtual_tb__DOT__interleave__4__result.atWrite(
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    VL_SHIFTL_III(32,32,32, __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i, 1U))) 
                = __Vfunc_virtual_tb__DOT__interleave__4__vec2.at(__Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i);
            __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vfunc_virtual_tb__DOT__interleave__4__unnamedblk7__DOT__i);
        }
        __Vfunc_virtual_tb__DOT__interleave__4__Vfuncout 
            = __Vfunc_virtual_tb__DOT__interleave__4__result;
        __Vlabel1: ;
    }
    __Vtask_virtual_tb__DOT__loadDR__3__stream = __Vfunc_virtual_tb__DOT__interleave__4__Vfuncout;
    VL_WRITEF_NX("loadDR: ",0);
    __Vtask_virtual_tb__DOT__printStream__5__stream 
        = __Vtask_virtual_tb__DOT__loadDR__3__stream;
    __Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i, __Vtask_virtual_tb__DOT__printStream__5__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_virtual_tb__DOT__printStream__5__stream.at(__Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i));
        __Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_virtual_tb__DOT__printStream__5__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         98);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         100);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         102);
    if (VL_LTS_III(32, 0U, __Vtask_virtual_tb__DOT__loadDR__3__stream.size())) {
        vlSelfRef.virtual_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "virtual_taps/virtual_tb.sv", 
                                             107);
        __Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i, __Vtask_virtual_tb__DOT__loadDR__3__stream.size())) {
            vlSelfRef.virtual_tb__DOT__tms = (__Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i 
                                              == (__Vtask_virtual_tb__DOT__loadDR__3__stream.size() 
                                                  - (IData)(1U)));
            vlSelfRef.virtual_tb__DOT__tdi = __Vtask_virtual_tb__DOT__loadDR__3__stream.at(__Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "virtual_taps/virtual_tb.sv", 
                                                 112);
            __Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_virtual_tb__DOT__loadDR__3__unnamedblk5__DOT__i);
        }
    }
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         118);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         120);
    __Vfunc_virtual_tb__DOT__interleave__8__vec2 = 
        VlQueue<CData/*0:0*/>::consVC(1U, VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                        VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>{})))))))))))))));
    __Vfunc_virtual_tb__DOT__interleave__8__vec1 = 
        VlQueue<CData/*0:0*/>::consVC(1U, VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                        VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>{})))))))))))))));
    {
        if (VL_UNLIKELY((__Vfunc_virtual_tb__DOT__interleave__8__vec1.size() 
                         != __Vfunc_virtual_tb__DOT__interleave__8__vec2.size()))) {
            VL_WRITEF_NX("[%0t] %%Error: virtual_tb.sv:161: Assertion failed in %Nvirtual_tb.interleave: Input vectors must be the same length\n",0,
                         64,VL_TIME_UNITED_Q(100),-9,
                         vlSymsp->name());
            VL_STOP_MT("virtual_taps/virtual_tb.sv", 161, "");
            __Vfunc_virtual_tb__DOT__interleave__8__Vfuncout 
                = VlQueue<CData/*0:0*/>{};
            goto __Vlabel2;
        }
        __Vfunc_virtual_tb__DOT__interleave__8__result.renew(
                                                             VL_MULS_III(32, (IData)(2U), __Vfunc_virtual_tb__DOT__interleave__8__vec1.size()));
        __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i, __Vfunc_virtual_tb__DOT__interleave__8__vec1.size())) {
            __Vfunc_virtual_tb__DOT__interleave__8__result.atWrite(
                                                                   VL_SHIFTL_III(32,32,32, __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i, 1U)) 
                = __Vfunc_virtual_tb__DOT__interleave__8__vec1.at(__Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i);
            __Vfunc_virtual_tb__DOT__interleave__8__result.atWrite(
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    VL_SHIFTL_III(32,32,32, __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i, 1U))) 
                = __Vfunc_virtual_tb__DOT__interleave__8__vec2.at(__Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i);
            __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vfunc_virtual_tb__DOT__interleave__8__unnamedblk7__DOT__i);
        }
        __Vfunc_virtual_tb__DOT__interleave__8__Vfuncout 
            = __Vfunc_virtual_tb__DOT__interleave__8__result;
        __Vlabel2: ;
    }
    __Vtask_virtual_tb__DOT__loadDR__7__stream = __Vfunc_virtual_tb__DOT__interleave__8__Vfuncout;
    VL_WRITEF_NX("loadDR: ",0);
    __Vtask_virtual_tb__DOT__printStream__9__stream 
        = __Vtask_virtual_tb__DOT__loadDR__7__stream;
    __Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i, __Vtask_virtual_tb__DOT__printStream__9__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_virtual_tb__DOT__printStream__9__stream.at(__Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i));
        __Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_virtual_tb__DOT__printStream__9__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         98);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         100);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         102);
    if (VL_LTS_III(32, 0U, __Vtask_virtual_tb__DOT__loadDR__7__stream.size())) {
        vlSelfRef.virtual_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "virtual_taps/virtual_tb.sv", 
                                             107);
        __Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i, __Vtask_virtual_tb__DOT__loadDR__7__stream.size())) {
            vlSelfRef.virtual_tb__DOT__tms = (__Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i 
                                              == (__Vtask_virtual_tb__DOT__loadDR__7__stream.size() 
                                                  - (IData)(1U)));
            vlSelfRef.virtual_tb__DOT__tdi = __Vtask_virtual_tb__DOT__loadDR__7__stream.at(__Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "virtual_taps/virtual_tb.sv", 
                                                 112);
            __Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_virtual_tb__DOT__loadDR__7__unnamedblk5__DOT__i);
        }
    }
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         118);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         120);
    __Vfunc_virtual_tb__DOT__interleave__12__vec2 = 
        VlQueue<CData/*0:0*/>::consVC(1U, VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                        VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>{}))))))))))))));
    __Vfunc_virtual_tb__DOT__interleave__12__vec1 = 
        VlQueue<CData/*0:0*/>::consVC(1U, VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                        VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(1U, 
                                                                                VlQueue<CData/*0:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*0:0*/>{}))))))))))))));
    {
        if (VL_UNLIKELY((__Vfunc_virtual_tb__DOT__interleave__12__vec1.size() 
                         != __Vfunc_virtual_tb__DOT__interleave__12__vec2.size()))) {
            VL_WRITEF_NX("[%0t] %%Error: virtual_tb.sv:161: Assertion failed in %Nvirtual_tb.interleave: Input vectors must be the same length\n",0,
                         64,VL_TIME_UNITED_Q(100),-9,
                         vlSymsp->name());
            VL_STOP_MT("virtual_taps/virtual_tb.sv", 161, "");
            __Vfunc_virtual_tb__DOT__interleave__12__Vfuncout 
                = VlQueue<CData/*0:0*/>{};
            goto __Vlabel3;
        }
        __Vfunc_virtual_tb__DOT__interleave__12__result.renew(
                                                              VL_MULS_III(32, (IData)(2U), __Vfunc_virtual_tb__DOT__interleave__12__vec1.size()));
        __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i, __Vfunc_virtual_tb__DOT__interleave__12__vec1.size())) {
            __Vfunc_virtual_tb__DOT__interleave__12__result.atWrite(
                                                                    VL_SHIFTL_III(32,32,32, __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i, 1U)) 
                = __Vfunc_virtual_tb__DOT__interleave__12__vec1.at(__Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i);
            __Vfunc_virtual_tb__DOT__interleave__12__result.atWrite(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     VL_SHIFTL_III(32,32,32, __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i, 1U))) 
                = __Vfunc_virtual_tb__DOT__interleave__12__vec2.at(__Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i);
            __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i 
                = ((IData)(1U) + __Vfunc_virtual_tb__DOT__interleave__12__unnamedblk7__DOT__i);
        }
        __Vfunc_virtual_tb__DOT__interleave__12__Vfuncout 
            = __Vfunc_virtual_tb__DOT__interleave__12__result;
        __Vlabel3: ;
    }
    __Vtask_virtual_tb__DOT__loadDR__11__stream = __Vfunc_virtual_tb__DOT__interleave__12__Vfuncout;
    VL_WRITEF_NX("loadDR: ",0);
    __Vtask_virtual_tb__DOT__printStream__13__stream 
        = __Vtask_virtual_tb__DOT__loadDR__11__stream;
    __Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i, __Vtask_virtual_tb__DOT__printStream__13__stream.size())) {
        VL_WRITEF_NX("%b",0,1,__Vtask_virtual_tb__DOT__printStream__13__stream.at(__Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i));
        __Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_virtual_tb__DOT__printStream__13__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    vlSelfRef.virtual_tb__DOT__tdi = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         35);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         98);
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         100);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         102);
    if (VL_LTS_III(32, 0U, __Vtask_virtual_tb__DOT__loadDR__11__stream.size())) {
        vlSelfRef.virtual_tb__DOT__tms = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "virtual_taps/virtual_tb.sv", 
                                             107);
        __Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i, __Vtask_virtual_tb__DOT__loadDR__11__stream.size())) {
            vlSelfRef.virtual_tb__DOT__tms = (__Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i 
                                              == (__Vtask_virtual_tb__DOT__loadDR__11__stream.size() 
                                                  - (IData)(1U)));
            vlSelfRef.virtual_tb__DOT__tdi = __Vtask_virtual_tb__DOT__loadDR__11__stream.at(__Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i);
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "virtual_taps/virtual_tb.sv", 
                                                 112);
            __Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_virtual_tb__DOT__loadDR__11__unnamedblk5__DOT__i);
        }
    }
    vlSelfRef.virtual_tb__DOT__tms = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         118);
    vlSelfRef.virtual_tb__DOT__tms = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         120);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         211);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         212);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         213);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "virtual_taps/virtual_tb.sv", 
                                         214);
    VL_FINISH_MT("virtual_taps/virtual_tb.sv", 215, "");
}

VL_INLINE_OPT VlCoroutine Vvirtual_tb___024root___eval_initial__TOP__Vtiming__1(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    // Body
    while (1U) {
        VL_WRITEF_NX("%b %b",0,1,vlSelfRef.virtual_tb__DOT__tdi,
                     1,(IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_neg));
        __Vtemp_1 = Vvirtual_tb___024unit::__Venumtab_enum_name8
            [(0xfU & vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)];
        VL_WRITEF_NX(" %@ %x\n",0,-1,&(__Vtemp_1),32,
                     vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "virtual_taps/virtual_tb.sv", 
                                             223);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "virtual_taps/virtual_tb.sv", 
                                             224);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvirtual_tb___024root___dump_triggers__act(Vvirtual_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vvirtual_tb___024root___eval_triggers__act(Vvirtual_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.virtual_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.virtual_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d__0))));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d__0)));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__clk__0 
        = vlSelfRef.virtual_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen__0 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen;
    vlSelfRef.__Vtrigprevexpr___TOP__virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d__0 
        = vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvirtual_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
