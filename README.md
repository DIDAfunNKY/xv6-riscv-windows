可在WINDOWS上QEMU运行的riscv-xv6，再也不需要虚拟机了，跑得还快
## install make

mingw32-make
https://osdn.net/projects/mingw/

## install qemu
https://qemu.weilnetz.de/w64/

## install git
自己百度

## install perl
https://strawberryperl.com/

## install risc-v64 gcc
https://www.nucleisys.com/download.php
Nuclei RISC-V Embedded Toolchain(Baremetal/RTOS + Newlibc)

## 设置系统路径PATH
C:\MinGW\bin

C:\Program Files\Git\cmd

C:\Program Files\Git\usr\bin

C:\Strawberry\c\bin

C:\Strawberry\perl\site\bin

C:\Strawberry\perl\bin

C:\Program Files\qemu

## 在qemu上启动xv6
mingw32-make qemu

## xv6 readme
xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6).  xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using ANSI C.

ACKNOWLEDGMENTS

xv6 is inspired by John Lions's Commentary on UNIX 6th Edition (Peer
to Peer Communications; ISBN: 1-57398-013-7; 1st edition (June 14,
2000)).  See also https://pdos.csail.mit.edu/6.1810/, which provides
pointers to on-line resources for v6.

The following people have made contributions: Russ Cox (context switching,
locking), Cliff Frey (MP), Xiao Yu (MP), Nickolai Zeldovich, and Austin
Clements.

We are also grateful for the bug reports and patches contributed by
Takahiro Aoyagi, Marcelo Arroyo, Silas Boyd-Wickizer, Anton Burtsev,
carlclone, Ian Chen, Dan Cross, Cody Cutler, Mike CAT, Tej Chajed,
Asami Doi,Wenyang Duan, eyalz800, Nelson Elhage, Saar Ettinger, Alice
Ferrazzi, Nathaniel Filardo, flespark, Peter Froehlich, Yakir Goaron,
Shivam Handa, Matt Harvey, Bryan Henry, jaichenhengjie, Jim Huang,
Matúš Jókay, John Jolly, Alexander Kapshuk, Anders Kaseorg, kehao95,
Wolfgang Keller, Jungwoo Kim, Jonathan Kimmitt, Eddie Kohler, Vadim
Kolontsov, Austin Liew, l0stman, Pavan Maddamsetti, Imbar Marinescu,
Yandong Mao, Matan Shabtay, Hitoshi Mitake, Carmi Merimovich, Mark
Morrissey, mtasm, Joel Nider, Hayato Ohhashi, OptimisticSide,
phosphagos, Harry Porter, Greg Price, RayAndrew, Jude Rich, segfault,
Ayan Shafqat, Eldar Sehayek, Yongming Shen, Fumiya Shigemitsu, snoire,
Taojie, Cam Tenny, tyfkda, Warren Toomey, Stephen Tu, Alissa Tung,
Rafael Ubal, Amane Uehara, Pablo Ventura, Xi Wang, WaheedHafez,
Keiichi Watanabe, Lucas Wolf, Nicolas Wolovick, wxdao, Grant Wu, x653,
Jindong Zhang, Icenowy Zheng, ZhUyU1997, and Zou Chang Wei.

ERROR REPORTS

Please send errors and suggestions to Frans Kaashoek and Robert Morris
(kaashoek,rtm@mit.edu).  The main purpose of xv6 is as a teaching
operating system for MIT's 6.1810, so we are more interested in
simplifications and clarifications than new features.

BUILDING AND RUNNING XV6

You will need a RISC-V "newlib" tool chain from
https://github.com/riscv/riscv-gnu-toolchain, and qemu compiled for
riscv64-softmmu.  Once they are installed, and in your shell
search path, you can run "make qemu".
