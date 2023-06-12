/*What are tokens in c? */

#include <stdio.h>

void  main()
{
    int a = 10;
    float b = 98.45, sum;
    sum = a + b;
    printf("%d + %.3f = %f\n", a, b, sum);

    //printing the tokens used in the above program
    
    printf("Tokens\t\t|\tTypes\n");
    printf("-----------------------\n");
    printf("main\t\t|\tidentifier\n");
    printf("( left bracket\t|\tdelimiter\n");
    printf(") right bracket\t|\tdelimiter\n");
    printf("{ left brace\t|\tdelimiter\n");
    printf("} right brace\t|\tdelimiter\n");
    printf("int \t\t|\treserved\n");
    printf("a \t\t|\tidentifier\n");
}