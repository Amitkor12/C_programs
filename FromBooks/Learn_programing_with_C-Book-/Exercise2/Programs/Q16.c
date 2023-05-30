/*You need to print the values of the float variables a, b, and c to 1 decimal place.
Write a statement that prints a with its rightmost digit in column 12, b with its
rightmost digit in column 20, and c with its rightmost digit in column 32.*/

#include<stdio.h>

void main()
{
    float a = 34.567,b = 90.456 , c = 78.3456;
    printf("%-12.1f%-20.1f%-32.1f",a,b,c);
}