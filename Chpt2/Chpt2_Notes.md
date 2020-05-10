# Chapter 2 - Intro to OS

Von Neumann model of computing is descibed as fetch(instruction from memory) - deocdes (figure out instruction) - executes

## 2.1 Virtualize the CPU

The OS is a resource manager for all the physical resources of the system (memory, CPU, etc.)

## 2.2 - Virtualizatiob of Memory

The OS virtualizes memory. Each process accesses its own private virtual address space (address space) which the OS maps onto the physical memory

The idea of memory is abstracted for programs (it does not assume its really sharing any memory)

## 2.3 Concurrency

Cocurrency is an issue with not only the OS, but for multi threaded programs as well

## 2.4 - Persistance

File system are used by the OS to store files efficently

OS does not create virtualized disks for each application, unlike CPU and memory, since its assumed that apps want to share files

System calls for file access are routed to the file system

File system's job involves figuring out where on disk to put new data and tracking the various structures

File systems usually batch writes for performance

File systems use multiple types of data structures for efficient operations

## 2.5 - Design Goals

OS design should focus heavily on performance, as virtualization comes with lots of overhead

OS design should also focus on protection (between processes) and reliability




