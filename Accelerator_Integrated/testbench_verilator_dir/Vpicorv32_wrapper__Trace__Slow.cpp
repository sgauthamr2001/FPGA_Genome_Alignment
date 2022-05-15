// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


//======================

void Vpicorv32_wrapper::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vpicorv32_wrapper::traceInit, &Vpicorv32_wrapper::traceFull, &Vpicorv32_wrapper::traceChg, this);
}
void Vpicorv32_wrapper::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vpicorv32_wrapper* t = (Vpicorv32_wrapper*)userthis;
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vpicorv32_wrapper::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpicorv32_wrapper* t = (Vpicorv32_wrapper*)userthis;
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vpicorv32_wrapper::traceInitThis(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vpicorv32_wrapper::traceFullThis(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpicorv32_wrapper::traceInitThis__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+2601,"clk", false,-1);
        vcdp->declBit(c+2609,"resetn", false,-1);
        vcdp->declBit(c+2617,"trap", false,-1);
        vcdp->declBit(c+2625,"trace_valid", false,-1);
        vcdp->declQuad(c+2633,"trace_data", false,-1, 35,0);
        vcdp->declBus(c+2649,"picorv32_wrapper AXI_TEST", false,-1, 31,0);
        vcdp->declBus(c+2649,"picorv32_wrapper VERBOSE", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper clk", false,-1);
        vcdp->declBit(c+2609,"picorv32_wrapper resetn", false,-1);
        vcdp->declBit(c+1281,"picorv32_wrapper trap", false,-1);
        vcdp->declBit(c+1289,"picorv32_wrapper trace_valid", false,-1);
        vcdp->declQuad(c+1297,"picorv32_wrapper trace_data", false,-1, 35,0);
        vcdp->declBit(c+2657,"picorv32_wrapper tests_passed", false,-1);
        vcdp->declBus(c+425,"picorv32_wrapper irq", false,-1, 31,0);
        vcdp->declBus(c+273,"picorv32_wrapper count_cycle", false,-1, 15,0);
        vcdp->declBit(c+433,"picorv32_wrapper mem_axi_awvalid", false,-1);
        vcdp->declBit(c+729,"picorv32_wrapper mem_axi_awready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper mem_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+2665,"picorv32_wrapper mem_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+441,"picorv32_wrapper mem_axi_wvalid", false,-1);
        vcdp->declBit(c+737,"picorv32_wrapper mem_axi_wready", false,-1);
        vcdp->declBus(c+1321,"picorv32_wrapper mem_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper mem_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+745,"picorv32_wrapper mem_axi_bvalid", false,-1);
        vcdp->declBit(c+1337,"picorv32_wrapper mem_axi_bready", false,-1);
        vcdp->declBit(c+449,"picorv32_wrapper mem_axi_arvalid", false,-1);
        vcdp->declBit(c+753,"picorv32_wrapper mem_axi_arready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper mem_axi_araddr", false,-1, 31,0);
        vcdp->declBus(c+1345,"picorv32_wrapper mem_axi_arprot", false,-1, 2,0);
        vcdp->declBit(c+761,"picorv32_wrapper mem_axi_rvalid", false,-1);
        vcdp->declBit(c+1353,"picorv32_wrapper mem_axi_rready", false,-1);
        vcdp->declBus(c+2593,"picorv32_wrapper mem_axi_rdata", false,-1, 31,0);
        vcdp->declArray(c+1,"picorv32_wrapper firmware_file", false,-1, 1023,0);
        vcdp->declBus(c+873,"picorv32_wrapper cycle_counter", false,-1, 31,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_COUNTERS", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_COUNTERS64", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_REGS_16_31", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_REGS_DUALPORT", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut TWO_STAGE_SHIFT", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut BARREL_SHIFTER", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut TWO_CYCLE_COMPARE", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut TWO_CYCLE_ALU", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut COMPRESSED_ISA", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut CATCH_MISALIGN", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut CATCH_ILLINSN", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut ENABLE_PCPI", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_MUL", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut ENABLE_FAST_MUL", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_DIV", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_IRQ", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_IRQ_QREGS", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_IRQ_TIMER", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut ENABLE_TRACE", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut REGS_INIT_ZERO", false,-1, 0,0);
        vcdp->declBus(c+2689,"picorv32_wrapper uut MASKED_IRQ", false,-1, 31,0);
        vcdp->declBus(c+2697,"picorv32_wrapper uut LATCHED_IRQ", false,-1, 31,0);
        vcdp->declBus(c+2689,"picorv32_wrapper uut PROGADDR_RESET", false,-1, 31,0);
        vcdp->declBus(c+2705,"picorv32_wrapper uut PROGADDR_IRQ", false,-1, 31,0);
        vcdp->declBus(c+2697,"picorv32_wrapper uut STACKADDR", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper uut clk", false,-1);
        vcdp->declBit(c+2609,"picorv32_wrapper uut resetn", false,-1);
        vcdp->declBit(c+1281,"picorv32_wrapper uut trap", false,-1);
        vcdp->declBit(c+433,"picorv32_wrapper uut mem_axi_awvalid", false,-1);
        vcdp->declBit(c+729,"picorv32_wrapper uut mem_axi_awready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut mem_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+2665,"picorv32_wrapper uut mem_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+441,"picorv32_wrapper uut mem_axi_wvalid", false,-1);
        vcdp->declBit(c+737,"picorv32_wrapper uut mem_axi_wready", false,-1);
        vcdp->declBus(c+1321,"picorv32_wrapper uut mem_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper uut mem_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+745,"picorv32_wrapper uut mem_axi_bvalid", false,-1);
        vcdp->declBit(c+1337,"picorv32_wrapper uut mem_axi_bready", false,-1);
        vcdp->declBit(c+449,"picorv32_wrapper uut mem_axi_arvalid", false,-1);
        vcdp->declBit(c+753,"picorv32_wrapper uut mem_axi_arready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut mem_axi_araddr", false,-1, 31,0);
        vcdp->declBus(c+1345,"picorv32_wrapper uut mem_axi_arprot", false,-1, 2,0);
        vcdp->declBit(c+761,"picorv32_wrapper uut mem_axi_rvalid", false,-1);
        vcdp->declBit(c+1353,"picorv32_wrapper uut mem_axi_rready", false,-1);
        vcdp->declBus(c+2593,"picorv32_wrapper uut mem_axi_rdata", false,-1, 31,0);
        vcdp->declBit(c+1361,"picorv32_wrapper uut pcpi_valid", false,-1);
        vcdp->declBus(c+1369,"picorv32_wrapper uut pcpi_insn", false,-1, 31,0);
        vcdp->declBus(c+1377,"picorv32_wrapper uut pcpi_rs1", false,-1, 31,0);
        vcdp->declBus(c+1385,"picorv32_wrapper uut pcpi_rs2", false,-1, 31,0);
        vcdp->declBit(c+2713,"picorv32_wrapper uut pcpi_wr", false,-1);
        vcdp->declBus(c+2721,"picorv32_wrapper uut pcpi_rd", false,-1, 31,0);
        vcdp->declBit(c+2729,"picorv32_wrapper uut pcpi_wait", false,-1);
        vcdp->declBit(c+2737,"picorv32_wrapper uut pcpi_ready", false,-1);
        vcdp->declBus(c+425,"picorv32_wrapper uut irq", false,-1, 31,0);
        vcdp->declBus(c+1393,"picorv32_wrapper uut eoi", false,-1, 31,0);
        vcdp->declBit(c+1289,"picorv32_wrapper uut trace_valid", false,-1);
        vcdp->declQuad(c+1297,"picorv32_wrapper uut trace_data", false,-1, 35,0);
        vcdp->declBit(c+1401,"picorv32_wrapper uut mem_valid", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut mem_addr", false,-1, 31,0);
        vcdp->declBus(c+1321,"picorv32_wrapper uut mem_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper uut mem_wstrb", false,-1, 3,0);
        vcdp->declBit(c+1409,"picorv32_wrapper uut mem_instr", false,-1);
        vcdp->declBit(c+769,"picorv32_wrapper uut mem_ready", false,-1);
        vcdp->declBus(c+2593,"picorv32_wrapper uut mem_rdata", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper uut axi_adapter clk", false,-1);
        vcdp->declBit(c+2609,"picorv32_wrapper uut axi_adapter resetn", false,-1);
        vcdp->declBit(c+433,"picorv32_wrapper uut axi_adapter mem_axi_awvalid", false,-1);
        vcdp->declBit(c+729,"picorv32_wrapper uut axi_adapter mem_axi_awready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut axi_adapter mem_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+2665,"picorv32_wrapper uut axi_adapter mem_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+441,"picorv32_wrapper uut axi_adapter mem_axi_wvalid", false,-1);
        vcdp->declBit(c+737,"picorv32_wrapper uut axi_adapter mem_axi_wready", false,-1);
        vcdp->declBus(c+1321,"picorv32_wrapper uut axi_adapter mem_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper uut axi_adapter mem_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+745,"picorv32_wrapper uut axi_adapter mem_axi_bvalid", false,-1);
        vcdp->declBit(c+1337,"picorv32_wrapper uut axi_adapter mem_axi_bready", false,-1);
        vcdp->declBit(c+449,"picorv32_wrapper uut axi_adapter mem_axi_arvalid", false,-1);
        vcdp->declBit(c+753,"picorv32_wrapper uut axi_adapter mem_axi_arready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut axi_adapter mem_axi_araddr", false,-1, 31,0);
        vcdp->declBus(c+1345,"picorv32_wrapper uut axi_adapter mem_axi_arprot", false,-1, 2,0);
        vcdp->declBit(c+761,"picorv32_wrapper uut axi_adapter mem_axi_rvalid", false,-1);
        vcdp->declBit(c+1353,"picorv32_wrapper uut axi_adapter mem_axi_rready", false,-1);
        vcdp->declBus(c+2593,"picorv32_wrapper uut axi_adapter mem_axi_rdata", false,-1, 31,0);
        vcdp->declBit(c+1401,"picorv32_wrapper uut axi_adapter mem_valid", false,-1);
        vcdp->declBit(c+1409,"picorv32_wrapper uut axi_adapter mem_instr", false,-1);
        vcdp->declBit(c+769,"picorv32_wrapper uut axi_adapter mem_ready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut axi_adapter mem_addr", false,-1, 31,0);
        vcdp->declBus(c+1321,"picorv32_wrapper uut axi_adapter mem_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper uut axi_adapter mem_wstrb", false,-1, 3,0);
        vcdp->declBus(c+2593,"picorv32_wrapper uut axi_adapter mem_rdata", false,-1, 31,0);
        vcdp->declBit(c+881,"picorv32_wrapper uut axi_adapter ack_awvalid", false,-1);
        vcdp->declBit(c+889,"picorv32_wrapper uut axi_adapter ack_arvalid", false,-1);
        vcdp->declBit(c+897,"picorv32_wrapper uut axi_adapter ack_wvalid", false,-1);
        vcdp->declBit(c+905,"picorv32_wrapper uut axi_adapter xfer_done", false,-1);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_COUNTERS", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_COUNTERS64", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_REGS_16_31", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_REGS_DUALPORT", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core LATCHED_MEM_RDATA", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core TWO_STAGE_SHIFT", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core BARREL_SHIFTER", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core TWO_CYCLE_COMPARE", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core TWO_CYCLE_ALU", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core COMPRESSED_ISA", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core CATCH_MISALIGN", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core CATCH_ILLINSN", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core ENABLE_PCPI", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_MUL", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core ENABLE_FAST_MUL", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_DIV", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_IRQ", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_IRQ_QREGS", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_IRQ_TIMER", false,-1, 0,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core ENABLE_TRACE", false,-1, 0,0);
        vcdp->declBus(c+2681,"picorv32_wrapper uut picorv32_core REGS_INIT_ZERO", false,-1, 0,0);
        vcdp->declBus(c+2689,"picorv32_wrapper uut picorv32_core MASKED_IRQ", false,-1, 31,0);
        vcdp->declBus(c+2697,"picorv32_wrapper uut picorv32_core LATCHED_IRQ", false,-1, 31,0);
        vcdp->declBus(c+2689,"picorv32_wrapper uut picorv32_core PROGADDR_RESET", false,-1, 31,0);
        vcdp->declBus(c+2705,"picorv32_wrapper uut picorv32_core PROGADDR_IRQ", false,-1, 31,0);
        vcdp->declBus(c+2697,"picorv32_wrapper uut picorv32_core STACKADDR", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper uut picorv32_core clk", false,-1);
        vcdp->declBit(c+2609,"picorv32_wrapper uut picorv32_core resetn", false,-1);
        vcdp->declBit(c+1281,"picorv32_wrapper uut picorv32_core trap", false,-1);
        vcdp->declBit(c+1401,"picorv32_wrapper uut picorv32_core mem_valid", false,-1);
        vcdp->declBit(c+1409,"picorv32_wrapper uut picorv32_core mem_instr", false,-1);
        vcdp->declBit(c+769,"picorv32_wrapper uut picorv32_core mem_ready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut picorv32_core mem_addr", false,-1, 31,0);
        vcdp->declBus(c+1321,"picorv32_wrapper uut picorv32_core mem_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper uut picorv32_core mem_wstrb", false,-1, 3,0);
        vcdp->declBus(c+2593,"picorv32_wrapper uut picorv32_core mem_rdata", false,-1, 31,0);
        vcdp->declBit(c+809,"picorv32_wrapper uut picorv32_core mem_la_read", false,-1);
        vcdp->declBit(c+817,"picorv32_wrapper uut picorv32_core mem_la_write", false,-1);
        vcdp->declBus(c+713,"picorv32_wrapper uut picorv32_core mem_la_addr", false,-1, 31,0);
        vcdp->declBus(c+457,"picorv32_wrapper uut picorv32_core mem_la_wdata", false,-1, 31,0);
        vcdp->declBus(c+465,"picorv32_wrapper uut picorv32_core mem_la_wstrb", false,-1, 3,0);
        vcdp->declBit(c+1361,"picorv32_wrapper uut picorv32_core pcpi_valid", false,-1);
        vcdp->declBus(c+1369,"picorv32_wrapper uut picorv32_core pcpi_insn", false,-1, 31,0);
        vcdp->declBus(c+1377,"picorv32_wrapper uut picorv32_core pcpi_rs1", false,-1, 31,0);
        vcdp->declBus(c+1385,"picorv32_wrapper uut picorv32_core pcpi_rs2", false,-1, 31,0);
        vcdp->declBit(c+2713,"picorv32_wrapper uut picorv32_core pcpi_wr", false,-1);
        vcdp->declBus(c+2721,"picorv32_wrapper uut picorv32_core pcpi_rd", false,-1, 31,0);
        vcdp->declBit(c+2729,"picorv32_wrapper uut picorv32_core pcpi_wait", false,-1);
        vcdp->declBit(c+2737,"picorv32_wrapper uut picorv32_core pcpi_ready", false,-1);
        vcdp->declBus(c+425,"picorv32_wrapper uut picorv32_core irq", false,-1, 31,0);
        vcdp->declBus(c+1393,"picorv32_wrapper uut picorv32_core eoi", false,-1, 31,0);
        vcdp->declBit(c+1289,"picorv32_wrapper uut picorv32_core trace_valid", false,-1);
        vcdp->declQuad(c+1297,"picorv32_wrapper uut picorv32_core trace_data", false,-1, 35,0);
        vcdp->declBus(c+2745,"picorv32_wrapper uut picorv32_core irq_timer", false,-1, 31,0);
        vcdp->declBus(c+2753,"picorv32_wrapper uut picorv32_core irq_ebreak", false,-1, 31,0);
        vcdp->declBus(c+2761,"picorv32_wrapper uut picorv32_core irq_buserror", false,-1, 31,0);
        vcdp->declBus(c+2769,"picorv32_wrapper uut picorv32_core irqregs_offset", false,-1, 31,0);
        vcdp->declBus(c+2777,"picorv32_wrapper uut picorv32_core regfile_size", false,-1, 31,0);
        vcdp->declBus(c+2785,"picorv32_wrapper uut picorv32_core regindex_bits", false,-1, 31,0);
        vcdp->declBus(c+2673,"picorv32_wrapper uut picorv32_core WITH_PCPI", false,-1, 0,0);
        vcdp->declQuad(c+2793,"picorv32_wrapper uut picorv32_core TRACE_BRANCH", false,-1, 35,0);
        vcdp->declQuad(c+2809,"picorv32_wrapper uut picorv32_core TRACE_ADDR", false,-1, 35,0);
        vcdp->declQuad(c+2825,"picorv32_wrapper uut picorv32_core TRACE_IRQ", false,-1, 35,0);
        vcdp->declQuad(c+1417,"picorv32_wrapper uut picorv32_core count_cycle", false,-1, 63,0);
        vcdp->declQuad(c+1433,"picorv32_wrapper uut picorv32_core count_instr", false,-1, 63,0);
        vcdp->declBus(c+1449,"picorv32_wrapper uut picorv32_core reg_pc", false,-1, 31,0);
        vcdp->declBus(c+1457,"picorv32_wrapper uut picorv32_core reg_next_pc", false,-1, 31,0);
        vcdp->declBus(c+1377,"picorv32_wrapper uut picorv32_core reg_op1", false,-1, 31,0);
        vcdp->declBus(c+1385,"picorv32_wrapper uut picorv32_core reg_op2", false,-1, 31,0);
        vcdp->declBus(c+1465,"picorv32_wrapper uut picorv32_core reg_out", false,-1, 31,0);
        vcdp->declBus(c+1473,"picorv32_wrapper uut picorv32_core reg_sh", false,-1, 4,0);
        vcdp->declBus(c+913,"picorv32_wrapper uut picorv32_core next_insn_opcode", false,-1, 31,0);
        vcdp->declBus(c+281,"picorv32_wrapper uut picorv32_core dbg_insn_opcode", false,-1, 31,0);
        vcdp->declBus(c+921,"picorv32_wrapper uut picorv32_core dbg_insn_addr", false,-1, 31,0);
        vcdp->declBit(c+1401,"picorv32_wrapper uut picorv32_core dbg_mem_valid", false,-1);
        vcdp->declBit(c+1409,"picorv32_wrapper uut picorv32_core dbg_mem_instr", false,-1);
        vcdp->declBit(c+769,"picorv32_wrapper uut picorv32_core dbg_mem_ready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper uut picorv32_core dbg_mem_addr", false,-1, 31,0);
        vcdp->declBus(c+1321,"picorv32_wrapper uut picorv32_core dbg_mem_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper uut picorv32_core dbg_mem_wstrb", false,-1, 3,0);
        vcdp->declBus(c+2593,"picorv32_wrapper uut picorv32_core dbg_mem_rdata", false,-1, 31,0);
        vcdp->declBus(c+473,"picorv32_wrapper uut picorv32_core next_pc", false,-1, 31,0);
        vcdp->declBit(c+1481,"picorv32_wrapper uut picorv32_core irq_delay", false,-1);
        vcdp->declBit(c+1489,"picorv32_wrapper uut picorv32_core irq_active", false,-1);
        vcdp->declBus(c+1497,"picorv32_wrapper uut picorv32_core irq_mask", false,-1, 31,0);
        vcdp->declBus(c+1505,"picorv32_wrapper uut picorv32_core irq_pending", false,-1, 31,0);
        vcdp->declBus(c+1513,"picorv32_wrapper uut picorv32_core timer", false,-1, 31,0);
        vcdp->declBus(c+2841,"picorv32_wrapper uut picorv32_core i", false,-1, 31,0);
        vcdp->declBit(c+929,"picorv32_wrapper uut picorv32_core pcpi_mul_wr", false,-1);
        vcdp->declBus(c+937,"picorv32_wrapper uut picorv32_core pcpi_mul_rd", false,-1, 31,0);
        vcdp->declBit(c+1521,"picorv32_wrapper uut picorv32_core pcpi_mul_wait", false,-1);
        vcdp->declBit(c+945,"picorv32_wrapper uut picorv32_core pcpi_mul_ready", false,-1);
        vcdp->declBit(c+1529,"picorv32_wrapper uut picorv32_core pcpi_div_wr", false,-1);
        vcdp->declBus(c+1537,"picorv32_wrapper uut picorv32_core pcpi_div_rd", false,-1, 31,0);
        vcdp->declBit(c+1545,"picorv32_wrapper uut picorv32_core pcpi_div_wait", false,-1);
        vcdp->declBit(c+1553,"picorv32_wrapper uut picorv32_core pcpi_div_ready", false,-1);
        vcdp->declBit(c+481,"picorv32_wrapper uut picorv32_core pcpi_int_wr", false,-1);
        vcdp->declBus(c+489,"picorv32_wrapper uut picorv32_core pcpi_int_rd", false,-1, 31,0);
        vcdp->declBit(c+1561,"picorv32_wrapper uut picorv32_core pcpi_int_wait", false,-1);
        vcdp->declBit(c+497,"picorv32_wrapper uut picorv32_core pcpi_int_ready", false,-1);
        vcdp->declBus(c+1569,"picorv32_wrapper uut picorv32_core mem_state", false,-1, 1,0);
        vcdp->declBus(c+1577,"picorv32_wrapper uut picorv32_core mem_wordsize", false,-1, 1,0);
        vcdp->declBus(c+777,"picorv32_wrapper uut picorv32_core mem_rdata_word", false,-1, 31,0);
        vcdp->declBus(c+1585,"picorv32_wrapper uut picorv32_core mem_rdata_q", false,-1, 31,0);
        vcdp->declBit(c+1593,"picorv32_wrapper uut picorv32_core mem_do_prefetch", false,-1);
        vcdp->declBit(c+1601,"picorv32_wrapper uut picorv32_core mem_do_rinst", false,-1);
        vcdp->declBit(c+1609,"picorv32_wrapper uut picorv32_core mem_do_rdata", false,-1);
        vcdp->declBit(c+1617,"picorv32_wrapper uut picorv32_core mem_do_wdata", false,-1);
        vcdp->declBit(c+825,"picorv32_wrapper uut picorv32_core mem_xfer", false,-1);
        vcdp->declBit(c+1625,"picorv32_wrapper uut picorv32_core mem_la_secondword", false,-1);
        vcdp->declBit(c+1633,"picorv32_wrapper uut picorv32_core mem_la_firstword_reg", false,-1);
        vcdp->declBit(c+1641,"picorv32_wrapper uut picorv32_core last_mem_valid", false,-1);
        vcdp->declBit(c+505,"picorv32_wrapper uut picorv32_core mem_la_firstword", false,-1);
        vcdp->declBit(c+721,"picorv32_wrapper uut picorv32_core mem_la_firstword_xfer", false,-1);
        vcdp->declBit(c+1649,"picorv32_wrapper uut picorv32_core prefetched_high_word", false,-1);
        vcdp->declBit(c+833,"picorv32_wrapper uut picorv32_core clear_prefetched_high_word", false,-1);
        vcdp->declBus(c+1657,"picorv32_wrapper uut picorv32_core mem_16bit_buffer", false,-1, 15,0);
        vcdp->declBus(c+841,"picorv32_wrapper uut picorv32_core mem_rdata_latched_noshuffle", false,-1, 31,0);
        vcdp->declBus(c+849,"picorv32_wrapper uut picorv32_core mem_rdata_latched", false,-1, 31,0);
        vcdp->declBit(c+857,"picorv32_wrapper uut picorv32_core mem_la_use_prefetched_high_word", false,-1);
        vcdp->declBit(c+1665,"picorv32_wrapper uut picorv32_core mem_busy", false,-1);
        vcdp->declBit(c+865,"picorv32_wrapper uut picorv32_core mem_done", false,-1);
        vcdp->declBit(c+1673,"picorv32_wrapper uut picorv32_core instr_lui", false,-1);
        vcdp->declBit(c+1681,"picorv32_wrapper uut picorv32_core instr_auipc", false,-1);
        vcdp->declBit(c+1689,"picorv32_wrapper uut picorv32_core instr_jal", false,-1);
        vcdp->declBit(c+1697,"picorv32_wrapper uut picorv32_core instr_jalr", false,-1);
        vcdp->declBit(c+1705,"picorv32_wrapper uut picorv32_core instr_beq", false,-1);
        vcdp->declBit(c+1713,"picorv32_wrapper uut picorv32_core instr_bne", false,-1);
        vcdp->declBit(c+1721,"picorv32_wrapper uut picorv32_core instr_blt", false,-1);
        vcdp->declBit(c+1729,"picorv32_wrapper uut picorv32_core instr_bge", false,-1);
        vcdp->declBit(c+1737,"picorv32_wrapper uut picorv32_core instr_bltu", false,-1);
        vcdp->declBit(c+1745,"picorv32_wrapper uut picorv32_core instr_bgeu", false,-1);
        vcdp->declBit(c+1753,"picorv32_wrapper uut picorv32_core instr_lb", false,-1);
        vcdp->declBit(c+1761,"picorv32_wrapper uut picorv32_core instr_lh", false,-1);
        vcdp->declBit(c+1769,"picorv32_wrapper uut picorv32_core instr_lw", false,-1);
        vcdp->declBit(c+1777,"picorv32_wrapper uut picorv32_core instr_lbu", false,-1);
        vcdp->declBit(c+1785,"picorv32_wrapper uut picorv32_core instr_lhu", false,-1);
        vcdp->declBit(c+1793,"picorv32_wrapper uut picorv32_core instr_sb", false,-1);
        vcdp->declBit(c+1801,"picorv32_wrapper uut picorv32_core instr_sh", false,-1);
        vcdp->declBit(c+1809,"picorv32_wrapper uut picorv32_core instr_sw", false,-1);
        vcdp->declBit(c+1817,"picorv32_wrapper uut picorv32_core instr_addi", false,-1);
        vcdp->declBit(c+1825,"picorv32_wrapper uut picorv32_core instr_slti", false,-1);
        vcdp->declBit(c+1833,"picorv32_wrapper uut picorv32_core instr_sltiu", false,-1);
        vcdp->declBit(c+1841,"picorv32_wrapper uut picorv32_core instr_xori", false,-1);
        vcdp->declBit(c+1849,"picorv32_wrapper uut picorv32_core instr_ori", false,-1);
        vcdp->declBit(c+1857,"picorv32_wrapper uut picorv32_core instr_andi", false,-1);
        vcdp->declBit(c+1865,"picorv32_wrapper uut picorv32_core instr_slli", false,-1);
        vcdp->declBit(c+1873,"picorv32_wrapper uut picorv32_core instr_srli", false,-1);
        vcdp->declBit(c+1881,"picorv32_wrapper uut picorv32_core instr_srai", false,-1);
        vcdp->declBit(c+1889,"picorv32_wrapper uut picorv32_core instr_add", false,-1);
        vcdp->declBit(c+1897,"picorv32_wrapper uut picorv32_core instr_sub", false,-1);
        vcdp->declBit(c+1905,"picorv32_wrapper uut picorv32_core instr_sll", false,-1);
        vcdp->declBit(c+1913,"picorv32_wrapper uut picorv32_core instr_slt", false,-1);
        vcdp->declBit(c+1921,"picorv32_wrapper uut picorv32_core instr_sltu", false,-1);
        vcdp->declBit(c+1929,"picorv32_wrapper uut picorv32_core instr_xor", false,-1);
        vcdp->declBit(c+1937,"picorv32_wrapper uut picorv32_core instr_srl", false,-1);
        vcdp->declBit(c+1945,"picorv32_wrapper uut picorv32_core instr_sra", false,-1);
        vcdp->declBit(c+1953,"picorv32_wrapper uut picorv32_core instr_or", false,-1);
        vcdp->declBit(c+1961,"picorv32_wrapper uut picorv32_core instr_and", false,-1);
        vcdp->declBit(c+1969,"picorv32_wrapper uut picorv32_core instr_rdcycle", false,-1);
        vcdp->declBit(c+1977,"picorv32_wrapper uut picorv32_core instr_rdcycleh", false,-1);
        vcdp->declBit(c+1985,"picorv32_wrapper uut picorv32_core instr_rdinstr", false,-1);
        vcdp->declBit(c+1993,"picorv32_wrapper uut picorv32_core instr_rdinstrh", false,-1);
        vcdp->declBit(c+2001,"picorv32_wrapper uut picorv32_core instr_ecall_ebreak", false,-1);
        vcdp->declBit(c+2009,"picorv32_wrapper uut picorv32_core instr_getq", false,-1);
        vcdp->declBit(c+2017,"picorv32_wrapper uut picorv32_core instr_setq", false,-1);
        vcdp->declBit(c+2025,"picorv32_wrapper uut picorv32_core instr_retirq", false,-1);
        vcdp->declBit(c+2033,"picorv32_wrapper uut picorv32_core instr_maskirq", false,-1);
        vcdp->declBit(c+2041,"picorv32_wrapper uut picorv32_core instr_waitirq", false,-1);
        vcdp->declBit(c+2049,"picorv32_wrapper uut picorv32_core instr_timer", false,-1);
        vcdp->declBit(c+513,"picorv32_wrapper uut picorv32_core instr_trap", false,-1);
        vcdp->declBus(c+2057,"picorv32_wrapper uut picorv32_core decoded_rd", false,-1, 5,0);
        vcdp->declBus(c+953,"picorv32_wrapper uut picorv32_core decoded_rs1", false,-1, 5,0);
        vcdp->declBus(c+2065,"picorv32_wrapper uut picorv32_core decoded_rs2", false,-1, 5,0);
        vcdp->declBus(c+2073,"picorv32_wrapper uut picorv32_core decoded_imm", false,-1, 31,0);
        vcdp->declBus(c+2081,"picorv32_wrapper uut picorv32_core decoded_imm_j", false,-1, 31,0);
        vcdp->declBit(c+2089,"picorv32_wrapper uut picorv32_core decoder_trigger", false,-1);
        vcdp->declBit(c+2097,"picorv32_wrapper uut picorv32_core decoder_trigger_q", false,-1);
        vcdp->declBit(c+2105,"picorv32_wrapper uut picorv32_core decoder_pseudo_trigger", false,-1);
        vcdp->declBit(c+961,"picorv32_wrapper uut picorv32_core decoder_pseudo_trigger_q", false,-1);
        vcdp->declBit(c+2113,"picorv32_wrapper uut picorv32_core compressed_instr", false,-1);
        vcdp->declBit(c+2121,"picorv32_wrapper uut picorv32_core is_lui_auipc_jal", false,-1);
        vcdp->declBit(c+2129,"picorv32_wrapper uut picorv32_core is_lb_lh_lw_lbu_lhu", false,-1);
        vcdp->declBit(c+2137,"picorv32_wrapper uut picorv32_core is_slli_srli_srai", false,-1);
        vcdp->declBit(c+2145,"picorv32_wrapper uut picorv32_core is_jalr_addi_slti_sltiu_xori_ori_andi", false,-1);
        vcdp->declBit(c+2153,"picorv32_wrapper uut picorv32_core is_sb_sh_sw", false,-1);
        vcdp->declBit(c+2161,"picorv32_wrapper uut picorv32_core is_sll_srl_sra", false,-1);
        vcdp->declBit(c+2169,"picorv32_wrapper uut picorv32_core is_lui_auipc_jal_jalr_addi_add_sub", false,-1);
        vcdp->declBit(c+2177,"picorv32_wrapper uut picorv32_core is_slti_blt_slt", false,-1);
        vcdp->declBit(c+2185,"picorv32_wrapper uut picorv32_core is_sltiu_bltu_sltu", false,-1);
        vcdp->declBit(c+2193,"picorv32_wrapper uut picorv32_core is_beq_bne_blt_bge_bltu_bgeu", false,-1);
        vcdp->declBit(c+2201,"picorv32_wrapper uut picorv32_core is_lbu_lhu_lw", false,-1);
        vcdp->declBit(c+2209,"picorv32_wrapper uut picorv32_core is_alu_reg_imm", false,-1);
        vcdp->declBit(c+2217,"picorv32_wrapper uut picorv32_core is_alu_reg_reg", false,-1);
        vcdp->declBit(c+2225,"picorv32_wrapper uut picorv32_core is_compare", false,-1);
        vcdp->declBit(c+521,"picorv32_wrapper uut picorv32_core is_rdcycle_rdcycleh_rdinstr_rdinstrh", false,-1);
        vcdp->declQuad(c+529,"picorv32_wrapper uut picorv32_core new_ascii_instr", false,-1, 63,0);
        vcdp->declQuad(c+545,"picorv32_wrapper uut picorv32_core dbg_ascii_instr", false,-1, 63,0);
        vcdp->declBus(c+561,"picorv32_wrapper uut picorv32_core dbg_insn_imm", false,-1, 31,0);
        vcdp->declBus(c+289,"picorv32_wrapper uut picorv32_core dbg_insn_rs1", false,-1, 4,0);
        vcdp->declBus(c+569,"picorv32_wrapper uut picorv32_core dbg_insn_rs2", false,-1, 4,0);
        vcdp->declBus(c+577,"picorv32_wrapper uut picorv32_core dbg_insn_rd", false,-1, 4,0);
        vcdp->declBus(c+2233,"picorv32_wrapper uut picorv32_core dbg_rs1val", false,-1, 31,0);
        vcdp->declBus(c+2241,"picorv32_wrapper uut picorv32_core dbg_rs2val", false,-1, 31,0);
        vcdp->declBit(c+2249,"picorv32_wrapper uut picorv32_core dbg_rs1val_valid", false,-1);
        vcdp->declBit(c+2257,"picorv32_wrapper uut picorv32_core dbg_rs2val_valid", false,-1);
        vcdp->declQuad(c+969,"picorv32_wrapper uut picorv32_core q_ascii_instr", false,-1, 63,0);
        vcdp->declBus(c+985,"picorv32_wrapper uut picorv32_core q_insn_imm", false,-1, 31,0);
        vcdp->declBus(c+993,"picorv32_wrapper uut picorv32_core q_insn_opcode", false,-1, 31,0);
        vcdp->declBus(c+1001,"picorv32_wrapper uut picorv32_core q_insn_rs1", false,-1, 4,0);
        vcdp->declBus(c+1009,"picorv32_wrapper uut picorv32_core q_insn_rs2", false,-1, 4,0);
        vcdp->declBus(c+1017,"picorv32_wrapper uut picorv32_core q_insn_rd", false,-1, 4,0);
        vcdp->declBit(c+1025,"picorv32_wrapper uut picorv32_core dbg_next", false,-1);
        vcdp->declBit(c+585,"picorv32_wrapper uut picorv32_core launch_next_insn", false,-1);
        vcdp->declBit(c+1033,"picorv32_wrapper uut picorv32_core dbg_valid_insn", false,-1);
        vcdp->declQuad(c+1041,"picorv32_wrapper uut picorv32_core cached_ascii_instr", false,-1, 63,0);
        vcdp->declBus(c+1057,"picorv32_wrapper uut picorv32_core cached_insn_imm", false,-1, 31,0);
        vcdp->declBus(c+1065,"picorv32_wrapper uut picorv32_core cached_insn_opcode", false,-1, 31,0);
        vcdp->declBus(c+1073,"picorv32_wrapper uut picorv32_core cached_insn_rs1", false,-1, 4,0);
        vcdp->declBus(c+1081,"picorv32_wrapper uut picorv32_core cached_insn_rs2", false,-1, 4,0);
        vcdp->declBus(c+1089,"picorv32_wrapper uut picorv32_core cached_insn_rd", false,-1, 4,0);
        vcdp->declBus(c+2849,"picorv32_wrapper uut picorv32_core cpu_state_trap", false,-1, 7,0);
        vcdp->declBus(c+2857,"picorv32_wrapper uut picorv32_core cpu_state_fetch", false,-1, 7,0);
        vcdp->declBus(c+2865,"picorv32_wrapper uut picorv32_core cpu_state_ld_rs1", false,-1, 7,0);
        vcdp->declBus(c+2873,"picorv32_wrapper uut picorv32_core cpu_state_ld_rs2", false,-1, 7,0);
        vcdp->declBus(c+2881,"picorv32_wrapper uut picorv32_core cpu_state_exec", false,-1, 7,0);
        vcdp->declBus(c+2889,"picorv32_wrapper uut picorv32_core cpu_state_shift", false,-1, 7,0);
        vcdp->declBus(c+2897,"picorv32_wrapper uut picorv32_core cpu_state_stmem", false,-1, 7,0);
        vcdp->declBus(c+2905,"picorv32_wrapper uut picorv32_core cpu_state_ldmem", false,-1, 7,0);
        vcdp->declBus(c+2265,"picorv32_wrapper uut picorv32_core cpu_state", false,-1, 7,0);
        vcdp->declBus(c+2273,"picorv32_wrapper uut picorv32_core irq_state", false,-1, 1,0);
        vcdp->declArray(c+593,"picorv32_wrapper uut picorv32_core dbg_ascii_state", false,-1, 127,0);
        vcdp->declBit(c+2281,"picorv32_wrapper uut picorv32_core set_mem_do_rinst", false,-1);
        vcdp->declBit(c+2289,"picorv32_wrapper uut picorv32_core set_mem_do_rdata", false,-1);
        vcdp->declBit(c+2297,"picorv32_wrapper uut picorv32_core set_mem_do_wdata", false,-1);
        vcdp->declBit(c+2305,"picorv32_wrapper uut picorv32_core latched_store", false,-1);
        vcdp->declBit(c+2313,"picorv32_wrapper uut picorv32_core latched_stalu", false,-1);
        vcdp->declBit(c+2321,"picorv32_wrapper uut picorv32_core latched_branch", false,-1);
        vcdp->declBit(c+2329,"picorv32_wrapper uut picorv32_core latched_compr", false,-1);
        vcdp->declBit(c+2337,"picorv32_wrapper uut picorv32_core latched_trace", false,-1);
        vcdp->declBit(c+2345,"picorv32_wrapper uut picorv32_core latched_is_lu", false,-1);
        vcdp->declBit(c+2353,"picorv32_wrapper uut picorv32_core latched_is_lh", false,-1);
        vcdp->declBit(c+2361,"picorv32_wrapper uut picorv32_core latched_is_lb", false,-1);
        vcdp->declBus(c+2369,"picorv32_wrapper uut picorv32_core latched_rd", false,-1, 5,0);
        vcdp->declBus(c+2377,"picorv32_wrapper uut picorv32_core current_pc", false,-1, 31,0);
        vcdp->declBus(c+2385,"picorv32_wrapper uut picorv32_core pcpi_timeout_counter", false,-1, 3,0);
        vcdp->declBit(c+2393,"picorv32_wrapper uut picorv32_core pcpi_timeout", false,-1);
        vcdp->declBus(c+2401,"picorv32_wrapper uut picorv32_core next_irq_pending", false,-1, 31,0);
        vcdp->declBit(c+2409,"picorv32_wrapper uut picorv32_core do_waitirq", false,-1);
        vcdp->declBus(c+625,"picorv32_wrapper uut picorv32_core alu_out", false,-1, 31,0);
        vcdp->declBus(c+2417,"picorv32_wrapper uut picorv32_core alu_out_q", false,-1, 31,0);
        vcdp->declBit(c+633,"picorv32_wrapper uut picorv32_core alu_out_0", false,-1);
        vcdp->declBit(c+1097,"picorv32_wrapper uut picorv32_core alu_out_0_q", false,-1);
        vcdp->declBit(c+1105,"picorv32_wrapper uut picorv32_core alu_wait", false,-1);
        vcdp->declBit(c+1113,"picorv32_wrapper uut picorv32_core alu_wait_2", false,-1);
        vcdp->declBus(c+2425,"picorv32_wrapper uut picorv32_core alu_add_sub", false,-1, 31,0);
        vcdp->declBus(c+2433,"picorv32_wrapper uut picorv32_core alu_shl", false,-1, 31,0);
        vcdp->declBus(c+2441,"picorv32_wrapper uut picorv32_core alu_shr", false,-1, 31,0);
        vcdp->declBit(c+641,"picorv32_wrapper uut picorv32_core alu_eq", false,-1);
        vcdp->declBit(c+649,"picorv32_wrapper uut picorv32_core alu_ltu", false,-1);
        vcdp->declBit(c+657,"picorv32_wrapper uut picorv32_core alu_lts", false,-1);
        vcdp->declBit(c+1121,"picorv32_wrapper uut picorv32_core clear_prefetched_high_word_q", false,-1);
        vcdp->declBit(c+665,"picorv32_wrapper uut picorv32_core cpuregs_write", false,-1);
        vcdp->declBus(c+673,"picorv32_wrapper uut picorv32_core cpuregs_wrdata", false,-1, 31,0);
        vcdp->declBus(c+681,"picorv32_wrapper uut picorv32_core cpuregs_rs1", false,-1, 31,0);
        vcdp->declBus(c+689,"picorv32_wrapper uut picorv32_core cpuregs_rs2", false,-1, 31,0);
        vcdp->declBus(c+2913,"picorv32_wrapper uut picorv32_core decoded_rs", false,-1, 5,0);
        vcdp->declBus(c+2921,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul STEPS_AT_ONCE", false,-1, 31,0);
        vcdp->declBus(c+2929,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul CARRY_CHAIN", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul clk", false,-1);
        vcdp->declBit(c+2609,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul resetn", false,-1);
        vcdp->declBit(c+1361,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_valid", false,-1);
        vcdp->declBus(c+1369,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_insn", false,-1, 31,0);
        vcdp->declBus(c+1377,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_rs1", false,-1, 31,0);
        vcdp->declBus(c+1385,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_rs2", false,-1, 31,0);
        vcdp->declBit(c+929,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_wr", false,-1);
        vcdp->declBus(c+937,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_rd", false,-1, 31,0);
        vcdp->declBit(c+1521,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_wait", false,-1);
        vcdp->declBit(c+945,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_ready", false,-1);
        vcdp->declBit(c+2449,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_mul", false,-1);
        vcdp->declBit(c+2457,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_mulh", false,-1);
        vcdp->declBit(c+2465,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_mulhsu", false,-1);
        vcdp->declBit(c+2473,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_mulhu", false,-1);
        vcdp->declBit(c+2481,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_any_mul", false,-1);
        vcdp->declBit(c+697,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_any_mulh", false,-1);
        vcdp->declBit(c+2489,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_rs1_signed", false,-1);
        vcdp->declBit(c+2457,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul instr_rs2_signed", false,-1);
        vcdp->declBit(c+1129,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul pcpi_wait_q", false,-1);
        vcdp->declBit(c+1233,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul mul_start", false,-1);
        vcdp->declQuad(c+1137,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul rs1", false,-1, 63,0);
        vcdp->declQuad(c+1153,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul rs2", false,-1, 63,0);
        vcdp->declQuad(c+1169,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul rd", false,-1, 63,0);
        vcdp->declQuad(c+1185,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul rdx", false,-1, 63,0);
        vcdp->declQuad(c+297,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul next_rs1", false,-1, 63,0);
        vcdp->declQuad(c+313,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul next_rs2", false,-1, 63,0);
        vcdp->declQuad(c+329,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul this_rs2", false,-1, 63,0);
        vcdp->declQuad(c+345,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul next_rd", false,-1, 63,0);
        vcdp->declQuad(c+361,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul next_rdx", false,-1, 63,0);
        vcdp->declQuad(c+377,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul next_rdt", false,-1, 63,0);
        vcdp->declBus(c+1201,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul mul_counter", false,-1, 6,0);
        vcdp->declBit(c+1209,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul mul_waiting", false,-1);
        vcdp->declBit(c+1217,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul mul_finish", false,-1);
        vcdp->declBus(c+2753,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul i", false,-1, 31,0);
        vcdp->declBus(c+2937,"picorv32_wrapper uut picorv32_core genblk2 genblk1 pcpi_mul j", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div clk", false,-1);
        vcdp->declBit(c+2609,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div resetn", false,-1);
        vcdp->declBit(c+1361,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_valid", false,-1);
        vcdp->declBus(c+1369,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_insn", false,-1, 31,0);
        vcdp->declBus(c+1377,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_rs1", false,-1, 31,0);
        vcdp->declBus(c+1385,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_rs2", false,-1, 31,0);
        vcdp->declBit(c+1529,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_wr", false,-1);
        vcdp->declBus(c+1537,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_rd", false,-1, 31,0);
        vcdp->declBit(c+1545,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_wait", false,-1);
        vcdp->declBit(c+1553,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_ready", false,-1);
        vcdp->declBit(c+2497,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div instr_div", false,-1);
        vcdp->declBit(c+2505,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div instr_divu", false,-1);
        vcdp->declBit(c+2513,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div instr_rem", false,-1);
        vcdp->declBit(c+2521,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div instr_remu", false,-1);
        vcdp->declBit(c+2529,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div instr_any_div_rem", false,-1);
        vcdp->declBit(c+1225,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div pcpi_wait_q", false,-1);
        vcdp->declBit(c+705,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div start", false,-1);
        vcdp->declBus(c+2537,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div dividend", false,-1, 31,0);
        vcdp->declQuad(c+2545,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div divisor", false,-1, 62,0);
        vcdp->declBus(c+2561,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div quotient", false,-1, 31,0);
        vcdp->declBus(c+2569,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div quotient_msk", false,-1, 31,0);
        vcdp->declBit(c+2577,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div running", false,-1);
        vcdp->declBit(c+2585,"picorv32_wrapper uut picorv32_core genblk3 pcpi_div outsign", false,-1);
        vcdp->declBus(c+2649,"picorv32_wrapper mem AXI_TEST", false,-1, 31,0);
        vcdp->declBus(c+2649,"picorv32_wrapper mem VERBOSE", false,-1, 31,0);
        vcdp->declBit(c+2601,"picorv32_wrapper mem clk", false,-1);
        vcdp->declBit(c+433,"picorv32_wrapper mem mem_axi_awvalid", false,-1);
        vcdp->declBit(c+729,"picorv32_wrapper mem mem_axi_awready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper mem mem_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+2665,"picorv32_wrapper mem mem_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+441,"picorv32_wrapper mem mem_axi_wvalid", false,-1);
        vcdp->declBit(c+737,"picorv32_wrapper mem mem_axi_wready", false,-1);
        vcdp->declBus(c+1321,"picorv32_wrapper mem mem_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+1329,"picorv32_wrapper mem mem_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+745,"picorv32_wrapper mem mem_axi_bvalid", false,-1);
        vcdp->declBit(c+1337,"picorv32_wrapper mem mem_axi_bready", false,-1);
        vcdp->declBit(c+449,"picorv32_wrapper mem mem_axi_arvalid", false,-1);
        vcdp->declBit(c+753,"picorv32_wrapper mem mem_axi_arready", false,-1);
        vcdp->declBus(c+1313,"picorv32_wrapper mem mem_axi_araddr", false,-1, 31,0);
        vcdp->declBus(c+1345,"picorv32_wrapper mem mem_axi_arprot", false,-1, 2,0);
        vcdp->declBit(c+761,"picorv32_wrapper mem mem_axi_rvalid", false,-1);
        vcdp->declBit(c+1353,"picorv32_wrapper mem mem_axi_rready", false,-1);
        vcdp->declBus(c+2593,"picorv32_wrapper mem mem_axi_rdata", false,-1, 31,0);
        vcdp->declBit(c+2657,"picorv32_wrapper mem tests_passed", false,-1);
        vcdp->declBit(c+257,"picorv32_wrapper mem verbose", false,-1);
        vcdp->declBus(c+265,"picorv32_wrapper mem i", false,-1, 31,0);
        vcdp->declBus(c+393,"picorv32_wrapper mem out_file", false,-1, 31,0);
        vcdp->declBit(c+401,"picorv32_wrapper mem latched_raddr_en", false,-1);
        vcdp->declBit(c+409,"picorv32_wrapper mem latched_waddr_en", false,-1);
        vcdp->declBit(c+417,"picorv32_wrapper mem latched_wdata_en", false,-1);
        vcdp->declBit(c+785,"picorv32_wrapper mem fast_raddr", false,-1);
        vcdp->declBit(c+793,"picorv32_wrapper mem fast_waddr", false,-1);
        vcdp->declBit(c+801,"picorv32_wrapper mem fast_wdata", false,-1);
        vcdp->declBus(c+1241,"picorv32_wrapper mem latched_raddr", false,-1, 31,0);
        vcdp->declBus(c+1249,"picorv32_wrapper mem latched_waddr", false,-1, 31,0);
        vcdp->declBus(c+1257,"picorv32_wrapper mem latched_wdata", false,-1, 31,0);
        vcdp->declBus(c+1265,"picorv32_wrapper mem latched_wstrb", false,-1, 3,0);
        vcdp->declBit(c+1273,"picorv32_wrapper mem latched_rinsn", false,-1);
    }
}

void Vpicorv32_wrapper::traceFullThis__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullArray(c+1,(vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file),1024);
        vcdp->fullBit(c+257,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose));
        vcdp->fullBus(c+265,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i),32);
        vcdp->fullBus(c+273,(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle),16);
        vcdp->fullBus(c+281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode),32);
        vcdp->fullBus(c+289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1),5);
        vcdp->fullQuad(c+297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1),64);
        vcdp->fullQuad(c+313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2),64);
        vcdp->fullQuad(c+329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2),64);
        vcdp->fullQuad(c+345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd),64);
        vcdp->fullQuad(c+361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx),64);
        vcdp->fullQuad(c+377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt),64);
        vcdp->fullBus(c+393,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file),32);
        vcdp->fullBit(c+401,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en));
        vcdp->fullBit(c+409,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en));
        vcdp->fullBit(c+417,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en));
        vcdp->fullBus(c+425,(vlSymsp->TOP__picorv32_wrapper.__PVT__irq),32);
        vcdp->fullBit(c+433,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid));
        vcdp->fullBit(c+441,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid));
        vcdp->fullBit(c+449,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid));
        vcdp->fullBus(c+457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata),32);
        vcdp->fullBus(c+465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb),4);
        vcdp->fullBus(c+473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc),32);
        vcdp->fullBit(c+481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr));
        vcdp->fullBus(c+489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd),32);
        vcdp->fullBit(c+497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready));
        vcdp->fullBit(c+505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
        vcdp->fullBit(c+513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap));
        vcdp->fullBit(c+521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        vcdp->fullQuad(c+529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr),64);
        vcdp->fullQuad(c+545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr),64);
        vcdp->fullBus(c+561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm),32);
        vcdp->fullBus(c+569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2),5);
        vcdp->fullBus(c+577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd),5);
        vcdp->fullBit(c+585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn));
        vcdp->fullArray(c+593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state),128);
        vcdp->fullBus(c+625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out),32);
        vcdp->fullBit(c+633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0));
        vcdp->fullBit(c+641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq));
        vcdp->fullBit(c+649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu));
        vcdp->fullBit(c+657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts));
        vcdp->fullBit(c+665,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write));
        vcdp->fullBus(c+673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata),32);
        vcdp->fullBus(c+681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1),32);
        vcdp->fullBus(c+689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2),32);
        vcdp->fullBit(c+697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
        vcdp->fullBit(c+705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start));
        vcdp->fullBus(c+713,((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
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
        vcdp->fullBit(c+721,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                              & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                  ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                  : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))));
        vcdp->fullBit(c+729,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready));
        vcdp->fullBit(c+737,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready));
        vcdp->fullBit(c+745,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid));
        vcdp->fullBit(c+753,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready));
        vcdp->fullBit(c+761,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
        vcdp->fullBit(c+769,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready));
        vcdp->fullBus(c+777,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word),32);
        vcdp->fullBit(c+785,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr));
        vcdp->fullBit(c+793,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr));
        vcdp->fullBit(c+801,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata));
        vcdp->fullBit(c+809,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read));
        vcdp->fullBit(c+817,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write));
        vcdp->fullBit(c+825,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer));
        vcdp->fullBit(c+833,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word));
        vcdp->fullBus(c+841,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle),32);
        vcdp->fullBus(c+849,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched),32);
        vcdp->fullBit(c+857,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word));
        vcdp->fullBit(c+865,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
        vcdp->fullBus(c+873,(vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter),32);
        vcdp->fullBit(c+881,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid));
        vcdp->fullBit(c+889,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid));
        vcdp->fullBit(c+897,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid));
        vcdp->fullBit(c+905,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done));
        vcdp->fullBus(c+913,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode),32);
        vcdp->fullBus(c+921,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr),32);
        vcdp->fullBit(c+929,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr));
        vcdp->fullBus(c+937,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd),32);
        vcdp->fullBit(c+945,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
        vcdp->fullBus(c+953,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1),6);
        vcdp->fullBit(c+961,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q));
        vcdp->fullQuad(c+969,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr),64);
        vcdp->fullBus(c+985,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm),32);
        vcdp->fullBus(c+993,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode),32);
        vcdp->fullBus(c+1001,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1),5);
        vcdp->fullBus(c+1009,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2),5);
        vcdp->fullBus(c+1017,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd),5);
        vcdp->fullBit(c+1025,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next));
        vcdp->fullBit(c+1033,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn));
        vcdp->fullQuad(c+1041,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr),64);
        vcdp->fullBus(c+1057,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm),32);
        vcdp->fullBus(c+1065,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode),32);
        vcdp->fullBus(c+1073,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1),5);
        vcdp->fullBus(c+1081,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2),5);
        vcdp->fullBus(c+1089,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd),5);
        vcdp->fullBit(c+1097,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q));
        vcdp->fullBit(c+1105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait));
        vcdp->fullBit(c+1113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2));
        vcdp->fullBit(c+1121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q));
        vcdp->fullBit(c+1129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q));
        vcdp->fullQuad(c+1137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1),64);
        vcdp->fullQuad(c+1153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2),64);
        vcdp->fullQuad(c+1169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd),64);
        vcdp->fullQuad(c+1185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx),64);
        vcdp->fullBus(c+1201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter),7);
        vcdp->fullBit(c+1209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting));
        vcdp->fullBit(c+1217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish));
        vcdp->fullBit(c+1225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q));
        vcdp->fullBit(c+1233,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                               & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
        vcdp->fullBus(c+1241,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr),32);
        vcdp->fullBus(c+1249,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr),32);
        vcdp->fullBus(c+1257,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata),32);
        vcdp->fullBus(c+1265,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb),4);
        vcdp->fullBit(c+1273,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn));
        vcdp->fullBit(c+1281,(vlSymsp->TOP__picorv32_wrapper.trap));
        vcdp->fullBit(c+1289,(vlSymsp->TOP__picorv32_wrapper.trace_valid));
        vcdp->fullQuad(c+1297,(vlSymsp->TOP__picorv32_wrapper.trace_data),36);
        vcdp->fullBus(c+1313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr),32);
        vcdp->fullBus(c+1321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata),32);
        vcdp->fullBus(c+1329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb),4);
        vcdp->fullBit(c+1337,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                               & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))));
        vcdp->fullBus(c+1345,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                ? 4U : 0U)),3);
        vcdp->fullBit(c+1353,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                               & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))))));
        vcdp->fullBit(c+1361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid));
        vcdp->fullBus(c+1369,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn),32);
        vcdp->fullBus(c+1377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1),32);
        vcdp->fullBus(c+1385,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2),32);
        vcdp->fullBus(c+1393,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi),32);
        vcdp->fullBit(c+1401,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid));
        vcdp->fullBit(c+1409,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr));
        vcdp->fullQuad(c+1417,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle),64);
        vcdp->fullQuad(c+1433,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr),64);
        vcdp->fullBus(c+1449,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc),32);
        vcdp->fullBus(c+1457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc),32);
        vcdp->fullBus(c+1465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out),32);
        vcdp->fullBus(c+1473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh),5);
        vcdp->fullBit(c+1481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay));
        vcdp->fullBit(c+1489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active));
        vcdp->fullBus(c+1497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask),32);
        vcdp->fullBus(c+1505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending),32);
        vcdp->fullBus(c+1513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer),32);
        vcdp->fullBit(c+1521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait));
        vcdp->fullBit(c+1529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr));
        vcdp->fullBus(c+1537,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd),32);
        vcdp->fullBit(c+1545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
        vcdp->fullBit(c+1553,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
        vcdp->fullBit(c+1561,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))));
        vcdp->fullBus(c+1569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state),2);
        vcdp->fullBus(c+1577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize),2);
        vcdp->fullBus(c+1585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q),32);
        vcdp->fullBit(c+1593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch));
        vcdp->fullBit(c+1601,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
        vcdp->fullBit(c+1609,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata));
        vcdp->fullBit(c+1617,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
        vcdp->fullBit(c+1625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword));
        vcdp->fullBit(c+1633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg));
        vcdp->fullBit(c+1641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid));
        vcdp->fullBit(c+1649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word));
        vcdp->fullBus(c+1657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer),16);
        vcdp->fullBit(c+1665,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))));
        vcdp->fullBit(c+1673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui));
        vcdp->fullBit(c+1681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc));
        vcdp->fullBit(c+1689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal));
        vcdp->fullBit(c+1697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr));
        vcdp->fullBit(c+1705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq));
        vcdp->fullBit(c+1713,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne));
        vcdp->fullBit(c+1721,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt));
        vcdp->fullBit(c+1729,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge));
        vcdp->fullBit(c+1737,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu));
        vcdp->fullBit(c+1745,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu));
        vcdp->fullBit(c+1753,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb));
        vcdp->fullBit(c+1761,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh));
        vcdp->fullBit(c+1769,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw));
        vcdp->fullBit(c+1777,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu));
        vcdp->fullBit(c+1785,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu));
        vcdp->fullBit(c+1793,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb));
        vcdp->fullBit(c+1801,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh));
        vcdp->fullBit(c+1809,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw));
        vcdp->fullBit(c+1817,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi));
        vcdp->fullBit(c+1825,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti));
        vcdp->fullBit(c+1833,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu));
        vcdp->fullBit(c+1841,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori));
        vcdp->fullBit(c+1849,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori));
        vcdp->fullBit(c+1857,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi));
        vcdp->fullBit(c+1865,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli));
        vcdp->fullBit(c+1873,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli));
        vcdp->fullBit(c+1881,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai));
        vcdp->fullBit(c+1889,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add));
        vcdp->fullBit(c+1897,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub));
        vcdp->fullBit(c+1905,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll));
        vcdp->fullBit(c+1913,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt));
        vcdp->fullBit(c+1921,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu));
        vcdp->fullBit(c+1929,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor));
        vcdp->fullBit(c+1937,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl));
        vcdp->fullBit(c+1945,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra));
        vcdp->fullBit(c+1953,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or));
        vcdp->fullBit(c+1961,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and));
        vcdp->fullBit(c+1969,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle));
        vcdp->fullBit(c+1977,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh));
        vcdp->fullBit(c+1985,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr));
        vcdp->fullBit(c+1993,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh));
        vcdp->fullBit(c+2001,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak));
        vcdp->fullBit(c+2009,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq));
        vcdp->fullBit(c+2017,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq));
        vcdp->fullBit(c+2025,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq));
        vcdp->fullBit(c+2033,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq));
        vcdp->fullBit(c+2041,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq));
        vcdp->fullBit(c+2049,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer));
        vcdp->fullBus(c+2057,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd),6);
        vcdp->fullBus(c+2065,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2),6);
        vcdp->fullBus(c+2073,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm),32);
        vcdp->fullBus(c+2081,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j),32);
        vcdp->fullBit(c+2089,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger));
        vcdp->fullBit(c+2097,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q));
        vcdp->fullBit(c+2105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger));
        vcdp->fullBit(c+2113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr));
        vcdp->fullBit(c+2121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal));
        vcdp->fullBit(c+2129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu));
        vcdp->fullBit(c+2137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai));
        vcdp->fullBit(c+2145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        vcdp->fullBit(c+2153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw));
        vcdp->fullBit(c+2161,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra));
        vcdp->fullBit(c+2169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        vcdp->fullBit(c+2177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt));
        vcdp->fullBit(c+2185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu));
        vcdp->fullBit(c+2193,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        vcdp->fullBit(c+2201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw));
        vcdp->fullBit(c+2209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm));
        vcdp->fullBit(c+2217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg));
        vcdp->fullBit(c+2225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare));
        vcdp->fullBus(c+2233,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val),32);
        vcdp->fullBus(c+2241,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val),32);
        vcdp->fullBit(c+2249,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid));
        vcdp->fullBit(c+2257,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid));
        vcdp->fullBus(c+2265,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state),8);
        vcdp->fullBus(c+2273,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state),2);
        vcdp->fullBit(c+2281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst));
        vcdp->fullBit(c+2289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata));
        vcdp->fullBit(c+2297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata));
        vcdp->fullBit(c+2305,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store));
        vcdp->fullBit(c+2313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu));
        vcdp->fullBit(c+2321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch));
        vcdp->fullBit(c+2329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        vcdp->fullBit(c+2337,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace));
        vcdp->fullBit(c+2345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu));
        vcdp->fullBit(c+2353,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh));
        vcdp->fullBit(c+2361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb));
        vcdp->fullBus(c+2369,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd),6);
        vcdp->fullBus(c+2377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc),32);
        vcdp->fullBus(c+2385,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter),4);
        vcdp->fullBit(c+2393,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout));
        vcdp->fullBus(c+2401,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending),32);
        vcdp->fullBit(c+2409,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq));
        vcdp->fullBus(c+2417,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q),32);
        vcdp->fullBus(c+2425,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                                ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                   - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                                : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                   + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        vcdp->fullBus(c+2433,((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               << (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        vcdp->fullBus(c+2441,((IData)((VL_ULL(0x1ffffffff) 
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
        vcdp->fullBit(c+2449,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul));
        vcdp->fullBit(c+2457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh));
        vcdp->fullBit(c+2465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
        vcdp->fullBit(c+2473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu));
        vcdp->fullBit(c+2481,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu))))));
        vcdp->fullBit(c+2489,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))));
        vcdp->fullBit(c+2497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div));
        vcdp->fullBit(c+2505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu));
        vcdp->fullBit(c+2513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem));
        vcdp->fullBit(c+2521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu));
        vcdp->fullBit(c+2529,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu))))));
        vcdp->fullBus(c+2537,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend),32);
        vcdp->fullQuad(c+2545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor),63);
        vcdp->fullBus(c+2561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient),32);
        vcdp->fullBus(c+2569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk),32);
        vcdp->fullBit(c+2577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running));
        vcdp->fullBit(c+2585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign));
        vcdp->fullBus(c+2593,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata),32);
        vcdp->fullBit(c+2601,(vlTOPp->clk));
        vcdp->fullBit(c+2609,(vlTOPp->resetn));
        vcdp->fullBit(c+2617,(vlTOPp->trap));
        vcdp->fullBit(c+2625,(vlTOPp->trace_valid));
        vcdp->fullQuad(c+2633,(vlTOPp->trace_data),36);
        vcdp->fullBus(c+2649,(0U),32);
        vcdp->fullBit(c+2657,(1U));
        vcdp->fullBus(c+2665,(0U),3);
        vcdp->fullBit(c+2673,(1U));
        vcdp->fullBit(c+2681,(0U));
        vcdp->fullBus(c+2689,(0U),32);
        vcdp->fullBus(c+2697,(0xffffffffU),32);
        vcdp->fullBus(c+2705,(0x10U),32);
        vcdp->fullBit(c+2713,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_wr));
        vcdp->fullBus(c+2721,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_rd),32);
        vcdp->fullBit(c+2729,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_wait));
        vcdp->fullBit(c+2737,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_ready));
        vcdp->fullBus(c+2745,(0U),32);
        vcdp->fullBus(c+2753,(1U),32);
        vcdp->fullBus(c+2761,(2U),32);
        vcdp->fullBus(c+2769,(0x20U),32);
        vcdp->fullBus(c+2777,(0x24U),32);
        vcdp->fullBus(c+2785,(6U),32);
        vcdp->fullQuad(c+2793,(VL_ULL(0x100000000)),36);
        vcdp->fullQuad(c+2809,(VL_ULL(0x200000000)),36);
        vcdp->fullQuad(c+2825,(VL_ULL(0x800000000)),36);
        vcdp->fullBus(c+2841,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__i),32);
        vcdp->fullBus(c+2849,(0x80U),8);
        vcdp->fullBus(c+2857,(0x40U),8);
        vcdp->fullBus(c+2865,(0x20U),8);
        vcdp->fullBus(c+2873,(0x10U),8);
        vcdp->fullBus(c+2881,(8U),8);
        vcdp->fullBus(c+2889,(4U),8);
        vcdp->fullBus(c+2897,(2U),8);
        vcdp->fullBus(c+2905,(1U),8);
        vcdp->fullBus(c+2913,(0U),6);
        vcdp->fullBus(c+2921,(1U),32);
        vcdp->fullBus(c+2929,(4U),32);
        vcdp->fullBus(c+2937,(0x40U),32);
    }
}
