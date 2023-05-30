#include<stdio.h>
//simple function
//below function does not contains any parameters
// as arguments of function

//creation and defining of function sum
void sum()
{
    int sum;
    for(int i=0;i<5;i++)
    {
        sum = sum + i;
    }
    printf("sum of first 5 numbers is:%d",sum);
}

//in main function we are
//just calling the sum function
void main()
{
    sum();
}