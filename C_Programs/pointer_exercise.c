#include<stdio.h>

void main()
{
    char a = 100;
    printf("adress of a:\t%p",&a);
    char *ptr = &a;
    printf("\nValue of pointer:\t%d",*ptr);
    *ptr = 120;
    printf("\nValue of a:\t%d",a);
}

// #include<stdio.h>

// void main()
// {
//     int *ptr = 65;
//     printf("value of ptr:%d",&(*ptr));
// }