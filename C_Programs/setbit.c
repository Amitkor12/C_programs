#include <stdio.h>
#include<stdlib.h>

#define set_bit(value,n) (value | n)  //setting the bit of no
#define clear_bit(value,n) (value & n) // clearing the bit of no.

int main() {
    // Write C code here
    //int n=2;
    printf("%x\n",set_bit(4,2));
    printf("%x\n",clear_bit(4,2));

    return 0;
}