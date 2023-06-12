/* Give the value of 
    (a) 39 % 7 
    (b) 88 % 4 
    (c) 100 % 11 
    (d) -25 % 9 
*/

#include<stdio.h>

void main()
{
    #if 1
        // (a) 
        int num1 = 39;
        int num2 = 7;
        printf("value of %d %% %d = %d\n",num1,num2,num1 % num2);
    #endif

    #if 0
    // (b)
    int num1 = 88, num2 = 4;
    printf("value of %d %% %d = %d\n",num1,num2,num1 % num2);
    #endif

    #if 0
    // (c)
    int num1 = 100, num2 = 11;
    printf("value of %d %% %d = %d\n",num1,num2,num1 % num2);
    #endif

    #if 0
    int num1 = -29, num2 = 9;
    printf("value of %d %% %d = %d\n",num1,num2,num1 % num2);
    #endif
}