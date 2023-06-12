/*Write statements to print the values of 3 double variables a, b, and c, to 2 decimal
places, The values must be printed one below the other, with their rightmost digits
in column 12.*/

#include <stdio.h>

void main()
{
    double a = 34.897, b = 23.564, c = 8.234;
    printf("%12.2f\n%12.2f\n%12.2f\n",a,b,c);
}