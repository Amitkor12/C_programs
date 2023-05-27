#include<stdio.h>

void main()
{
    char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    int x=1,count=0;   
    for(i=0;i<5;i++)
    {
        *p++;
        printf("%d %c\n",i,*p);
    }
      *p++;
    /*
    0 B
    1 B
    2 C
    3 D
    4 E
    5*/
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
