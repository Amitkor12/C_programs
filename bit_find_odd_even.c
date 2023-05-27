#include<stdio.h>
#include<stdint.h>

void main()
{
    uint8_t num1;
    printf("Enter value of num1:");
    scanf("\n%d",&num1);
    printf("value of num1 is:%d",num1);
    // uint8_t num2 = 31;
    if (num1 & 1)
    {
        printf("\nNumber is odd");
    }
    else{
        printf("\nNumber is even");
    }
    
}