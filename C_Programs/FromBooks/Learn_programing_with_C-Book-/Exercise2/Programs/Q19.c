/*How can you print the value of a double variable, rounded to the nearest whole
number?*/

#include<stdio.h>

void main()
{
    double num1;
    int wholeNum;
    printf("Enter a Number Of Double type\n");
    scanf("%lff\n",&num1);
    wholeNum = num1 + 0.5;                 //we Are adding 0.5 to any double no to round it up to nearest whole no.
    printf("%d\n",wholeNum);
}