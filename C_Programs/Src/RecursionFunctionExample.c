#include <stdio.h>

#define num 10

int p (int n, int m)
{
    if (n == m)
        return 1 + p(n, m - 1);
    if (m == 0 || n < 0)
        return 0;
    if (n == 0 || m == 1)
        return 1;
    
    return p(n, m - 1) + p(n - m, m);

}

void main()
{
    printf("the vale is : %d\n",p(7,3));
}