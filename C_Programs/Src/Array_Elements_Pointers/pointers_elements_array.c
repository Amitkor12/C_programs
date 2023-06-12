//accessing array elements using pointers

#include <stdio.h>
int i; //global variable 

int main()
{
    /*Declaring array and initiaxing at same time */
    int ary[6]={2,89,45,34,21,12};
    for(i=0;i<6;i++)
    {
        printf("\nary[%d] = %d",i+1,*(ary+i));
    }
}