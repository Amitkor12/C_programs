// #include<stdio.h>

// void main()
// {
//     char a = 100;
//     printf("adress of a:%p",&a);
//     char *ptr = &a;
//     printf("\nValue of pointer:%d",*ptr);
//     *ptr = 120;
//     printf("\nValue of a:%d",a);
// }

#include<stdio.h>

void main()
{
    int *ptr = 65;
    printf("value of ptr:%d",&(*ptr));
}