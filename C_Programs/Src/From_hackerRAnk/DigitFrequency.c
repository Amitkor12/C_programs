#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int a[10]={0};
    scanf("%s",s);
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<=strlen(s);i++)
    {        
        if(s[i]-'0'==j)
        {
            a[j]++;
        }
    }
        printf("%d ",a[j]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
