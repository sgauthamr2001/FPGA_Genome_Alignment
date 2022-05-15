// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


//======================

void Vpicorv32_wrapper::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpicorv32_wrapper* t = (Vpicorv32_wrapper*)userthis;
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vpicorv32_wrapper::traceChgThis(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpicorv32_wrapper::traceChgThis__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+1,(vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file),1024);
        vcdp->chgBit(c+257,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose));
        vcdp->chgBus(c+265,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i),32);
    }
}

void Vpicorv32_wrapper::traceChgThis__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+273,(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle),16);
        vcdp->chgBus(c+281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode),32);
        vcdp->chgBus(c+289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1),5);
        vcdp->chgQuad(c+297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1),64);
        vcdp->chgQuad(c+313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2),64);
        vcdp->chgQuad(c+329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2),64);
        vcdp->chgQuad(c+345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd),64);
        vcdp->chgQuad(c+361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx),64);
        vcdp->chgQuad(c+377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt),64);
    }
}

void Vpicorv32_wrapper::traceChgThis__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file),32);
        vcdp->chgBit(c+401,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en));
        vcdp->chgBit(c+409,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en));
        vcdp->chgBit(c+417,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en));
    }
}

void Vpicorv32_wrapper::traceChgThis__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+425,(vlSymsp->TOP__picorv32_wrapper.__PVT__irq),32);
        vcdp->chgBit(c+433,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid));
        vcdp->chgBit(c+441,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid));
        vcdp->chgBit(c+449,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid));
        vcdp->chgBus(c+457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata),32);
        vcdp->chgBus(c+465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb),4);
        vcdp->chgBus(c+473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc),32);
        vcdp->chgBit(c+481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr));
        vcdp->chgBus(c+489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd),32);
        vcdp->chgBit(c+497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready));
        vcdp->chgBit(c+505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
        vcdp->chgBit(c+513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap));
        vcdp->chgBit(c+521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        vcdp->chgQuad(c+529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr),64);
        vcdp->chgQuad(c+545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr),64);
        vcdp->chgBus(c+561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm),32);
        vcdp->chgBus(c+569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2),5);
        vcdp->chgBus(c+577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd),5);
        vcdp->chgBit(c+585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn));
        vcdp->chgArray(c+593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state),128);
        vcdp->chgBus(c+625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out),32);
        vcdp->chgBit(c+633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0));
        vcdp->chgBit(c+641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq));
        vcdp->chgBit(c+649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu));
        vcdp->chgBit(c+657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts));
        vcdp->chgBit(c+665,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write));
        vcdp->chgBus(c+673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata),32);
        vcdp->chgBus(c+681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1),32);
        vcdp->chgBus(c+689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2),32);
        vcdp->chgBit(c+697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
        vcdp->chgBit(c+705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start));
    }
}

void Vpicorv32_wrapper::traceChgThis__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+713,((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                              ? (0xfffffffcU & (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                                                  >> 2U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                                  & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                                      ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                                      : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))) 
                                                << 2U))
                              : (0xfffffffcU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))),32);
        vcdp->chgBit(c+721,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                             & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                 ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                 : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))));
    }
}

void Vpicorv32_wrapper::traceChgThis__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+729,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready));
        vcdp->chgBit(c+737,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready));
        vcdp->chgBit(c+745,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid));
        vcdp->chgBit(c+753,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready));
        vcdp->chgBit(c+761,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
        vcdp->chgBit(c+769,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready));
        vcdp->chgBus(c+777,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word),32);
        vcdp->chgBit(c+785,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr));
        vcdp->chgBit(c+793,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr));
        vcdp->chgBit(c+801,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata));
    }
}

void Vpicorv32_wrapper::traceChgThis__8(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+809,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read));
        vcdp->chgBit(c+817,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write));
        vcdp->chgBit(c+825,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer));
        vcdp->chgBit(c+833,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word));
        vcdp->chgBus(c+841,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle),32);
        vcdp->chgBus(c+849,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched),32);
        vcdp->chgBit(c+857,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word));
        vcdp->chgBit(c+865,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
    }
}

void Vpicorv32_wrapper::traceChgThis__9(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+873,(vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter),32);
        vcdp->chgBit(c+881,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid));
        vcdp->chgBit(c+889,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid));
        vcdp->chgBit(c+897,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid));
        vcdp->chgBit(c+905,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done));
        vcdp->chgBus(c+913,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode),32);
        vcdp->chgBus(c+921,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr),32);
        vcdp->chgBit(c+929,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr));
        vcdp->chgBus(c+937,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd),32);
        vcdp->chgBit(c+945,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
        vcdp->chgBus(c+953,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1),6);
        vcdp->chgBit(c+961,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q));
        vcdp->chgQuad(c+969,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr),64);
        vcdp->chgBus(c+985,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm),32);
        vcdp->chgBus(c+993,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode),32);
        vcdp->chgBus(c+1001,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1),5);
        vcdp->chgBus(c+1009,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2),5);
        vcdp->chgBus(c+1017,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd),5);
        vcdp->chgBit(c+1025,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next));
        vcdp->chgBit(c+1033,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn));
        vcdp->chgQuad(c+1041,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr),64);
        vcdp->chgBus(c+1057,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm),32);
        vcdp->chgBus(c+1065,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode),32);
        vcdp->chgBus(c+1073,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1),5);
        vcdp->chgBus(c+1081,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2),5);
        vcdp->chgBus(c+1089,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd),5);
        vcdp->chgBit(c+1097,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q));
        vcdp->chgBit(c+1105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait));
        vcdp->chgBit(c+1113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2));
        vcdp->chgBit(c+1121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q));
        vcdp->chgBit(c+1129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q));
        vcdp->chgQuad(c+1137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1),64);
        vcdp->chgQuad(c+1153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2),64);
        vcdp->chgQuad(c+1169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd),64);
        vcdp->chgQuad(c+1185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx),64);
        vcdp->chgBus(c+1201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter),7);
        vcdp->chgBit(c+1209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting));
        vcdp->chgBit(c+1217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish));
        vcdp->chgBit(c+1225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q));
    }
}

void Vpicorv32_wrapper::traceChgThis__10(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1233,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                              & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
    }
}

void Vpicorv32_wrapper::traceChgThis__11(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1241,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr),32);
        vcdp->chgBus(c+1249,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr),32);
        vcdp->chgBus(c+1257,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata),32);
        vcdp->chgBus(c+1265,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb),4);
        vcdp->chgBit(c+1273,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn));
    }
}

void Vpicorv32_wrapper::traceChgThis__12(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1281,(vlSymsp->TOP__picorv32_wrapper.trap));
        vcdp->chgBit(c+1289,(vlSymsp->TOP__picorv32_wrapper.trace_valid));
        vcdp->chgQuad(c+1297,(vlSymsp->TOP__picorv32_wrapper.trace_data),36);
        vcdp->chgBus(c+1313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr),32);
        vcdp->chgBus(c+1321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata),32);
        vcdp->chgBus(c+1329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb),4);
        vcdp->chgBit(c+1337,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                              & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))));
        vcdp->chgBus(c+1345,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                               ? 4U : 0U)),3);
        vcdp->chgBit(c+1353,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                              & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))))));
        vcdp->chgBit(c+1361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid));
        vcdp->chgBus(c+1369,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn),32);
        vcdp->chgBus(c+1377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1),32);
        vcdp->chgBus(c+1385,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2),32);
        vcdp->chgBus(c+1393,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi),32);
        vcdp->chgBit(c+1401,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid));
        vcdp->chgBit(c+1409,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr));
        vcdp->chgQuad(c+1417,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle),64);
        vcdp->chgQuad(c+1433,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr),64);
        vcdp->chgBus(c+1449,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc),32);
        vcdp->chgBus(c+1457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc),32);
        vcdp->chgBus(c+1465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out),32);
        vcdp->chgBus(c+1473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh),5);
        vcdp->chgBit(c+1481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay));
        vcdp->chgBit(c+1489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active));
        vcdp->chgBus(c+1497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask),32);
        vcdp->chgBus(c+1505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending),32);
        vcdp->chgBus(c+1513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer),32);
        vcdp->chgBit(c+1521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait));
        vcdp->chgBit(c+1529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr));
        vcdp->chgBus(c+1537,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd),32);
        vcdp->chgBit(c+1545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
        vcdp->chgBit(c+1553,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
        vcdp->chgBit(c+1561,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))));
        vcdp->chgBus(c+1569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state),2);
        vcdp->chgBus(c+1577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize),2);
        vcdp->chgBus(c+1585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q),32);
        vcdp->chgBit(c+1593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch));
        vcdp->chgBit(c+1601,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
        vcdp->chgBit(c+1609,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata));
        vcdp->chgBit(c+1617,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
        vcdp->chgBit(c+1625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword));
        vcdp->chgBit(c+1633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg));
        vcdp->chgBit(c+1641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid));
        vcdp->chgBit(c+1649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word));
        vcdp->chgBus(c+1657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer),16);
        vcdp->chgBit(c+1665,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))));
        vcdp->chgBit(c+1673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui));
        vcdp->chgBit(c+1681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc));
        vcdp->chgBit(c+1689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal));
        vcdp->chgBit(c+1697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr));
        vcdp->chgBit(c+1705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq));
        vcdp->chgBit(c+1713,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne));
        vcdp->chgBit(c+1721,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt));
        vcdp->chgBit(c+1729,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge));
        vcdp->chgBit(c+1737,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu));
        vcdp->chgBit(c+1745,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu));
        vcdp->chgBit(c+1753,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb));
        vcdp->chgBit(c+1761,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh));
        vcdp->chgBit(c+1769,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw));
        vcdp->chgBit(c+1777,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu));
        vcdp->chgBit(c+1785,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu));
        vcdp->chgBit(c+1793,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb));
        vcdp->chgBit(c+1801,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh));
        vcdp->chgBit(c+1809,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw));
        vcdp->chgBit(c+1817,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi));
        vcdp->chgBit(c+1825,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti));
        vcdp->chgBit(c+1833,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu));
        vcdp->chgBit(c+1841,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori));
        vcdp->chgBit(c+1849,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori));
        vcdp->chgBit(c+1857,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi));
        vcdp->chgBit(c+1865,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli));
        vcdp->chgBit(c+1873,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli));
        vcdp->chgBit(c+1881,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai));
        vcdp->chgBit(c+1889,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add));
        vcdp->chgBit(c+1897,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub));
        vcdp->chgBit(c+1905,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll));
        vcdp->chgBit(c+1913,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt));
        vcdp->chgBit(c+1921,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu));
        vcdp->chgBit(c+1929,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor));
        vcdp->chgBit(c+1937,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl));
        vcdp->chgBit(c+1945,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra));
        vcdp->chgBit(c+1953,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or));
        vcdp->chgBit(c+1961,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and));
        vcdp->chgBit(c+1969,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle));
        vcdp->chgBit(c+1977,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh));
        vcdp->chgBit(c+1985,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr));
        vcdp->chgBit(c+1993,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh));
        vcdp->chgBit(c+2001,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak));
        vcdp->chgBit(c+2009,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq));
        vcdp->chgBit(c+2017,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq));
        vcdp->chgBit(c+2025,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq));
        vcdp->chgBit(c+2033,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq));
        vcdp->chgBit(c+2041,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq));
        vcdp->chgBit(c+2049,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer));
        vcdp->chgBus(c+2057,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd),6);
        vcdp->chgBus(c+2065,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2),6);
        vcdp->chgBus(c+2073,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm),32);
        vcdp->chgBus(c+2081,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j),32);
        vcdp->chgBit(c+2089,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger));
        vcdp->chgBit(c+2097,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q));
        vcdp->chgBit(c+2105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger));
        vcdp->chgBit(c+2113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr));
        vcdp->chgBit(c+2121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal));
        vcdp->chgBit(c+2129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu));
        vcdp->chgBit(c+2137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai));
        vcdp->chgBit(c+2145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        vcdp->chgBit(c+2153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw));
        vcdp->chgBit(c+2161,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra));
        vcdp->chgBit(c+2169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        vcdp->chgBit(c+2177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt));
        vcdp->chgBit(c+2185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu));
        vcdp->chgBit(c+2193,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        vcdp->chgBit(c+2201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw));
        vcdp->chgBit(c+2209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm));
        vcdp->chgBit(c+2217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg));
        vcdp->chgBit(c+2225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare));
        vcdp->chgBus(c+2233,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val),32);
        vcdp->chgBus(c+2241,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val),32);
        vcdp->chgBit(c+2249,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid));
        vcdp->chgBit(c+2257,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid));
        vcdp->chgBus(c+2265,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state),8);
        vcdp->chgBus(c+2273,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state),2);
        vcdp->chgBit(c+2281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst));
        vcdp->chgBit(c+2289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata));
        vcdp->chgBit(c+2297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata));
        vcdp->chgBit(c+2305,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store));
        vcdp->chgBit(c+2313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu));
        vcdp->chgBit(c+2321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch));
        vcdp->chgBit(c+2329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        vcdp->chgBit(c+2337,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace));
        vcdp->chgBit(c+2345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu));
        vcdp->chgBit(c+2353,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh));
        vcdp->chgBit(c+2361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb));
        vcdp->chgBus(c+2369,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd),6);
        vcdp->chgBus(c+2377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc),32);
        vcdp->chgBus(c+2385,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter),4);
        vcdp->chgBit(c+2393,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout));
        vcdp->chgBus(c+2401,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending),32);
        vcdp->chgBit(c+2409,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq));
        vcdp->chgBus(c+2417,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q),32);
        vcdp->chgBus(c+2425,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                               ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                  - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                               : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                  + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        vcdp->chgBus(c+2433,((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                              << (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        vcdp->chgBus(c+2441,((IData)((VL_ULL(0x1ffffffff) 
                                      & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                                                                           | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai)) 
                                                                          & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))), 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))))),32);
        vcdp->chgBit(c+2449,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul));
        vcdp->chgBit(c+2457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh));
        vcdp->chgBit(c+2465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
        vcdp->chgBit(c+2473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu));
        vcdp->chgBit(c+2481,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu))))));
        vcdp->chgBit(c+2489,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))));
        vcdp->chgBit(c+2497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div));
        vcdp->chgBit(c+2505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu));
        vcdp->chgBit(c+2513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem));
        vcdp->chgBit(c+2521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu));
        vcdp->chgBit(c+2529,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                              | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu) 
                                 | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem) 
                                    | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu))))));
        vcdp->chgBus(c+2537,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend),32);
        vcdp->chgQuad(c+2545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor),63);
        vcdp->chgBus(c+2561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient),32);
        vcdp->chgBus(c+2569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk),32);
        vcdp->chgBit(c+2577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running));
        vcdp->chgBit(c+2585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign));
    }
}

void Vpicorv32_wrapper::traceChgThis__13(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2593,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata),32);
    }
}

void Vpicorv32_wrapper::traceChgThis__14(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2601,(vlTOPp->clk));
        vcdp->chgBit(c+2609,(vlTOPp->resetn));
        vcdp->chgBit(c+2617,(vlTOPp->trap));
        vcdp->chgBit(c+2625,(vlTOPp->trace_valid));
        vcdp->chgQuad(c+2633,(vlTOPp->trace_data),36);
    }
}
