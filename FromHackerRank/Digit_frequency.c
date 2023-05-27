#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    int count=0;
    int a[9]={0};
    scanf("%s",str);
    printf("%s\n",str);

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]-'0'==i)
            {
                a[i]++;
            }
        }
        printf("%d ",a[i]);
    }
}