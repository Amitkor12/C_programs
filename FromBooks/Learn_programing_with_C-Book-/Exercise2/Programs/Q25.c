/*Write a statement to increase the value of the int variable quantity by 10.*/


#include <stdio.h>
void main()
{
    int quantity  = 20;
    printf("Quantity before adding 10:%5d\n",quantity);
    quantity += 10;
    printf("Quantity after adding 10:%6d\n",quantity);
}