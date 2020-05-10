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

Modern OSes include the following in their APIs:
- Create
- Destory
- Wait
- Misc Control (Stop, Resume, etc)
- Status

## 4.3 - Process Creation

First, the OS must load the code and any static resources from disk to memory, into an address space for the process

Older OSes loaded program code and resource all at once (eagerly). Modern OSes do it lazily, which grabs pieces of code and data only as needed during execution.

Paging and swapping are used for lazy loading

Once loaded, the OS must provide some memory for the run time stack.

OS may allocate some memory for heap as well for dynamically-allocated memory ( malloc(), free() )

Last step of task is to start the program at entry point ( main() ). The control of CPU is then handed over to the program.

## 4.4 - Process States

Possible states:

- Running: Process is currently executing
- Ready: Ready to run. Process can move between ready and running depending on scheulding algorithm
- Blocked: Blocked until some other event takes place ( I/O ).

## 4.5 - Data Structures
- 
