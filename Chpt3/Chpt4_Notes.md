# Chapter 4 - The Abstraction: The Process

The OS creates an illusion of many CPUs by virtualizing the CPU. The CPU contionusly stops and resumes processes for this.

Time sharing is used for this illusion by running concurrent processes

Policies are algorithms used for making decisions. 
- eg) scheduling policies used to determine which process to run

## 4.1 - Abstraction: A Process

The machine state is what a program can read and update when running
- The memory the process can address (address space)
- Program counter (PC) tells us which instruction the program is executing
- Stack pointer and assosicated frame pointer are used to manage the stack of func parameters, local vars, and return addresses
- List of files the program has open
- etc.

## 4.2 - Process API

