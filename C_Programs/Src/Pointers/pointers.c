#include <stdio.h>

void main(void)
{
    int no = 90;
    int *ptr;
    printf("Address: %x\n",ptr = &no);
    printf("Data: %d\n",*(&no));
    printf("Data: %d\n",*ptr);
}