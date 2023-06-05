#include<stdio.h>

int square(int s)
{
    return s*s;
}

int cal(int num,int (*op)(int))
{
    return op(num);
}

int main()
{
    printf("%d",cal(4,square));
}