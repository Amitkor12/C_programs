// program about different storage classes in C
#include <stdio.h>
// globle variable which can be extern 
int x;

int autoClass()
{
    auto int a =32;
    printf("the value of a is: %d\n",a);
    for(int i =0 ;i<50;i++)
    {
        printf("-");
    }
}

int externClass()
{
    extern int x;
    printf("\nthe value of x is: %d\n",x);
    // modified value of x
    x = 3;
    printf("\nthe value of x is: %d\n",x);
    for(int i =0 ;i<50;i++)
    {
        printf("-");
    }
}

int main()
{
    autoClass();
    externClass();
    return 0;
}