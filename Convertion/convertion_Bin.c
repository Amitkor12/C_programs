//decimal to binary
#include <stdio.h>

int main()
{
   int a[20],n,i=0;
   printf("Enter no for convertion");
   scanf("%d",&n);
   for(i=0;n>0;i++)
   {
       a[i] = n%2;
       n=n/2;
   }
   for(i=i-1;i>=0;i--)
   {
       printf("%d",a[i]);
   }
   
    return 0;
}