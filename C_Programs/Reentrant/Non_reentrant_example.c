#include<stdio.h>
// A non-reentrant example
// [The function depends on global variable i]

int i = 2;

// Both fun1() and fun2() are not reentrant

// fun1() is NOT reentrant because it uses global variable i
int fun1()
{
	return i * 5;
}

// fun2() is NOT reentrant because it calls a non-reentrant
// function
int fun2()
{
return fun1() * 5;
}

int main()
{
    printf("%d\n",fun1());
    printf("%d",fun2());
    return 0;
}