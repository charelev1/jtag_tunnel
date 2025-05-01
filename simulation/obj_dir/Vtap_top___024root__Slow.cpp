// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtap_top.h for the primary calling header

#include "Vtap_top__pch.h"
#include "Vtap_top__Syms.h"
#include "Vtap_top___024root.h"

void Vtap_top___024root___ctor_var_reset(Vtap_top___024root* vlSelf);

Vtap_top___024root::Vtap_top___024root(Vtap_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtap_top___024root___ctor_var_reset(this);
}

void Vtap_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtap_top___024root::~Vtap_top___024root() {
}
