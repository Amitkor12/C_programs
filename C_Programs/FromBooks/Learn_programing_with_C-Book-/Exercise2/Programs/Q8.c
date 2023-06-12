/* Name five operators that can be used for writing integer expressions and give their
precedence in relation to each other. */

#include <stdio.h>

void main()
{
    int a = 23, b = 67, sum, diff, mult, div, rem;
    sum = a + b;
    diff = a - b;
    mult = a * b;
    div = a / b;
    rem = a % b;

    printf("a + b =\t%d\n", sum);  // '+' Addition         operator
    printf("a - b =\t%d\n", diff); // '-' Subtraction      operator
    printf("a * b =\t%d\n", mult); // '*' multiplication   operator
    printf("a / b =\t%d\n", div);  // '/' division         operator
    printf("a % b =\t%d\n", rem);  // '%' modulus          operator

    /* Precedence of operators */
    printf("\n%d", (a + b));             // First precedence --> ()
    printf("\n%d", (a + b) * b);         // second precedence --> *
    printf("\n%d", (a + b) * b / 2);     // third precedence --> /
    printf("\n%d", (a + b) * b / 2 + b); //fourth precedence --> +
    printf("\n%d", (a + b) * b / 2 + b - a);//last precedence --> -
    
    printf("\nIn general precedence of operators: () > %,/,* > -,+");
}