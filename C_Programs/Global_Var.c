#include <stdio.h>

int a ;

int fun()
{
    return 10;
}

int main()
{
    a = fun();
    printf("%d\n",a);
}