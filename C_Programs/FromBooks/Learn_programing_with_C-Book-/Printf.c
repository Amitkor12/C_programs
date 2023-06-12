#include<stdio.h>

void main()
{
    #if 0
        int a=90,b=75;
        printf("%d%d\n",a,b);
    #endif

    #if 0
        int a=90,b=75;
        printf("%d %d\n",a,b);
    #endif

    #if 0
        /* predict the uotput of the following */
        
        int a=90,b=75;
        printf("%d\n %d\n", a, b);

    #endif

    #if 1
        /*Format Specifiaction while using printf */
        
        int num = 97;
        printf("%d\n",num);
        printf("%d04\n",num);
        printf("%04d\n",num);       //leading zeroes
        printf("%4d\n",num);           //leading spaces
        printf("%-4d\n",num);       //trailling spaces 

    #endif
}