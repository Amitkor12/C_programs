#include<stdio.h>
#include<stdint.h>

void main()
{
    uint16_t data = 0xB410;
    uint8_t output;
    uint16_t temp = (data>>9);
    printf("%x",temp);

    output = (uint8_t)((data>>9)& 0x3f);
    printf("\n%d",output);
}