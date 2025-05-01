// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_tb.h for the primary calling header

#include "Vvirtual_tb__pch.h"
#include "Vvirtual_tb__Syms.h"
#include "Vvirtual_tb___024root.h"

void Vvirtual_tb___024root___ctor_var_reset(Vvirtual_tb___024root* vlSelf);

Vvirtual_tb___024root::Vvirtual_tb___024root(Vvirtual_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvirtual_tb___024root___ctor_var_reset(this);
}

void Vvirtual_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvirtual_tb___024root::~Vvirtual_tb___024root() {
}
