// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpicorv32_wrapper) {
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = __VlSymsp = new Vpicorv32_wrapper__Syms(this, name());
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(picorv32_wrapper, Vpicorv32_wrapper_picorv32_wrapper);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpicorv32_wrapper::~Vpicorv32_wrapper() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vpicorv32_wrapper::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpicorv32_wrapper::eval\n"); );
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("testbench_mod.v", 68, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpicorv32_wrapper::_eval_initial_loop(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("testbench_mod.v", 68, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpicorv32_wrapper::_settle__TOP__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_settle__TOP__1\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
    vlTOPp->trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlTOPp->trap = vlSymsp->TOP__picorv32_wrapper.trap;
}

VL_INLINE_OPT void Vpicorv32_wrapper::_sequent__TOP__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_sequent__TOP__2\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->trap = vlSymsp->TOP__picorv32_wrapper.trap;
    vlTOPp->trace_valid = vlSymsp->TOP__picorv32_wrapper.trace_valid;
    vlTOPp->trace_data = vlSymsp->TOP__picorv32_wrapper.trace_data;
}

void Vpicorv32_wrapper::_eval(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_eval\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlSymsp->TOP__picorv32_wrapper._sequent__TOP__picorv32_wrapper__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlSymsp->TOP__picorv32_wrapper__mem._sequent__TOP__picorv32_wrapper__mem__3(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlSymsp->TOP__picorv32_wrapper__mem._sequent__TOP__picorv32_wrapper__mem__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlSymsp->TOP__picorv32_wrapper__mem._sequent__TOP__picorv32_wrapper__mem__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__picorv32_wrapper._sequent__TOP__picorv32_wrapper__4(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlSymsp->TOP__picorv32_wrapper__mem._sequent__TOP__picorv32_wrapper__mem__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__picorv32_wrapper._sequent__TOP__picorv32_wrapper__5(vlSymsp);
    }
    vlSymsp->TOP__picorv32_wrapper._combo__TOP__picorv32_wrapper__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vpicorv32_wrapper::_eval_initial(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_eval_initial\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlSymsp->TOP__picorv32_wrapper__mem._initial__TOP__picorv32_wrapper__mem__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__picorv32_wrapper._initial__TOP__picorv32_wrapper__2(vlSymsp);
}

void Vpicorv32_wrapper::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::final\n"); );
    // Variables
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpicorv32_wrapper::_eval_settle(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_eval_settle\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper._settle__TOP__picorv32_wrapper__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vpicorv32_wrapper::_change_request(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_change_request\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpicorv32_wrapper::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG

void Vpicorv32_wrapper::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    trap = VL_RAND_RESET_I(1);
    trace_valid = VL_RAND_RESET_I(1);
    trace_data = VL_RAND_RESET_Q(36);
    __Vm_traceActivity = 0;
}
