// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtap_top__pch.h"
#include "Vtap_top.h"
#include "Vtap_top___024root.h"

// FUNCTIONS
Vtap_top__Syms::~Vtap_top__Syms()
{
}

Vtap_top__Syms::Vtap_top__Syms(VerilatedContext* contextp, const char* namep, Vtap_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(99);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-11);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
