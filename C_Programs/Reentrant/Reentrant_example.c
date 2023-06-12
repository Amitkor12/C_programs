#include<stdio.h>

// Both fun1() and fun2() are reentrant
int fun1(int i)
{
	return i * 5;
}

int fun2(int i)
{
return fun1(i) * 5;
}

int main()
{
    printf("%d\n",fun1(2));
    printf("%d\n",fun2(2));
    return 0;
}