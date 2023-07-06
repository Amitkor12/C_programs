#include<stdio.h>

#define _Long
// #define _Double

int main()
{
#ifdef _Long
    long nc;
    nc = 0;
    while(getchar()!=EOF)       //getchar can take strings with enter or space 
    {
        ++nc;
    }
    printf("%ld\n",nc);
#endif

#ifdef _Double
    double nc;
    for(nc =0;getchar()!=EOF;++nc);
    printf("%.0f\n",nc);
#endif
    return 0;
}