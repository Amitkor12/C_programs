/** 
 * scanf causes the computer to wait for the user to enter a number. 
 * The scanf statement, will cause the computer to wait for the user to type a number
 * Suppose we types 23 for variable a.
 * Suppose we enters 18; scanf reads the number, and stores it in the variable b. 
 * At this stage, the number 23 is stored in a and 18 is stored in b.
*/

#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter value for a : \n");
    scanf("%d",&a);
    printf("Enter value for b : \n");
    scanf("%d",&b);
    printf("The value of a is %d\nThe value of b is %d\n",a,b);
}