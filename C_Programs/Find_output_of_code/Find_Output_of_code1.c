#include<stdio.h>

void main()
{
    char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";     //pointer variable of type char
    int i;
    int x=1,count=0;   
    for(i=0;i<5;i++)
    {
        *(p++);                           //pointer operation - increament
        printf("%d %c\n",i,*p);
    }
      *p++;

    printf("%c\n",*p++);
    
        while(x++<100)
        {
            count++;
            x*=x;
            if(x<10) continue;
            if(x>50) break;
            
        }
        printf("%d\n",count);
}
