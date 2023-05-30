#include <stdio.h>


#define set_bit (num |= (n<<1))
#define clear_bit (num &= ~(n<<1)  )

int main()
{
    int bit1,bit2;
    int num = 0xff;
    int n = 2;
    bit1 = set_bit;
    bit2 = clear_bit;
    printf("%d\n",bit1);
    printf("%d",bit2);
}