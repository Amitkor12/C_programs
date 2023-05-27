// #include<stdio.h>
// #include<stdlib.h>

// void main()
// {
//     int *p,(*q)[5],*r[3],**s;
//     printf("sizeof(int);%d\n",sizeof(int));
//     printf("sizeof(int *);%d\n",sizeof(int *));
//     printf("sizeof(int []);%d\n",sizeof(int [5]));
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));//address location
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i); //values at the address
    }


    /* Write the logic to reverse the array. */

    int temp;
    for (i = 0; i < num / 2; i++) {
        temp = (int) *(arr + num - i - 1);
        *(arr + num - i - 1) = *(arr + i);
        *(arr + i) = temp;
    }    
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}