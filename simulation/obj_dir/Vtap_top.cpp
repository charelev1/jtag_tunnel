// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtap_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtap_top::Vtap_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtap_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtap_top::Vtap_top(const char* _vcname__)
    : Vtap_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtap_top::~Vtap_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtap_top___024root___eval_debug_assertions(Vtap_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtap_top___024root___eval_static(Vtap_top___024root* vlSelf);
void Vtap_top___024root___eval_initial(Vtap_top___024root* vlSelf);
void Vtap_top___024root___eval_settle(Vtap_top___024root* vlSelf);
void Vtap_top___024root___eval(Vtap_top___024root* vlSelf);

void Vtap_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtap_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtap_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtap_top___024root___eval_static(&(vlSymsp->TOP));
        Vtap_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtap_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtap_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtap_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtap_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtap_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtap_top___024root___eval_final(Vtap_top___024root* vlSelf);

VL_ATTR_COLD void Vtap_top::final() {
    Vtap_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtap_top::hierName() const { return vlSymsp->name(); }
const char* Vtap_top::modelName() const { return "Vtap_top"; }
unsigned Vtap_top::threads() const { return 1; }
void Vtap_top::prepareClone() const { contextp()->prepareClone(); }
void Vtap_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtap_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtap_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtap_top___024root__trace_init_top(Vtap_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtap_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtap_top___024root*>(voidSelf);
    Vtap_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtap_top___024root__trace_decl_types(tracep);
    Vtap_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtap_top___024root__trace_register(Vtap_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtap_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtap_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtap_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
