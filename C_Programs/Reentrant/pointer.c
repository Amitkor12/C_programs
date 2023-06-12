#include<stdio.h>

void main()
{
    int a=5;
    int *ptr;
   ptr = &a;
   for(int i=0;i<5;i++)
   {
    printf("%d\n",*ptr+i);
    printf("%d\n",ptr+i);
   }

   
}