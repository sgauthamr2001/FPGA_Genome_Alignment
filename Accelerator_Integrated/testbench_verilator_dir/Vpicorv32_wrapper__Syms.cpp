// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpicorv32_wrapper__Syms.h"
#include "Vpicorv32_wrapper.h"
#include "Vpicorv32_wrapper_picorv32_wrapper.h"
#include "Vpicorv32_wrapper_axi4_mem_periph.h"



// FUNCTIONS
Vpicorv32_wrapper__Syms::Vpicorv32_wrapper__Syms(Vpicorv32_wrapper* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__picorv32_wrapper(Verilated::catName(topp->name(), "picorv32_wrapper"))
    , TOP__picorv32_wrapper__mem(Verilated::catName(topp->name(), "picorv32_wrapper.mem"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->picorv32_wrapper = &TOP__picorv32_wrapper;
    TOPp->picorv32_wrapper->mem = &TOP__picorv32_wrapper__mem;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__picorv32_wrapper.__Vconfigure(this, true);
    TOP__picorv32_wrapper__mem.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_picorv32_wrapper__mem.configure(this, name(), "picorv32_wrapper.mem", "mem", VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_picorv32_wrapper__mem.varInsert(__Vfinal,"jpgmem", &(TOP__picorv32_wrapper__mem.jpgmem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,262143,0);
        __Vscope_picorv32_wrapper__mem.varInsert(__Vfinal,"memory", &(TOP__picorv32_wrapper__mem.memory), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,524287,0);
        __Vscope_picorv32_wrapper__mem.varInsert(__Vfinal,"wkmem", &(TOP__picorv32_wrapper__mem.wkmem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,524287,0);
    }
}
