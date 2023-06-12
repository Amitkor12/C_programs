#include<stdio.h>

void main()
{
    /**
     * an assignment statement consists of a variable 
     * followed by an equals sign (=) followed by the value to be assigned to the variable,
     * followed by a semicolon.
     * 
     * Syntax :
     * <variable> = <value>;
    */

    #if 0
        n = "Hi there"; //cannot assign string to int
        x = "Be nice"; //cannot assign string to double
    #endif

    #if 0
        int score = 25;         //assume initial score
        printf("initial score is : %d\n",score);
        score = 85;             //the old score will be updated to value 85
        printf("updated score is : %d\n",score);
    #endif

    #if 1
        /* predict the uotput of the following */

    int a,b,c;
        a = 13;
        b = a + 12;
        printf("%d %d\n", a, b);
        c = a + b;
        a = a + 11;
        printf("a = %d b = %d c = %d\n", a, b, c);

    #endif
}