# XV6 Containers and PID Namespaces

> Done as part of Operating Systems course work

## What is XV6?

[xv6](https://pdos.csail.mit.edu/6.828/2022/xv6.html) is a simple Unix-like teaching operating system developed by MIT. It's designed to demonstrate core OS concepts like process management, system calls, and file systems. xv6 runs on x86 (32-bit) and is commonly used for academic purposes.

## Project Objective

The version of xv6 provided in the zip file is missing a working ps command.This project fixes that issue by adding a functional ps command with support for non-nested containers.

## notable commands for the project

1. To clean and compile (always use make clean before use):
   ```
   make clean
   ```
2. To start the OS:
   ```
   make qemu
   ```
3. To view running processes:
   ```
   ps
   ```
4. To start a container (e.g., named c1):
   ```
   pouch start c1
   ```
5. To connect to a container:
   ```
   pouch connect c1
   ```

## How to Run XV6 on Ubuntu

1. For installation instructions, refer to the included "Running and Debugging xv6" file.
2. Use the commands above to explore xv6 as-is.
3. Copy the updated files from this project into the xv6 directory, replacing the original files.
4. Compile and run xv6 again.
5. Use the commands above again to explore xv6 with its updated functionality.
