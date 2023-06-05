/*What will happen when the computer attempts to execute the following:
p = 7;
q = 3 + p;
p = p + r;
printf("%d\n", p);
*/

#include <stdio.h>

void main()
{
    #if 0
    int p = 7;
    int q = 3 + p;
    p = p + r;      // error due to not define 
    printf("%d\n",p);
    #endif


    #if 0
        int p = 7;
        int r = 3 + p;
        p = p + r;      // error due to not define 
        printf("%d\n",p);
    #endif
}