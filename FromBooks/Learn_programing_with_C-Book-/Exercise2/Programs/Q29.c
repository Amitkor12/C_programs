/*The double variable price holds the price of an item. Write a statement to
increase the price by (a) $12.50 (b) 25%.*/

#include<stdio.h>

void main()
{
    #if 0
    double price = 45;
    price +=12.50;
    printf("double price is : %f\n",price);
    #endif

    #if 1
        double price = 45;
        price = price + (price * 0.25);
        printf("Double the price by 25%% is %f\n",price);
    #endif   
}