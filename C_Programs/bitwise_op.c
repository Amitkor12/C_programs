#include<stdio.h>
#include<stdint.h>

int main()
{
    // short int c = 5;
    // printf("%d",sizeof(c));
    // printf("\n%d",~c);
    
    // uint8_t a = 5;
    // uint8_t b;
    // b = ~(a);
    // printf("\n%d",b);
    // printf("\n%u",b);

    // printf("\n%u",~a); 

    int num1,num2,num3 = 3;

    printf("first no:\n");
    scanf("%x",&num1);
    printf("second no:\n");
    scanf("%x",&num2);
     int result;
     result = ((((num3)) & (~(num1))) | (num2));
    //  result = ((~(num1))|(num2));
     printf("result %x",result);

}