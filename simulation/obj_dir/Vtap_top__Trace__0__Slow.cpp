// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtap_top__Syms.h"


VL_ATTR_COLD void Vtap_top___024root__trace_init_sub__TOP__0(Vtap_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("jtag_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"tms",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"tdi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"tdo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"jtag_reset__Vstatic__tms_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"jtag_reset__Vstatic__tdi_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"jtag_ir_shift__Vstatic__tms_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"jtag_ir_shift__Vstatic__tdi_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("jtag_taps_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"g_IR_WIDTH0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"g_IR_WIDTH1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"tms",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"tdi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"tdo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tdo0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tap_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"g_IR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"g_IDCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"IDCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"tms",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"tdi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tdo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sel_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"clk_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"tms_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"tdi_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tdo_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tap_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"IDCODE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"BYPASS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"BCN_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"USER_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"g_BCN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"IR_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"BCN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"BCN_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"IDCODE_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"BYPASS_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"IDCODE_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"BYPASS_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"BCN_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"USER_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bcn_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idcode_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tap_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"g_IR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"g_IDCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"IDCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"tms",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tdi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"tdo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"sel_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"clk_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"tms_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"tdi_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"tdo_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"tap_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"IDCODE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"BYPASS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"BCN_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"USER_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"g_BCN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+19,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"IR_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"BCN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"BCN_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"IDCODE_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"BYPASS_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"IDCODE_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"BYPASS_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"BCN_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"USER_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bcn_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idcode_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtap_top___024root__trace_init_top(Vtap_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtap_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtap_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtap_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtap_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtap_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtap_top___024root__trace_register(Vtap_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtap_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtap_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtap_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtap_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtap_top___024root__trace_const_0_sub_0(Vtap_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtap_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_const_0\n"); );
    // Init
    Vtap_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtap_top___024root*>(voidSelf);
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtap_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtap_top___024root__trace_const_0_sub_0(Vtap_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+34,(0xaU),32);
    bufp->fullCData(oldp+35,(0x1fU),5);
    bufp->fullCData(oldp+36,(0U),5);
    bufp->fullCData(oldp+37,(0xcU),5);
    bufp->fullIData(oldp+38,(5U),32);
    bufp->fullIData(oldp+39,(0x20U),32);
    bufp->fullIData(oldp+40,(0xdeadbeefU),32);
    bufp->fullBit(oldp+41,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_user));
    bufp->fullCData(oldp+42,(0x19U),5);
    bufp->fullCData(oldp+43,(0x15U),5);
    bufp->fullCData(oldp+44,(0x13U),5);
    bufp->fullIData(oldp+45,(8U),32);
    bufp->fullIData(oldp+46,(0xdeaddeadU),32);
    bufp->fullBit(oldp+47,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user));
}

VL_ATTR_COLD void Vtap_top___024root__trace_full_0_sub_0(Vtap_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtap_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_full_0\n"); );
    // Init
    Vtap_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtap_top___024root*>(voidSelf);
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtap_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtap_top___024root__trace_full_0_sub_0(Vtap_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtap_top___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & (((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                  & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR, 0x1fU)
                                  : (((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                      & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                      ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR)
                                      : (((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                          & (4U == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                          ? (1U & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                                   >> 7U))
                                          : (((0x13U 
                                               == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                              & (4U 
                                                 == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                              ? (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user)
                                              : ((0xbU 
                                                  == vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state)
                                                  ? 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR) 
                                                     >> 4U))
                                                  : 0U))))))));
    bufp->fullBit(oldp+2,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tdo0));
    bufp->fullBit(oldp+3,((0x13U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullIData(oldp+4,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state),32);
    bufp->fullCData(oldp+5,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR),5);
    bufp->fullCData(oldp+6,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR),5);
    bufp->fullCData(oldp+7,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN),8);
    bufp->fullCData(oldp+8,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR),8);
    bufp->fullIData(oldp+9,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR),32);
    bufp->fullBit(oldp+10,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR));
    bufp->fullBit(oldp+11,((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullBit(oldp+12,((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullBit(oldp+13,((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullIData(oldp+14,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+15,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+16,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+17,((0x13U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullIData(oldp+18,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state),32);
    bufp->fullCData(oldp+19,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR),5);
    bufp->fullCData(oldp+20,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR),5);
    bufp->fullCData(oldp+21,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN),8);
    bufp->fullCData(oldp+22,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR),8);
    bufp->fullIData(oldp+23,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR),32);
    bufp->fullBit(oldp+24,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR));
    bufp->fullBit(oldp+25,((0x19U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullBit(oldp+26,((0x1fU == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullBit(oldp+27,((0x15U == (IData)(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullIData(oldp+28,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+29,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+30,(vlSelfRef.jtag_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+31,(vlSelfRef.jtag_tb__DOT__clk));
    bufp->fullBit(oldp+32,(vlSelfRef.jtag_tb__DOT__tms));
    bufp->fullBit(oldp+33,(vlSelfRef.jtag_tb__DOT__tdi));
}
