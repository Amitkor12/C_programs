/*Write a statement to decrease the value of the int variable quantity by 5.*/

#include <stdio.h>
void main()
{
    int quantity  = 20;
    printf("Quantity before decreasing 5:%5d\n",quantity);
    quantity -= 5;
    printf("Quantity after decreasing 5:%6d\n",quantity);
}