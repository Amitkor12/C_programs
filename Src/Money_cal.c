#include <stdio.h>

void money_cal()
{
    int days=1,sum=0;
    for(days;days<=31;days++)
    {
        printf("Days %d\n",days);
        sum = sum + days;
        printf("%d\n",sum);
    }

    printf("%d\n",sum * 12);
}