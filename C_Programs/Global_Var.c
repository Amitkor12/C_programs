#include <stdio.h>

int a;     // declaration of Global Variable 

int main()
{
    a = 10;          //initialization of global variable
    a = 45;           //can be changed due to global variable 
    printf("%d\n",a);
}