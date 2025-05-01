// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvirtual_tb__Syms.h"


void Vvirtual_tb___024root__trace_chg_0_sub_0(Vvirtual_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvirtual_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_chg_0\n"); );
    // Init
    Vvirtual_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvirtual_tb___024root*>(voidSelf);
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvirtual_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvirtual_tb___024root__trace_chg_0_sub_0(Vvirtual_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((0x13U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgIData(oldp+1,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state),32);
        bufp->chgCData(oldp+2,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR),5);
        bufp->chgCData(oldp+3,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR),5);
        bufp->chgCData(oldp+4,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN),8);
        bufp->chgCData(oldp+5,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR),8);
        bufp->chgIData(oldp+6,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR),32);
        bufp->chgBit(oldp+7,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR));
        bufp->chgBit(oldp+8,((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgBit(oldp+9,((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgBit(oldp+10,((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
        bufp->chgIData(oldp+11,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+12,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+14,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_neg));
        bufp->chgBit(oldp+15,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d));
        bufp->chgBit(oldp+16,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+17,((0x13U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgIData(oldp+18,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state),32);
        bufp->chgCData(oldp+19,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR),5);
        bufp->chgCData(oldp+20,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR),5);
        bufp->chgCData(oldp+21,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN),8);
        bufp->chgCData(oldp+22,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR),8);
        bufp->chgIData(oldp+23,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR),32);
        bufp->chgBit(oldp+24,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR));
        bufp->chgBit(oldp+25,((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgBit(oldp+26,((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgBit(oldp+27,((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
        bufp->chgBit(oldp+28,((1U & (((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                      & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                      ? VL_SHIFTR_III(32,32,32, vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR, 0x1fU)
                                      : (((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                          & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                          ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR)
                                          : (((0x15U 
                                               == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                              & (4U 
                                                 == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                              ? (1U 
                                                 & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                                    >> 7U))
                                              : (((0x13U 
                                                   == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                                  & (4U 
                                                     == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                                  ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user)
                                                  : 
                                                 ((0xbU 
                                                   == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                                                      >> 4U))
                                                   : 0U))))))));
        bufp->chgIData(oldp+29,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+30,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+31,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+32,((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))));
        bufp->chgCData(oldp+33,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq),5);
        bufp->chgBit(oldp+34,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d));
        bufp->chgBit(oldp+35,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d2));
    }
    bufp->chgBit(oldp+36,(vlSelfRef.virtual_tb__DOT__clk));
    bufp->chgBit(oldp+37,(vlSelfRef.virtual_tb__DOT__tms));
    bufp->chgBit(oldp+38,(vlSelfRef.virtual_tb__DOT__tdi));
    bufp->chgBit(oldp+39,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_neg));
    bufp->chgBit(oldp+40,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen));
    bufp->chgBit(oldp+41,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen));
    bufp->chgBit(oldp+42,((1U & (((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                  & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR, 0x1fU)
                                  : (((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                      & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                      ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR)
                                      : (((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                          & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                          ? (1U & ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
                                                   >> 7U))
                                          : (((0x13U 
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
                                                  : 0U))))))));
}

void Vvirtual_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_cleanup\n"); );
    // Init
    Vvirtual_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvirtual_tb___024root*>(voidSelf);
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
