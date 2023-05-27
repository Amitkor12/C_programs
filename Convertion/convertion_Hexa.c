//Conversion of decimal to hexadecimal
#include <stdio.h>

int main()
{
   char a[20];
   int n,i,temp;
   printf("Enter no for convertion:\n==> ");
   scanf("%d",&n);
   for(i=0;n>0;i++)
   {
       temp = n%16;
       
       if(temp>10)
       a[i] = temp + 55;
       else
       a[i] = temp + 48;
       n = n/16;
   }
   for(i=i-1;i>=0;i--)
   {
       printf("%c",a[i]);
   }  
    return 0;
}