# Segmentation faults in C or C++

* An error that occurs when a program attempts to access a memory location it does not have permission to access.
* Generally, this error occurs when memory access is violated and is a type of general protection fault. Segfaults are the abbreviation for segmentation faults.
* When a piece of code tries to do a read-and-write operation in a read-only location in memory or freed block of memory, it is known as a segmentation fault.

## The core dump

* Refers to the recording of the state of the program, i.e. its resources in memory and processor.
* Trying to access non-existent memory or memory which is being used by other processes also causes the Segmentation Fault which leads to a core dump.

Some common scenarios that can cause segmentation faults are:

1. Modifying a string literal
2. Accessing an address that is freed
3. Accessing out-of-array index bounds
4. Improper use of scanf()
5. Stack Overflow
6. Dereferencing uninitialized pointer
