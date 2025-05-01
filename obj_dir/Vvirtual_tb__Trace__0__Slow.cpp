// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvirtual_tb__Syms.h"


VL_ATTR_COLD void Vvirtual_tb___024root__trace_init_sub__TOP__0(Vvirtual_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("virtual_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tms",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tdi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"tdo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"period",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"jtag_reset__Vstatic__tms_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"jtag_reset__Vstatic__tdi_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"jtag_ir_shift__Vstatic__tms_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"jtag_ir_shift__Vstatic__tdi_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("jtag_taps_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"g_IR_WIDTH0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+48,0,"g_IR_WIDTH1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tms",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tdi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"tdo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"sel_user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk_user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tms_user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tdi_user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo_user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"clk_virtual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tms_virtual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"tdi_virtual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo_virtual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bridge_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"sel_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tms_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tdi_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"clk_virtual",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tms_virtual",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"tdi_virtual",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo_virtual",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"clk_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"clk_gen_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"rstq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"tdi_user_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"tdi_user_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tms_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"tdi_gen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tap_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"g_IR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+49,0,"g_IDCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+50,0,"IDCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tms",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tdi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"tdo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"sel_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"tms_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"tdi_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"tap_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+51,0,"IDCODE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"BYPASS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"BCN_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"USER_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"g_BCN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"IR_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"BCN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"BCN_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"IDCODE_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"BYPASS_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"IDCODE_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"BYPASS_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"BCN_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"USER_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"tdo_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"tdo_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bcn_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idcode_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tap_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"g_IR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+49,0,"g_IDCODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+55,0,"IDCODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tms",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"tdi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"sel_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"clk_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tms_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"tdi_user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"tdo_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"tap_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+51,0,"IDCODE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"BYPASS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"BCN_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"USER_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"g_BCN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+20,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"IR_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+22,0,"BCN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"BCN_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"IDCODE_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"BYPASS_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"IDCODE_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"BYPASS_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"BCN_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"USER_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"tdo_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"tdo_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bcn_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idcode_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instruction_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vvirtual_tb___024root__trace_init_top(Vvirtual_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvirtual_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vvirtual_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vvirtual_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvirtual_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvirtual_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vvirtual_tb___024root__trace_register(Vvirtual_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vvirtual_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vvirtual_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vvirtual_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vvirtual_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vvirtual_tb___024root__trace_const_0_sub_0(Vvirtual_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvirtual_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_const_0\n"); );
    // Init
    Vvirtual_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvirtual_tb___024root*>(voidSelf);
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vvirtual_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvirtual_tb___024root__trace_const_0_sub_0(Vvirtual_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+44,(0xaU),32);
    bufp->fullCData(oldp+45,(0x1fU),5);
    bufp->fullCData(oldp+46,(0U),5);
    bufp->fullCData(oldp+47,(0xcU),5);
    bufp->fullIData(oldp+48,(5U),32);
    bufp->fullIData(oldp+49,(0x20U),32);
    bufp->fullIData(oldp+50,(0xdeadbeefU),32);
    bufp->fullCData(oldp+51,(0x19U),5);
    bufp->fullCData(oldp+52,(0x15U),5);
    bufp->fullCData(oldp+53,(0x13U),5);
    bufp->fullIData(oldp+54,(8U),32);
    bufp->fullIData(oldp+55,(0xabadbabeU),32);
    bufp->fullBit(oldp+56,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_user));
}

VL_ATTR_COLD void Vvirtual_tb___024root__trace_full_0_sub_0(Vvirtual_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvirtual_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_full_0\n"); );
    // Init
    Vvirtual_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvirtual_tb___024root*>(voidSelf);
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vvirtual_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvirtual_tb___024root__trace_full_0_sub_0(Vvirtual_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((0x13U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullIData(oldp+2,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state),32);
    bufp->fullCData(oldp+3,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR),5);
    bufp->fullCData(oldp+4,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR_SR),5);
    bufp->fullCData(oldp+5,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN),8);
    bufp->fullCData(oldp+6,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR),8);
    bufp->fullIData(oldp+7,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR),32);
    bufp->fullBit(oldp+8,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR));
    bufp->fullBit(oldp+9,((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullBit(oldp+10,((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullBit(oldp+11,((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR))));
    bufp->fullIData(oldp+12,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+13,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+14,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+15,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tdo_neg));
    bufp->fullBit(oldp+16,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen_d));
    bufp->fullBit(oldp+17,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__clk_gen));
    bufp->fullBit(oldp+18,((0x13U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullIData(oldp+19,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state),32);
    bufp->fullCData(oldp+20,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR),5);
    bufp->fullCData(oldp+21,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR_SR),5);
    bufp->fullCData(oldp+22,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN),8);
    bufp->fullCData(oldp+23,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR),8);
    bufp->fullIData(oldp+24,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR),32);
    bufp->fullBit(oldp+25,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR));
    bufp->fullBit(oldp+26,((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullBit(oldp+27,((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullBit(oldp+28,((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR))));
    bufp->fullBit(oldp+29,((1U & (((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                   & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IDCODE_SR, 0x1fU)
                                   : (((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                       & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                       ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BYPASS_SR)
                                       : (((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__IR)) 
                                           & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tap_state))
                                           ? (1U & 
                                              ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__BCN_SR) 
                                               >> 7U))
                                           : (((0x13U 
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
                                                   : 0U))))))));
    bufp->fullIData(oldp+30,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__bcn_register__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+31,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__idcode_register__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+32,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__instruction_register__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+33,((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq))));
    bufp->fullCData(oldp+34,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__rstq),5);
    bufp->fullBit(oldp+35,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d));
    bufp->fullBit(oldp+36,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_user_d2));
    bufp->fullBit(oldp+37,(vlSelfRef.virtual_tb__DOT__clk));
    bufp->fullBit(oldp+38,(vlSelfRef.virtual_tb__DOT__tms));
    bufp->fullBit(oldp+39,(vlSelfRef.virtual_tb__DOT__tdi));
    bufp->fullBit(oldp+40,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_1__DOT__tdo_neg));
    bufp->fullBit(oldp+41,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tms_gen));
    bufp->fullBit(oldp+42,(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__bridge_i__DOT__tdi_gen));
    bufp->fullBit(oldp+43,((1U & (((0x19U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                   & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                   ? VL_SHIFTR_III(32,32,32, vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IDCODE_SR, 0x1fU)
                                   : (((0x1fU == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                       & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                       ? (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BYPASS_SR)
                                       : (((0x15U == (IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__IR)) 
                                           & (4U == vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__tap_state))
                                           ? (1U & 
                                              ((IData)(vlSelfRef.virtual_tb__DOT__jtag_taps_i__DOT__tap_0__DOT__BCN_SR) 
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
