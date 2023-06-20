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

    #if 0
        /*Format Specifiaction while using printf */
        
        int num = 97;
        printf("%d\n",num);
        printf("%d04\n",num);
        printf("leading zeroes: %04d\n",num);       //leading zeroes
        printf("leading spaces: %5d\n",num);           //leading spaces
        printf("trailling spaces: %-4d\n",num);       //trailling spaces 

    #endif

    #if 1
      double num = 97;
      printf("  %5lf    %14lf   %14lf   %14lf",num,num,num,num);              //std::cout << "  " << std::setw(5) << it
    //   printf("  %14lf",num);        //<< "  " << std::setw(14) << *lambda
    //   printf("  %14lf",num);        //<< "  " << std::setw(14) << val_dif
    //   printf("  %14lf\n",num);       //<< "  " << std::setw(14) << sin_y1y2 << "\n";
    #endif
}