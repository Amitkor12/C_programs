#include<stdio.h>
#include<stdint.h>

void main()
{
    int n,sum=0;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
}