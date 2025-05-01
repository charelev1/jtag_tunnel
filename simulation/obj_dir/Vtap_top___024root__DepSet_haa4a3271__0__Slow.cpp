// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtap_top.h for the primary calling header

#include "Vtap_top__pch.h"
#include "Vtap_top__Syms.h"
#include "Vtap_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtap_top___024root___dump_triggers__stl(Vtap_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtap_top___024root___eval_triggers__stl(Vtap_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtap_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
