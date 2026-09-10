// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fft8__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_fft8::Vtb_fft8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fft8__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_fft8::Vtb_fft8(const char* _vcname__)
    : Vtb_fft8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fft8::~Vtb_fft8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fft8___024root___eval_debug_assertions(Vtb_fft8___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___eval_static(Vtb_fft8___024root* vlSelf);
void Vtb_fft8___024root___eval_initial(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD bool Vtb_fft8___024root___eval_stl(Vtb_fft8___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_fft8___024root___eval_sample(Vtb_fft8___024root* vlSelf);
bool Vtb_fft8___024root___eval_ico(Vtb_fft8___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_fft8___024root___eval_act(Vtb_fft8___024root* vlSelf);
bool Vtb_fft8___024root___eval_inact(Vtb_fft8___024root* vlSelf);
bool Vtb_fft8___024root___eval_nba(Vtb_fft8___024root* vlSelf);
bool Vtb_fft8___024root___eval_obs(Vtb_fft8___024root* vlSelf);
bool Vtb_fft8___024root___eval_react(Vtb_fft8___024root* vlSelf);
void Vtb_fft8___024root___eval_postponed(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_final(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__stl(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__ico(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__act(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__nba(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__obs(Vtb_fft8___024root* vlSelf);
VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__react(Vtb_fft8___024root* vlSelf);

void Vtb_fft8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fft8::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_fft8::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fft8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_fft8::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_fft8::evalStatic() {
    Vtb_fft8___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_fft8::evalInitial() {
    Vtb_fft8___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_fft8::evalStl(bool firstIteration) {
    return Vtb_fft8___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_fft8::evalSample() {
    Vtb_fft8___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_fft8::evalIco(bool firstIteration) {
    return Vtb_fft8___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_fft8::evalAct() {
    return Vtb_fft8___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_fft8::evalInact() {
    return Vtb_fft8___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_fft8::evalNba() {
    return Vtb_fft8___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_fft8::evalObs() {
    return Vtb_fft8___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_fft8::evalReact() {
    return Vtb_fft8___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_fft8::evalPostponed() {
    Vtb_fft8___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_fft8::evalFinal() {
    Vtb_fft8___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_fft8::dumpTriggersStl() {
    Vtb_fft8___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_fft8::dumpTriggersIco() {
    Vtb_fft8___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_fft8::dumpTriggersAct() {
    Vtb_fft8___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_fft8::dumpTriggersNba() {
    Vtb_fft8___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_fft8::dumpTriggersObs() {
    Vtb_fft8___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_fft8::dumpTriggersReact() {
    Vtb_fft8___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void Vtb_fft8::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_fft8::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_fft8::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_fft8::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fft8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_fft8::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fft8::hierName() const { return vlSymsp->name(); }
const char* Vtb_fft8::modelName() const { return "Vtb_fft8"; }
unsigned Vtb_fft8::threads() const { return 1; }
void Vtb_fft8::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fft8::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_fft8::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_fft8___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_fft8___024root__trace_init_top(Vtb_fft8___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_fft8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft8___024root*>(voidSelf);
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_fft8___024root__trace_decl_types(tracep);
    Vtb_fft8___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_fft8___024root__trace_register(Vtb_fft8___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_fft8::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_fft8::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 110);
    Vtb_fft8___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
