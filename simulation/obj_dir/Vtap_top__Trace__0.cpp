// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtap_top__Syms.h"


void Vtap_top___024root__trace_chg_0_sub_0(Vtap_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtap_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_chg_0\n"); );
    // Init
    Vtap_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtap_top___024root*>(voidSelf);
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtap_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtap_top___024root__trace_chg_0_sub_0(Vtap_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                     & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                     ? VL_SHIFTR_III(32,32,32, vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR, 0x1fU)
                                     : (((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                         & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                         ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR)
                                         : (((0x15U 
                                              == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                             & (4U 
                                                == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                             ? (1U 
                                                & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                                   >> 7U))
                                             : (((0x13U 
                                                  == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                                 & (4U 
                                                    == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                                 ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user)
                                                 : 
                                                ((0xbU 
                                                  == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                  ? 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                                                     >> 4U))
                                                  : 0U))))))));
        bufp->chgBit(oldp+1,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0));
        bufp->chgBit(oldp+2,((0x13U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgIData(oldp+3,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state),32);
        bufp->chgCData(oldp+4,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR),5);
        bufp->chgCData(oldp+5,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR),5);
        bufp->chgCData(oldp+6,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN),8);
        bufp->chgCData(oldp+7,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR),8);
        bufp->chgIData(oldp+8,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR),32);
        bufp->chgBit(oldp+9,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR));
        bufp->chgBit(oldp+10,((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgBit(oldp+11,((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgBit(oldp+12,((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgIData(oldp+13,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+14,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+15,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+16,((0x13U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgIData(oldp+17,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state),32);
        bufp->chgCData(oldp+18,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR),5);
        bufp->chgCData(oldp+19,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR),5);
        bufp->chgCData(oldp+20,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN),8);
        bufp->chgCData(oldp+21,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR),8);
        bufp->chgIData(oldp+22,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR),32);
        bufp->chgBit(oldp+23,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR));
        bufp->chgBit(oldp+24,((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgBit(oldp+25,((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgBit(oldp+26,((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgIData(oldp+27,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+28,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+29,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+30,(vlSelfRef.jtag_tb__DOT__clk));
    bufp->chgBit(oldp+31,(vlSelfRef.jtag_tb__DOT__tms));
    bufp->chgBit(oldp+32,(vlSelfRef.jtag_tb__DOT__tdi));
}

void Vtap_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_cleanup\n"); );
    // Init
    Vtap_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtap_top___024root*>(voidSelf);
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
