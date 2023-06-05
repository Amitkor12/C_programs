#include<stdio.h>

void main(void)
{
    int n;
    printf("how many 0:");
            scanf("%d",&n);
            printf("%d\n",n);
    for(int i = 0;i<3;i++)
    {
        if(n == 0)
        {
            printf("how many 0:");
            scanf("%d",&n);
            //printf("%d",n);
        }
        if(n == 1)
        {
            printf("how many 1:");
            scanf("%d",&n);
            //printf("%d\n",n);
        }
        if(n == 2)
        {
            printf("how many 2:");
            scanf("%d",&n);
            //0
            printf("%d\n",n);
        }

    }
    //printf("%d",n);
    
}