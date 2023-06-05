/*Using scientific notation, write the number 345.72 in four different ways.*/

#include<stdio.h>

void main()
{
    float num = 345.72;

    printf("scientific notation of %f is %e\n",num,num);
    printf("scientific notation of %f is %e --> %f\n",num,num*10,num*10);
    printf("scientific notation of %f is %e --> %f\n",num,num*100,num*100);
    printf("scientific notation of %f is %e --> %f\n",num,num*1000,num*1000);

}