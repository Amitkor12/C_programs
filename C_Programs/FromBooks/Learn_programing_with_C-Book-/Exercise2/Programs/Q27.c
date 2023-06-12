/*Write a statement to double the value of the int variable quantity.*/

#include <stdio.h>
void main()
{
    int quantity  = 20;
    printf("Quantity before doubling 5:%5d\n",quantity);
    quantity *= 2;
    printf("Quantity after doubling 5:%6d\n",quantity);
}