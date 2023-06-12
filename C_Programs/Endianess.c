//to find endianess of system

// #include<stdio.h>
// void main()
// {
//     int x = 0x01234567;
//     char *ptr = (char *)(&x);
//     int n = sizeof(x);
//     for(int i=0;i<n;i++)
//     {
//         printf("%.2x \t",ptr[i]);    
//     }
//     if(ptr)
//     {
//         printf("\nlittle endian sys");
//     }
//     else
//     printf("big endian sys");
    
// }


#include<stdio.h>
#include<stdint.h>

void main()
{
    uint16_t x = 0x1234;
    char *ptr = (char *)(&x);
    if(ptr)
    {
        printf("little end");
    }
    else
    {
        printf("big end");
    }
}