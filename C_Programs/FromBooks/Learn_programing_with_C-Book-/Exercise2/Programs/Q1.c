/*
  In the ASCII character set, what is the range of codes for 
  (a) the digits 
  (b) the uppercase letters and 
  (c) the lowercase letters?

*/

#include <stdio.h>
#include <string.h>

void main()
{
    /* Ascii value of digits */
#if 1
    // declare local variable  
    int digits;  
    // use for loop to print the digits from 0 to 9  
    for ( digits = 48; digits <= 57; digits++)  
    {  
        printf (" \n The ASCII value of %c is %d ", digits, digits);
    } 
#endif

    /* Ascii value of Uppercase leters */
#if 0
    // declare local variable  
    int caps;  
    // use for loop to print the capital letter from A to Z  
    for ( caps = 65; caps < 91; caps++)  
    {  
        printf (" \n The ASCII value of %c is %d ", caps, caps);  
    } 
#endif

#if 0
    // declare local variable
    int lows;
    // use for loop to print the lowercase letter from a to z
    for(lows = 97;lows <= 122;lows++)
    {
        printf("\nThe ASCII value of %c is %d",lows,lows);
    } 
#endif
  

  /* EXTRA WORK */
      /* Ascii value of special charaters */
#if 0
    // declare local variable  
    int schar;  
    // use for loop to print the special charaters 58 to 64 
    for ( schar = 32; schar <= 47; schar++)  
    {  
        printf (" \n The ASCII value of %c is %d ", schar, schar);  
    }
    for ( schar = 58; schar <= 64; schar++)  
    {  
        printf (" \n The ASCII value of %c is %d ", schar, schar);  
    } 
#endif
}