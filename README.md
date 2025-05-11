# XV6 Containers and PID Namespaces

> Done as part of Operating Systems course work

## What is XV6?

[xv6](https://pdos.csail.mit.edu/6.828/2022/xv6.html) is a simple Unix-like teaching operating system developed by MIT, used to demonstrate core OS concepts like process management, system calls, and file systems. It runs on x86 (32-bit).

## Project Objective

the xv6 given in the zip file has a missing ps command. so the projects fixes that bug by adding this command.  
this comand supports non nested containers as well.

## notable commands for the project

1. to compile:
   ```
   make clean
   ```
2. to enter the os:
   ```
   make qemu
   ```
3. to see the processes running:
   ```
   ps
   ```
4. to open a container (c1 is a container name of the example):
   ```
   pouch start c1
   ```
5. to enter the container (c1 is the name of the container we enter in the example):
   ```
   pouch connect c1
   ```

## How to Run XV6 on Ubuntu

1. for downloading & running xv6 visit "Running and debbugging xv6" file
2. use the commands mentioned above to see xv6 without the project
3. add the updated files to the xv6 files and delete the former non updated files
4. compile & run
5. try the commands mentioned above again
