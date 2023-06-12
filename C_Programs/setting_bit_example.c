#include<stdio.h>
#include<stdint.h>

void main()
{
    uint8_t a = 5;
    uint8_t b = 66;

    a ^= b;

    printf("a is : %d",a);
}