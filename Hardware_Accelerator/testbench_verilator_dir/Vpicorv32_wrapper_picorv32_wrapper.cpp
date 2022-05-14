// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper_picorv32_wrapper.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========
WData/*127:0*/ Vpicorv32_wrapper_picorv32_wrapper::__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[256][4];

VL_CTOR_IMP(Vpicorv32_wrapper_picorv32_wrapper) {
    VL_CELL(mem, Vpicorv32_wrapper_axi4_mem_periph);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper_picorv32_wrapper::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpicorv32_wrapper_picorv32_wrapper::~Vpicorv32_wrapper_picorv32_wrapper() {
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper::_sequent__TOP__picorv32_wrapper__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_sequent__TOP__picorv32_wrapper__1\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    CData/*6:0*/ __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    IData/*31:0*/ __Vdly__cycle_counter;
    IData/*31:0*/ __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    // Body
    __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_instr 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__do_waitirq 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__timer 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_cycle 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_active 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_pc 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_mask 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask;
    __Vdly__cycle_counter = vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_state 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2 = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode;
    vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle 
        = ((IData)(vlTOPp->resetn) ? (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle)))
            : 0U);
    if ((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd)))) {
        vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT____Vlvbound1 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata;
        if ((0x23U >= (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd))) {
            __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0 
                = vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT____Vlvbound1;
            __Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
            __Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd;
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc;
    }
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div = 1U;
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
           & (IData)(vlTOPp->resetn));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = 0U;
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = 1U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = 0U;
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = 1U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlTOPp->resetn))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd 
            = (IData)(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                           >> 0x20U) : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    __Vdly__cycle_counter = ((IData)(vlTOPp->resetn)
                              ? ((IData)(1U) + vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter)
                              : 0U);
    if (VL_UNLIKELY(((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.trap)))) {
        VL_WRITEF("TRAP after %1d clock cycles\n",32,
                  vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter);
        VL_WRITEF("ALL TESTS PASSED.\n");
        VL_FINISH_MT("testbench_mod.v", 198, "");
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlSymsp->TOP__picorv32_wrapper.trap)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = 0U;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = 1U;
        }
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr;
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                : (0xffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode));
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd 
            = (0x1fU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd));
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1 
            = (0x1fU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2 
            = (0x1fU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2));
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
    }
    if (vlTOPp->resetn) {
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready) 
             & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready) 
             & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready) 
             & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid))))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
    } else {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = 0U;
    }
    if (__Vdlyvset__uut__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs[__Vdlyvdim0__uut__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __Vdlyvval__uut__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter 
        = __Vdly__cycle_counter;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlTOPp->resetn) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))
                    ? VL_EXTENDS_QI(64,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    : (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh)
                    ? VL_EXTENDS_QI(64,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                    : (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_ULL(0);
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_ULL(0);
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x3eU : 0x1eU);
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                            & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        } else {
            __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x7fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                            - (IData)(1U)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x40U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0xfU));
        if (((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
             & (0U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                >> 0x19U))))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                = (0x20U | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1));
        }
        if (((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
             & (2U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                >> 0x19U))))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0x20U;
        }
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0U;
            if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 2U;
                } else {
                    if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                            = (0x3fU & ((IData)(8U) 
                                        + (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U))));
                    } else {
                        if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                        }
                    }
                }
            } else {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                = (0x3fU & ((0x2000U 
                                             & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)
                                             ? ((IData)(8U) 
                                                + (7U 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U)))
                                             : ((IData)(8U) 
                                                + (7U 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U)))));
                        } else {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)) 
                                           & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 0xcU))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                                }
                                if ((2U == (3U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                                }
                                if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                                }
                            }
                        }
                    } else {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            if ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                if ((1U & ((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 0xcU) 
                                           | (0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U)))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                        = ((2U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U)))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U))
                                            : 0U);
                                }
                            } else {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0U;
                            }
                        } else {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                    = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U));
                            }
                        }
                    }
                } else {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                    = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U));
                            }
                        } else {
                            if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((0U != (0x1fU & 
                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 2U;
                                }
                            } else {
                                if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if ((((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xcU)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U));
                                    }
                                    if (((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 0xcU)) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 0U;
                                    }
                                    if ((((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           >> 0xcU) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U));
                                    }
                                    if (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U));
                                    }
                                } else {
                                    if ((6U == (7U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 0xdU)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->resetn) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
               & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
            ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
            : VL_ULL(0));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_ULL(0);
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffffffffff7) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 3U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffffffff0) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffffffffff7f) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 7U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffffffffff0f) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffffffff7ff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xbU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffffff0ff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 8U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffffffff7fff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xfU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffffffff0fff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0xcU));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffffff7ffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x13U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffff0ffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x10U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffffff7fffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x17U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffffff0fffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x14U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffff7ffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1bU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffff0ffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x18U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffff7fffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1fU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffff0fffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x1cU));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffff7ffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x23U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffff0ffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x20U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffff7fffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x27U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffff0fffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x24U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffff7ffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2bU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffff0ffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x28U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffff7fffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2fU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffff0fffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x2cU));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfff7ffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x33U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfff0ffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x30U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xff7fffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x37U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xff0fffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x34U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xf7ffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3bU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xf0ffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x38U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0x7fffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3fU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x3cU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
           << 1U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
           >> 1U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
           << 1U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode
                : ((3U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
            = (0x1fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1)
                         : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1)));
    }
}

void Vpicorv32_wrapper_picorv32_wrapper::_initial__TOP__picorv32_wrapper__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_initial__TOP__picorv32_wrapper__2\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp4[3];
    // Body
    __Vtemp4[0U] = 0x653d2573U;
    __Vtemp4[1U] = 0x6d776172U;
    __Vtemp4[2U] = 0x666972U;
    if ((! VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(3, __Vtemp4),
                                vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0U] = 0x2e686578U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[1U] = 0x77617265U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[2U] = 0x6669726dU;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[3U] = 0x6172652fU;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[4U] = 0x69726d77U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[5U] = 0x66U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[6U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[7U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[8U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[9U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0xaU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0xbU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0xcU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0xdU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0xeU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0xfU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x10U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x11U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x12U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x13U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x14U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x15U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x16U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x17U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x18U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x19U] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x1aU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x1bU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x1cU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x1dU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x1eU] = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file[0x1fU] = 0U;
    }
    VL_READMEM_N(true, 32, 524288, 0, VL_CVT_PACK_STR_NW(32, vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file)
                 , vlSymsp->TOP__picorv32_wrapper__mem.memory
                 , 0, ~VL_ULL(0));
    vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = 0U;
}

void Vpicorv32_wrapper_picorv32_wrapper::_settle__TOP__picorv32_wrapper__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_settle__TOP__picorv32_wrapper__3\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 
            = (0x1fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1)
                         : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode
                : ((3U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
            ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
            : VL_ULL(0));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_ULL(0);
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffffffffff7) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 3U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffffffff0) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffffffffff7f) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 7U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffffffffff0f) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffffffff7ff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xbU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffffff0ff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 8U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffffffff7fff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0xfU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffffffff0fff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0xcU));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffffff7ffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x13U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffff0ffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x10U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffffff7fffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x17U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffffff0fffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x14U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffffff7ffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1bU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffff0ffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x18U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffffff7fffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x1fU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffffff0fffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x1cU));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffffff7ffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x23U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffff0ffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x20U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffffff7fffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x27U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffffff0fffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x24U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfffff7ffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2bU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffff0ffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x28U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xffff7fffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x2fU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xffff0fffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x2cU));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xfff7ffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x33U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfff0ffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x30U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xff7fffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x37U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xff0fffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x34U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0xf7ffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3bU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xf0ffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x38U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 
        = (1U & ((((0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 
        = (0xfU & (((IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((VL_ULL(0x7fffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1)) 
              << 0x3fU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((VL_ULL(0xfffffffffffffff) & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2)) 
              << 0x3cU));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
           << 1U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
           >> 1U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
           << 1U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))))) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1]
                : 0U) : 0U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = (((IData)(vlTOPp->resetn) & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))))) 
           & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__Vtableidx1 = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][0U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][1U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][2U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][3U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->resetn))))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 1U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch))
            ? (0xfffffffeU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out)
            : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
            ? ((0x23U >= (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2]
                : 0U) : 0U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
            = (0x1fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2)
                         : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
            = (0x1fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd)
                         : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                    = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                        ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                        : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out);
            } else {
                if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                            = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                               & (~ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm
                : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                     | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor) 
                       | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl) 
                          | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                             | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or) 
                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                                            | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) 
                                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) 
                                                     | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) 
                                                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) 
                                                           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq) 
                                                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer))))))))))))))))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0);
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c7569);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6175697063);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c72);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626571);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626e65);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c74);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626765);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c7475);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x62676575);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c62);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c68);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c77);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6275);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6875);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7362);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7368);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7377);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x61646469);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7469);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c746975);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f7269);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f7269);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e6469);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c69);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c69);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726169);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616464);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737562);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c74);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7475);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f72);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737261);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f72);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e64);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c65);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c6568);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e737472);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e73747268);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x67657471);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73657471);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x726574697271);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6d61736b697271);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x77616974697271);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x74696d6572);
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr;
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd;
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn 
        = (((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger)) 
           & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active)) 
              | (~ (IData)((0U != (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                                   & (~ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask)))))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q)));
    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
                = ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
            }
        }
    }
    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))));
            }
        }
    }
    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
            if ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
                if ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                        = (0xffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                      >> 0x10U));
                }
            } else {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (0xffffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata);
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                    = ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                        ? ((1U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                            ? (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                     >> 0x10U))) : 
                       ((1U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                         ? (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                     >> 8U)) : (0xffU 
                                                & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata)));
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           < vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           == vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = ((0xffffffefU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__irq) 
                                                 | ((IData)(
                                                            (0x1fffU 
                                                             == 
                                                             (0x1fffU 
                                                              & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle)))) 
                                                    << 4U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = ((0xffffffdfU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__irq) 
                                                 | ((IData)(
                                                            (0xffffU 
                                                             == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle))) 
                                                    << 5U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword 
        = ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
             | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
               >> 1U)) & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr
                : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr);
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq)));
        } else {
            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts)));
            } else {
                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu)));
                } else {
                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts;
                    } else {
                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
        } else {
            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                    = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                       ^ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
            } else {
                if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                           | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
                } else {
                    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                            = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready)) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word) 
              & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata
            : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)
            ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer)
            : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)
                ? ((0xffff0000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                   << 0x10U)) | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer))
                : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)
                    ? (0xffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                  >> 0x10U)) : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done 
        = (((IData)(vlTOPp->resetn) & ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                         & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                        & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)) 
                                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))) 
                                       | ((3U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                          & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)))) 
           & ((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)) 
              | ((~ (IData)((3U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) 
                 & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlTOPp->resetn) & ((((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))))) 
                                       & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                          | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))) 
                                      | ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                           & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                               ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                               : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword))) 
                                          & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword))) 
                                         & (3U == (3U 
                                                   & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))));
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper::_sequent__TOP__picorv32_wrapper__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_sequent__TOP__picorv32_wrapper__4\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlSymsp->TOP__picorv32_wrapper.trap))))) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata;
        }
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->resetn)) | (IData)(vlSymsp->TOP__picorv32_wrapper.trap))))) {
        if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr 
                = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                    ? (0xfffffffcU & (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                                        >> 2U) + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                                  & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                                      ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                                      : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))) 
                                      << 2U)) : (0xfffffffcU 
                                                 & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1));
        }
    }
    if (vlTOPp->resetn) {
        if ((1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword;
        }
    } else {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid 
        = ((IData)(vlTOPp->resetn) & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                                      & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlSymsp->TOP__picorv32_wrapper.trap)))) {
        if ((1U & (~ (IData)(vlTOPp->resetn)))) {
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready)))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid = 0U;
        }
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb 
                = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb) 
                   & VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid 
                    = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)));
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr 
                    = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb = 0U;
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid = 1U;
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr = 0U;
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else {
            if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid = 1U;
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 1U;
                        if ((1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)))) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer 
                                = (0xffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                              >> 0x10U));
                        }
                    } else {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid = 0U;
                        if ((1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                            if ((1U & ((~ (IData)((3U 
                                                   == 
                                                   (3U 
                                                    & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata)))) 
                                       | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer 
                                    = (0xffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                                  >> 0x10U));
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 1U;
                            } else {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
                            }
                        }
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state 
                            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))
                                ? 0U : 3U);
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
                    }
                }
            } else {
                if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid = 0U;
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) {
                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) {
                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_state;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword;
    vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))))) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid)));
    vlSymsp->TOP__picorv32_wrapper.trap = 0U;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh = 0U;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_cycle 
        = ((IData)(vlTOPp->resetn) ? (VL_ULL(1) + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle)
            : VL_ULL(0));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending;
    if ((0U != vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer)) {
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__timer 
            = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer 
               - (IData)(1U));
    }
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 0U;
    vlSymsp->TOP__picorv32_wrapper.trace_valid = 0U;
    if (vlTOPp->resetn) {
        if (((((((((0x80U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                vlSymsp->TOP__picorv32_wrapper.trap = 1U;
            } else {
                if ((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                        = (1U & ((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger)) 
                                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq))));
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc;
                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store)
                                ? (0xfffffffeU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                                                   ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                                                   : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out))
                                : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
                    } else {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                                      & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))))) {
                            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc = 0x10U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_active = 1U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi 
                                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                                           & (~ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
                                }
                            }
                        }
                    }
                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 0U;
                        vlSymsp->TOP__picorv32_wrapper.trace_valid = 1U;
                        vlSymsp->TOP__picorv32_wrapper.trace_data 
                            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)
                                ? (VL_ULL(0x100000000) 
                                   | (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                        ? VL_ULL(0x800000000)
                                        : VL_ULL(0)) 
                                      | (VL_ULL(0xfffffffe) 
                                         & (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc)))))
                                : (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                     ? VL_ULL(0x800000000)
                                     : VL_ULL(0)) | 
                                   ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                                     ? (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q))
                                     : (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out)))));
                    }
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_pc 
                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc;
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc;
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 0U;
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd;
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr;
                    if ((((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
                            & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active))) 
                           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay))) 
                          & (0U != (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                                    & (~ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask)))) 
                         | (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state)))) {
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_state 
                            = ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))
                                ? 1U : ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))
                                         ? 2U : 0U));
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_compr 
                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr;
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                            = (0x3fU & (0x20U | (1U 
                                                 & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))));
                    } else {
                        if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq)) 
                             & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq))) {
                            if ((0U != vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending)) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                                    = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                                       + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr)
                                           ? 2U : 4U));
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = 1U;
                            }
                        } else {
                            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) {
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_instr 
                                    = (VL_ULL(1) + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr);
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                                    = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                                       + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr)
                                           ? 2U : 4U));
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 1U;
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc 
                                           + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 1U;
                                } else {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
                                        = (1U & ((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr)) 
                                                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq))));
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                                }
                            }
                        }
                    }
                } else {
                    if ((0x20U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = 0U;
                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = 0U;
                        if (((((((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap) 
                                   | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                                  | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal)) 
                                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq)) 
                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq)) 
                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq)) 
                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq)) 
                             | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer))) {
                            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap) {
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 1U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                                    = (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready) {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 0U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                } else {
                                    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout) 
                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 0U;
                                        if ((1U & (
                                                   (~ 
                                                    (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                                                     >> 1U)) 
                                                   & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                                = (2U 
                                                   | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                        } else {
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                                        }
                                    }
                                }
                            } else {
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                            = (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle);
                                    } else {
                                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                = (IData)(
                                                          (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle 
                                                           >> 0x20U));
                                        } else {
                                            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                    = (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr);
                                            } else {
                                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                        = (IData)(
                                                                  (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                } else {
                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui)
                                                ? 0U
                                                : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc);
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    } else {
                                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                        } else {
                                            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_rd 
                                                    = 
                                                    (0x20U 
                                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd));
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                            } else {
                                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
                                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi = 0U;
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0U;
                                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 1U;
                                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                        = 
                                                        (0xfffffffeU 
                                                         & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1);
                                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                                } else {
                                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
                                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask;
                                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_mask 
                                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                    } else {
                                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer;
                                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__timer 
                                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap)))) {
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 1U;
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai) {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                                        = (0x1fU & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2));
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                                } else {
                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    } else {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                                            = (0x1fU 
                                               & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 2U;
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                        } else {
                                            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                                            } else {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x10U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                                = (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2);
                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 
                                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val 
                                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2;
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap) {
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 1U;
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready) {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 0U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                } else {
                                    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout) 
                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 0U;
                                        if ((1U & (
                                                   (~ 
                                                    (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                                                     >> 1U)) 
                                                   & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                                                = (2U 
                                                   | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                        } else {
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                                        }
                                    }
                                }
                            } else {
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 2U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                } else {
                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 4U;
                                    } else {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    }
                                }
                            }
                        } else {
                            if ((8U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                    = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                                       + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_rd = 0U;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                    }
                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch 
                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 1U;
                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                }
                            } else {
                                if ((4U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh))) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                    } else {
                                        if ((4U <= (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh))) {
                                            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                                                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll))) {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                     << 4U);
                                            } else {
                                                if (
                                                    ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl))) {
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                        = 
                                                        (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                         >> 4U);
                                                } else {
                                                    if (
                                                        ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra))) {
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 4U);
                                                    }
                                                }
                                            }
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh) 
                                                      - (IData)(4U)));
                                        } else {
                                            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                                                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll))) {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                     << 1U);
                                            } else {
                                                if (
                                                    ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl))) {
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                        = 
                                                        (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                         >> 1U);
                                                } else {
                                                    if (
                                                        ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra))) {
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, 1U);
                                                    }
                                                }
                                            }
                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh) 
                                                      - (IData)(1U)));
                                        }
                                    }
                                } else {
                                    if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
                                        if ((1U & (
                                                   (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
                                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                                vlSymsp->TOP__picorv32_wrapper.trace_valid = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.trace_data 
                                                    = 
                                                    (VL_ULL(0x200000000) 
                                                     | (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                          ? VL_ULL(0x800000000)
                                                          : VL_ULL(0)) 
                                                        | (VL_ULL(0xffffffff) 
                                                           & ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) 
                                                              + (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm))))));
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                     + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                                            }
                                            if (((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 1U;
                                        if ((1U & (
                                                   (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
                                            if (((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
                                                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu) {
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word;
                                                } else {
                                                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh) {
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                            = 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0xffffU 
                                                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word));
                                                    } else {
                                                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb) {
                                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out 
                                                                = 
                                                                VL_EXTENDS_II(32,8, 
                                                                              (0xffU 
                                                                               & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word));
                                                        }
                                                    }
                                                }
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                                                if (
                                                    ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu))) {
                                                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (
                                                        ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu))) {
                                                        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
                                                            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu 
                                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh 
                                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh;
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb 
                                                    = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb;
                                                vlSymsp->TOP__picorv32_wrapper.trace_valid = 1U;
                                                vlSymsp->TOP__picorv32_wrapper.trace_data 
                                                    = 
                                                    (VL_ULL(0x200000000) 
                                                     | (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active)
                                                          ? VL_ULL(0x800000000)
                                                          : VL_ULL(0)) 
                                                        | (VL_ULL(0xffffffff) 
                                                           & ((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) 
                                                              + (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm))))));
                                                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                     + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_instr = VL_ULL(0);
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_active = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_mask = 0xffffffffU;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_state = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__timer = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x40U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
           | vlSymsp->TOP__picorv32_wrapper.__PVT__irq);
    if ((0U != vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer)) {
        if ((0U == (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer 
                    - (IData)(1U)))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                = (1U | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlTOPp->resetn) & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                    = (4U | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
            } else {
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
            if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                    = (4U | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
            } else {
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc)) {
        if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active))))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending 
                = (4U | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending);
        } else {
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->resetn)) | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done)))) {
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_sh;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_cycle;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__timer;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__do_waitirq;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__count_instr;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_rd;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
            ? ((0x23U >= (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1))
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1]
                : 0U) : 0U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = ((0xffffffefU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__irq) 
                                                 | ((IData)(
                                                            (0x1fffU 
                                                             == 
                                                             (0x1fffU 
                                                              & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle)))) 
                                                    << 4U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__irq = ((0xffffffdfU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__irq) 
                                                 | ((IData)(
                                                            (0xffffU 
                                                             == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle))) 
                                                    << 5U));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_active;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_pc;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__latched_compr;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_mask;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__irq_state;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_out;
    vlSymsp->TOP__picorv32_wrapper.__Vtableidx1 = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][0U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][1U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][2U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = vlSymsp->TOP__picorv32_wrapper.__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlSymsp->TOP__picorv32_wrapper.__Vtableidx1][3U];
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out;
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = 0U;
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = 1U;
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
            = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 7U));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = 0U;
            if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                        = (0x3fU & ((IData)(8U) + (7U 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))));
                } else {
                    if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                            = (0x3fU & ((IData)(8U) 
                                        + (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 2U))));
                    }
                }
            } else {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)) 
                                           & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 0xcU))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                                }
                                if ((2U == (3U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                                }
                                if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U))));
                                }
                            }
                        }
                    } else {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            if ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                if ((1U & ((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 0xcU) 
                                           | (0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U)))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                        = ((2U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 7U)))
                                            ? (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U))
                                            : (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U)));
                                }
                            } else {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                    = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U));
                            }
                        } else {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                = ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)
                                    ? 1U : (0x1fU & 
                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)));
                        }
                    }
                } else {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                    = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 7U));
                            }
                        } else {
                            if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((0U != (0x1fU & 
                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                        = (0x1fU & 
                                           (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 7U));
                                }
                            } else {
                                if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if ((((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xcU)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = 0U;
                                    }
                                    if (((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 0xcU)) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U));
                                    }
                                    if ((((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           >> 0xcU) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = 1U;
                                    }
                                    if (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 7U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0x14U));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = 0U;
            if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                = (0x3fU & ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U))));
                        }
                    }
                }
            } else {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = 0U;
                        } else {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)) 
                                           & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 0xcU))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                        = ((0x20U & 
                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 2U)));
                                }
                                if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                        = (0x3fU & 
                                           ((IData)(8U) 
                                            + (7U & 
                                               (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 2U))));
                                }
                            }
                        }
                    }
                } else {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                    = ((0x20U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)) 
                                       | (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 2U)));
                            }
                        } else {
                            if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if (((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 0xcU)) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U));
                                    }
                                    if (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U));
                                    }
                                } else {
                                    if ((6U == (7U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 0xdU)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 
                                            = (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq 
            = ((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
               & (4U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0x19U))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq 
            = ((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
               & (2U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0x19U))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = ((((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                 & (~ (IData)((0U != (0x7ffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 0x15U)))))) 
                & (~ (IData)((0U != (0x1fffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 7U)))))) 
               | (0x9002U == (0xffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq 
            = ((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                  >> 0x19U))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq 
            = ((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                  >> 0x19U))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq 
            = ((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (3U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                  >> 0x19U))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer 
            = ((0xbU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (5U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                  >> 0x19U))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle 
            = (((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (0xc0002U == (0xfffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                  & (0xc0102U == (0xfffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh 
            = (((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (0xc8002U == (0xfffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
                  & (0xc8102U == (0xfffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr 
            = ((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0xc0202U == (0xfffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh 
            = ((0x73U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0xc8202U == (0xfffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch))
            ? (0xfffffffeU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out)
            : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc);
    if ((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))))) {
        if ((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter))) {
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout 
        = (1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter)))));
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch)))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                    = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu)
                        ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q
                        : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out);
            } else {
                if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc 
                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
                } else {
                    if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata 
                            = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                               & (~ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd 
            = (0x1fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd)
                         : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
            ? ((0x23U >= (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2))
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs
               [vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2]
                : 0U) : 0U);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 
            = (0x1fU & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                         ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2)
                         : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2)));
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
            | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem) 
                  | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu)))) 
           & (IData)(vlTOPp->resetn));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)))))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (7U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (7U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (((1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j
                : (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc))
                    ? (0xfffff000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q)
                    : (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (0xfffU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x14U)))
                        : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu = 0U;
    if ((((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready))) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((4U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((7U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    if (((((IData)(vlTOPp->resetn) & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid)) 
          & (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn))) 
         & (1U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                            >> 0x19U))))) {
        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm
                : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm);
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm 
                        = (0U != (0xffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           >> 5U)));
                }
            } else {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((1U & ((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)) 
                                           & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 0xcU))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                                }
                                if ((2U == (3U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                                }
                            }
                        }
                    } else {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            if ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                if ((1U & ((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 0xcU) 
                                           | (0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U)))))) {
                                    if ((2U == (0x1fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 7U)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                            }
                        } else {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                            }
                        }
                    }
                } else {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = 1U;
                    }
                }
            } else {
                if ((1U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((0U != (0x1fU & 
                                            (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 7U)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = 1U;
                        }
                    }
                }
            } else {
                if ((1U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((4U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if ((6U == (7U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 0xdU)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0x7ffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0xfffff800U & VL_EXTENDS_II(32,12, 
                                                  (0xffeU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 1U)))));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffffefU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x10U & (VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U))) 
                               >> 6U)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffcffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x300U & VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U)))));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffbffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x400U & (VL_EXTENDS_II(32,12, 
                                              (0xffeU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 1U))) 
                                << 3U)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffffbfU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x40U & VL_EXTENDS_II(32,12, 
                                            (0xffeU 
                                             & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 1U)))));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffff7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x80U & (VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U))) 
                               << 2U)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffff1U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0xeU & (VL_EXTENDS_II(32,12, 
                                            (0xffeU 
                                             & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 1U))) 
                              >> 1U)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xffffffdfU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (0x20U & (VL_EXTENDS_II(32,12, 
                                             (0xffeU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 1U))) 
                               << 4U)));
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j 
                = ((0xfffffffeU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j) 
                   | (1U & VL_EXTENDS_II(1,12, (0xffeU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 1U)))));
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xfU)))) {
                        if ((0x4000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                            if ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                if ((1U & ((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            >> 0xcU) 
                                           | (0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U)))))) {
                                    if ((2U != (0x1fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 7U)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal = 1U;
                            }
                        }
                    } else {
                        if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr 
            = ((0x67U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) 
               & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                               >> 0xcU))));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if ((((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xcU)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr = 1U;
                                    }
                                    if ((((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                           >> 0xcU) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) 
                                         & (0U == (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and 
            = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (7U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (((1U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
    }
    if ((1U & (~ (IData)(vlTOPp->resetn)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or = 0U;
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__pcpi_valid;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = 0U;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd = 0U;
    if (vlTOPp->resetn) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start) {
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running = 1U;
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                       >> 0x1fU)) ? VL_NEGATE_I(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1);
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor 
                = (VL_ULL(0x7fffffffffffffff) & (((
                                                   ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                                                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem)) 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                                      >> 0x1fU))
                                                   ? 
                                                  VL_NEGATE_Q((QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)))
                                                   : (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))) 
                                                 << 0x1fU));
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient = 0U;
            vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
        } else {
            if (((~ (IData)((0U != vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk))) 
                 & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running))) {
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running = 0U;
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = 1U;
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = 1U;
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd 
                    = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                        | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu))
                        ? ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign)
                            ? VL_NEGATE_I(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient)
                            : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient)
                        : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign)
                            ? VL_NEGATE_I(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend)
                            : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend));
            } else {
                if ((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor 
                     <= (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend)))) {
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend 
                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend 
                           - (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor));
                    vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient 
                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient 
                           | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk);
                }
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor 
                    = (VL_ULL(0x7fffffffffffffff) & 
                       (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor 
                        >> 1U));
                vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk 
                    = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk 
                       >> 1U);
            }
        }
    } else {
        vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) 
                     | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) 
                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor) 
                       | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl) 
                          | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                             | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or) 
                                | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and) 
                                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) 
                                      | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) 
                                            | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) 
                                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) 
                                                     | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) 
                                                        | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) 
                                                           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq) 
                                                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer))))))))))))))))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0);
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c7569);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6175697063);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c72);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626571);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626e65);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c74);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626765);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c7475);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x62676575);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c62);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c68);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c77);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6275);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6875);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7362);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7368);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7377);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x61646469);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7469);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c746975);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f7269);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f7269);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e6469);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c69);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c69);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726169);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616464);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737562);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c74);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7475);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f72);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737261);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f72);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e64);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c65);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c6568);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e737472);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e73747268);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x67657471);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73657471);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x726574697271);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6d61736b697271);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x77616974697271);
    }
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x74696d6572);
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
        if ((3U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U != (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0x8000U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)) {
                        if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                                if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                        if ((0U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U != (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    if (((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             >> 0xcU)) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = 1U;
                                    }
                                    if (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xcU) 
                                         & (0U != (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr
                : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr);
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr;
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd;
        }
    }
    if (vlTOPp->resetn) {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                     & ((1U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               >> 0x1fU)) != (1U & 
                                              (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                               >> 0x1fU)))) 
                    & (0U != vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)) 
                   | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU)));
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn 
        = (((0x40U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state)) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger)) 
           & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active)) 
              | (~ (IData)((0U != (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending 
                                   & (~ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask)))))));
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)))) {
        if ((0U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
            if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                              >> 0xdU)))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = (0xffff8fffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                    = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                       | ((0x3c000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          << 0x13U)) 
                          | ((0x3000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                            << 0xdU)) 
                             | ((0x800000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              << 0x12U)) 
                                | (0x400000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                << 0x10U))))));
            } else {
                if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                           | ((0x4000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             << 0x15U)) 
                              | ((0x3800000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                << 0xdU)) 
                                 | (0x400000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 << 0x10U)))));
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0x2000U | (0xffff8fffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                } else {
                    if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = ((0x1ffffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                               | ((0x4000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 << 0x15U)) 
                                  | (0x2000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   << 0xdU))));
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = ((0xfffff07fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                               | ((0xc00U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                  | (0x200U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               << 3U))));
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0x2000U | (0xffff8fffU 
                                          & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                    }
                }
            }
        } else {
            if ((1U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = (0xffff8fffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                        = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                           | (0xfff00000U & (VL_EXTENDS_II(12,6, 
                                                           ((0x20U 
                                                             & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                >> 7U)) 
                                                            | (0x1fU 
                                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  >> 2U)))) 
                                             << 0x14U)));
                } else {
                    if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0xffff8fffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                               | (0xfff00000U & (VL_EXTENDS_II(12,6, 
                                                               ((0x20U 
                                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                    >> 7U)) 
                                                                | (0x1fU 
                                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                      >> 2U)))) 
                                                 << 0x14U)));
                    } else {
                        if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            if ((2U == (0x1fU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                 >> 7U)))) {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                    = (0xffff8fffU 
                                       & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                    = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                       | (0xfff00000U 
                                          & (VL_EXTENDS_II(12,10, 
                                                           ((0x200U 
                                                             & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                >> 3U)) 
                                                            | ((0x180U 
                                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                   << 4U)) 
                                                               | ((0x40U 
                                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                      << 1U)) 
                                                                  | ((0x20U 
                                                                      & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                         << 3U)) 
                                                                     | (0x10U 
                                                                        & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                           >> 2U))))))) 
                                             << 0x14U)));
                            } else {
                                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                    = ((0xfffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                       | (0xfffff000U 
                                          & (VL_EXTENDS_II(20,6, 
                                                           ((0x20U 
                                                             & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                >> 7U)) 
                                                            | (0x1fU 
                                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                  >> 2U)))) 
                                             << 0xcU)));
                            }
                        } else {
                            if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if ((0U == (3U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x1ffffffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x5000U 
                                           | (0xffff8fffU 
                                              & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                }
                                if ((1U == (3U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x40000000U 
                                           | (0x1ffffffU 
                                              & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x5000U 
                                           | (0xffff8fffU 
                                              & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                }
                                if ((2U == (3U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x7000U 
                                           | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0xfffffU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (0xfff00000U 
                                              & (VL_EXTENDS_II(12,6, 
                                                               ((0x20U 
                                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                    >> 7U)) 
                                                                | (0x1fU 
                                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                      >> 2U)))) 
                                                 << 0x14U)));
                                }
                                if ((3U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xaU)))) {
                                    if ((0U == (3U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 5U)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = (0xffff8fffU 
                                               & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    }
                                    if ((1U == (3U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 5U)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = (0x4000U 
                                               | (0xffff8fffU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                    }
                                    if ((2U == (3U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 5U)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = (0x6000U 
                                               | (0xffff8fffU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                    }
                                    if ((3U == (3U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 5U)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = (0x7000U 
                                               | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    }
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0x1ffffffU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                    >> 5U)))
                                                ? 0x20U
                                                : 0U) 
                                              << 0x19U));
                                }
                            } else {
                                if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xffff8fffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0x7fffffffU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (0x80000000U 
                                              & (VL_EXTENDS_II(12,8, 
                                                               ((0x80U 
                                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                    >> 5U)) 
                                                                | ((0x60U 
                                                                    & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                   | ((0x10U 
                                                                       & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                          << 2U)) 
                                                                      | ((0xcU 
                                                                          & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                             >> 8U)) 
                                                                         | (3U 
                                                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                               >> 3U))))))) 
                                                 << 0x14U)));
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0xffffff7fU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (0x80U 
                                              & (VL_EXTENDS_II(12,8, 
                                                               ((0x80U 
                                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                    >> 5U)) 
                                                                | ((0x60U 
                                                                    & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                   | ((0x10U 
                                                                       & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                          << 2U)) 
                                                                      | ((0xcU 
                                                                          & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                             >> 8U)) 
                                                                         | (3U 
                                                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                               >> 3U))))))) 
                                                 >> 3U)));
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0x81ffffffU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (0x7e000000U 
                                              & (VL_EXTENDS_II(12,8, 
                                                               ((0x80U 
                                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                    >> 5U)) 
                                                                | ((0x60U 
                                                                    & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                   | ((0x10U 
                                                                       & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                          << 2U)) 
                                                                      | ((0xcU 
                                                                          & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                             >> 8U)) 
                                                                         | (3U 
                                                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                               >> 3U))))))) 
                                                 << 0x15U)));
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0xfffff0ffU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (0xf00U 
                                              & (VL_EXTENDS_II(12,8, 
                                                               ((0x80U 
                                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                    >> 5U)) 
                                                                | ((0x60U 
                                                                    & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                   | ((0x10U 
                                                                       & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                          << 2U)) 
                                                                      | ((0xcU 
                                                                          & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                             >> 8U)) 
                                                                         | (3U 
                                                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                               >> 3U))))))) 
                                                 << 8U)));
                                } else {
                                    if ((7U == (7U 
                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                   >> 0xdU)))) {
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = (0x1000U 
                                               | (0xffff8fffU 
                                                  & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = ((0x7fffffffU 
                                                & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                               | (0x80000000U 
                                                  & (VL_EXTENDS_II(12,8, 
                                                                   ((0x80U 
                                                                     & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                        >> 5U)) 
                                                                    | ((0x60U 
                                                                        & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                       | ((0x10U 
                                                                           & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                              << 2U)) 
                                                                          | ((0xcU 
                                                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 8U)) 
                                                                             | (3U 
                                                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 3U))))))) 
                                                     << 0x14U)));
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = ((0xffffff7fU 
                                                & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                               | (0x80U 
                                                  & (VL_EXTENDS_II(12,8, 
                                                                   ((0x80U 
                                                                     & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                        >> 5U)) 
                                                                    | ((0x60U 
                                                                        & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                       | ((0x10U 
                                                                           & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                              << 2U)) 
                                                                          | ((0xcU 
                                                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 8U)) 
                                                                             | (3U 
                                                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 3U))))))) 
                                                     >> 3U)));
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = ((0x81ffffffU 
                                                & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                               | (0x7e000000U 
                                                  & (VL_EXTENDS_II(12,8, 
                                                                   ((0x80U 
                                                                     & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                        >> 5U)) 
                                                                    | ((0x60U 
                                                                        & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                       | ((0x10U 
                                                                           & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                              << 2U)) 
                                                                          | ((0xcU 
                                                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 8U)) 
                                                                             | (3U 
                                                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 3U))))))) 
                                                     << 0x15U)));
                                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                            = ((0xfffff0ffU 
                                                & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                               | (0xf00U 
                                                  & (VL_EXTENDS_II(12,8, 
                                                                   ((0x80U 
                                                                     & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                        >> 5U)) 
                                                                    | ((0x60U 
                                                                        & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched) 
                                                                       | ((0x10U 
                                                                           & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                              << 2U)) 
                                                                          | ((0xcU 
                                                                              & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 8U)) 
                                                                             | (3U 
                                                                                & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                                                >> 3U))))))) 
                                                     << 8U)));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((2U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched))) {
                    if ((0U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xdU)))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0x1ffffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                            = (0x1000U | (0xffff8fffU 
                                          & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                    } else {
                        if ((2U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                          >> 0xdU)))) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                = ((0xfffffU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                   | ((0xc000000U & 
                                       (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                        << 0x18U)) 
                                      | ((0x2000000U 
                                          & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                             << 0xdU)) 
                                         | (0x1c00000U 
                                            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               << 0x12U)))));
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                = (0x2000U | (0xffff8fffU 
                                              & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                        } else {
                            if ((4U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                              >> 0xdU)))) {
                                if (((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xcU)) 
                                     & (0U == (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xffff8fffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xfffffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                }
                                if (((~ (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                         >> 0xcU)) 
                                     & (0U != (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xffff8fffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x1ffffffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                }
                                if ((((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                       >> 0xcU) & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                       >> 7U)))) 
                                     & (0U == (0x1fU 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 2U))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xffff8fffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xfffffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                }
                                if (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                      >> 0xcU) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                      >> 2U))))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0xffff8fffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x1ffffffU 
                                           & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
                                }
                            } else {
                                if ((6U == (7U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xdU)))) {
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0x1ffffffU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | ((0xc000000U 
                                               & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  << 0x13U)) 
                                              | (0x2000000U 
                                                 & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                    << 0xdU))));
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = ((0xfffff07fU 
                                            & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q) 
                                           | (0xe00U 
                                              & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched));
                                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q 
                                        = (0x2000U 
                                           | (0xffff8fffU 
                                              & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op2;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__reg_op1;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSymsp->TOP__picorv32_wrapper.__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst;
    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))));
            }
        }
    }
    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
                = ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)));
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           < vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1, vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq 
        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
           == vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword 
        = ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
             | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)) 
            & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
               >> 1U)) & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq;
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq)));
        } else {
            if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts)));
            } else {
                if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu)));
                } else {
                    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts;
                    } else {
                        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
                            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 
                                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                   + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2));
    } else {
        if (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare) {
            vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0;
        } else {
            if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori) 
                 | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                    = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                       ^ vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
            } else {
                if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori) 
                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or))) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                        = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                           | vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
                } else {
                    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi) 
                         | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and))) {
                        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out 
                            = (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper::_sequent__TOP__picorv32_wrapper__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_sequent__TOP__picorv32_wrapper__5\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
           | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
    if ((0U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    } else {
        if ((1U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
            if ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
                if ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)) {
                    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                        = (0xffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                      >> 0x10U));
                }
            } else {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (0xffffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata);
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word 
                    = ((2U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                        ? ((1U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                            ? (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                     >> 0x10U))) : 
                       ((1U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1)
                         ? (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
                                     >> 8U)) : (0xffU 
                                                & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata)));
            }
        }
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_picorv32_wrapper::_combo__TOP__picorv32_wrapper__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_combo__TOP__picorv32_wrapper__6\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write 
        = (((IData)(vlTOPp->resetn) & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))))) 
           & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->resetn))))) {
        vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = 1U;
    }
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word)) 
           & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer 
        = (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready)) 
           | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word) 
              & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata
            : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)
            ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer)
            : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword)
                ? ((0xffff0000U & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                   << 0x10U)) | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer))
                : ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)
                    ? (0xffffU & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                  >> 0x10U)) : vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done 
        = (((IData)(vlTOPp->resetn) & ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                         & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))) 
                                        & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata)) 
                                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))) 
                                       | ((3U == (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state)) 
                                          & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst)))) 
           & ((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)) 
              | ((~ (IData)((3U == (3U & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))) 
                 & (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer))));
    vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlTOPp->resetn) & ((((~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state))))) 
                                       & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                          | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata))) 
                                      | ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                           & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                               ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                               : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword))) 
                                          & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword))) 
                                         & (3U == (3U 
                                                   & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched)))));
}

void Vpicorv32_wrapper_picorv32_wrapper::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    resetn = VL_RAND_RESET_I(1);
    trap = VL_RAND_RESET_I(1);
    trace_valid = VL_RAND_RESET_I(1);
    trace_data = VL_RAND_RESET_Q(36);
    __PVT__irq = VL_RAND_RESET_I(32);
    __PVT__count_cycle = VL_RAND_RESET_I(16);
    __PVT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, __PVT__firmware_file);
    __PVT__cycle_counter = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__eoi = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__mem_valid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__mem_addr = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__mem_wdata = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    __PVT__uut__DOT__mem_instr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__mem_ready = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_read = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_write = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    __PVT__uut__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__next_pc = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__irq_delay = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__irq_pending = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<36; ++__Vi0) {
            __PVT__uut__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__uut__DOT__picorv32_core__DOT__i = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    __PVT__uut__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    __PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_xfer = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    __PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__mem_done = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_lui = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_auipc = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_jal = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_jalr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_beq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_bne = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_blt = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_bge = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_bltu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_lb = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_lh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_lw = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_lbu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_lhu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sb = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sw = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_addi = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_slti = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_xori = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_ori = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_andi = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_slli = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_srli = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_srai = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_add = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sub = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sll = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_slt = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sltu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_xor = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_srl = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_sra = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_or = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_and = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_getq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_setq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_retirq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_timer = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__instr_trap = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__decoded_rd = VL_RAND_RESET_I(6);
    __PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = VL_RAND_RESET_I(6);
    __PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = VL_RAND_RESET_I(6);
    __PVT__uut__DOT__picorv32_core__DOT__decoded_imm = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__compressed_instr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_compare = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_next = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    __PVT__uut__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    __PVT__uut__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, __PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state);
    __PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_store = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_stalu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_branch = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_trace = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(6);
    __PVT__uut__DOT__picorv32_core__DOT__current_pc = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    __PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_out = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__alu_out_q = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_wait = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_eq = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_ltu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__alu_lts = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    uut__DOT__picorv32_core__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_RAND_RESET_Q(64);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_RAND_RESET_I(7);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_RAND_RESET_I(1);
    uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1 = VL_RAND_RESET_I(1);
    uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2 = VL_RAND_RESET_I(4);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    __PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[0],0x00000000);
    VL_CONST_W_2X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[1],0x0000006c,0x646d656d);
    VL_CONST_W_2X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[2],0x00000073,0x746d656d);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[3],0x00000000);
    VL_CONST_W_2X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[4],0x00000073,0x68696674);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[5],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[6],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[7],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[8],0x65786563);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[9],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[10],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[11],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[12],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[13],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[14],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[15],0x00000000);
    VL_CONST_W_2X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[16],0x00006c64,0x5f727332);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[17],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[18],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[19],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[20],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[21],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[22],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[23],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[24],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[25],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[26],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[27],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[28],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[29],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[30],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[31],0x00000000);
    VL_CONST_W_2X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[32],0x00006c64,0x5f727331);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[33],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[34],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[35],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[36],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[37],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[38],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[39],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[40],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[41],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[42],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[43],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[44],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[45],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[46],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[47],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[48],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[49],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[50],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[51],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[52],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[53],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[54],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[55],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[56],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[57],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[58],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[59],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[60],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[61],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[62],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[63],0x00000000);
    VL_CONST_W_2X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[64],0x00000066,0x65746368);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[65],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[66],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[67],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[68],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[69],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[70],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[71],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[72],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[73],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[74],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[75],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[76],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[77],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[78],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[79],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[80],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[81],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[82],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[83],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[84],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[85],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[86],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[87],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[88],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[89],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[90],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[91],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[92],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[93],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[94],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[95],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[96],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[97],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[98],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[99],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[100],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[101],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[102],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[103],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[104],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[105],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[106],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[107],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[108],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[109],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[110],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[111],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[112],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[113],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[114],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[115],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[116],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[117],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[118],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[119],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[120],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[121],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[122],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[123],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[124],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[125],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[126],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[127],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[128],0x74726170);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[129],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[130],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[131],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[132],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[133],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[134],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[135],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[136],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[137],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[138],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[139],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[140],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[141],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[142],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[143],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[144],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[145],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[146],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[147],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[148],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[149],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[150],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[151],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[152],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[153],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[154],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[155],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[156],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[157],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[158],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[159],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[160],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[161],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[162],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[163],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[164],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[165],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[166],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[167],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[168],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[169],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[170],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[171],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[172],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[173],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[174],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[175],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[176],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[177],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[178],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[179],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[180],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[181],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[182],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[183],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[184],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[185],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[186],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[187],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[188],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[189],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[190],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[191],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[192],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[193],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[194],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[195],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[196],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[197],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[198],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[199],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[200],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[201],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[202],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[203],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[204],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[205],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[206],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[207],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[208],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[209],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[210],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[211],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[212],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[213],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[214],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[215],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[216],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[217],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[218],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[219],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[220],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[221],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[222],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[223],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[224],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[225],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[226],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[227],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[228],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[229],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[230],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[231],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[232],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[233],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[234],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[235],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[236],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[237],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[238],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[239],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[240],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[241],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[242],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[243],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[244],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[245],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[246],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[247],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[248],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[249],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[250],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[251],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[252],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[253],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[254],0x00000000);
    VL_CONST_W_1X(128,__Vtable1___PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state[255],0x00000000);
    __Vdly__uut__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    __Vdly__uut__DOT__picorv32_core__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    __Vdly__uut__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    __Vdly__uut__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(6);
    __Vdly__uut__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    __Vdly__uut__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    __Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    __Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    __Vdly__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
}
