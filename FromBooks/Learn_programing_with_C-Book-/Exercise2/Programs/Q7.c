/*Give examples of integer constants, floating-point constants, and string constants.*/

#include <stdio.h>

int main() {
    int num1 = 42;
    float num2 = 3.14;
    char str1[] = "We love C";
    
    printf("%d\n", num1);               // integer constant 
    printf("%f\n", num1 + num2);        // floating constant 
    printf("%ld\n", sizeof(str1));      // charater constant 
    
    return 0;
}