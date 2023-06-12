> A non reentrant code uses global variable.
> A reentrant code dont use global variable.
> The function has to satisfy certain conditions to be called as reentrant:
1. It may not use global and static data. Though there are no restrictions, but it is generally not advised. because the interrupt may change certain global values and resuming the course of action of the reentrant function with the new data may give undesired results.

2. It should not modify it’s own code. This is important because the course of action of the function should remain the same throughout the code. But, this may be allowed in case the interrupt routine uses a local copy of the reentrant function every time it uses different values or before and after the interrupt.
 
3. Should not call another non-reentrant function.