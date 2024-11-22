#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "defs.h"

volatile static int started = 0;

// start() jumps here in supervisor mode on all CPUs.
void
main()
{
  if(cpuid() == 0){
    consoleinit();
    printfinit();
    printf("\n");
    printf("xv6 kernel is booting\n");
    printf("\n");
    kinit();printf("kinit done\n");         // physical page allocator
    kvminit();printf("kvminit done\n");       // create kernel page table
    kvminithart();printf("kvminithart done\n");   // turn on paging
    procinit();printf("procinit done\n");      // process table
    trapinit();printf("trapinit done\n");      // trap vectors
    trapinithart();printf("trapinithart done\n");  // install kernel trap vector
    plicinit();printf("plicinit done\n");      // set up interrupt controller
    plicinithart();printf("plicinithart done\n");  // ask PLIC for device interrupts
    binit();printf("binit done\n");         // buffer cache
    iinit();printf("iinit done\n");         // inode table
    fileinit();printf("fileinit done\n");      // file table
    virtio_disk_init();printf("virtio_disk_init done\n"); // emulated hard disk
    userinit();printf("userinit done\n");      // first user process
    __sync_synchronize();printf("__sync_synchronize done\n");
    started = 1;
  } else {
    while(started == 0)
      ;
    __sync_synchronize();
    printf("hart %d starting\n", cpuid());
    kvminithart();    // turn on paging
    trapinithart();   // install kernel trap vector
    plicinithart();   // ask PLIC for device interrupts
  }

  printf("scheduler booting\n");
  scheduler();        
}
