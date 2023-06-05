/*What kind of variable would you use to store a telephone number? Explain.*/

/*
Variable Type: char array (string)

Reason: Telephone numbers typically consist of digits (0-9) and sometimes include special characters such as dashes or parentheses. By using a character array, we can store each digit and special character as a separate element of the array. This allows us to represent and manipulate the telephone number as a sequence of characters.

*/

#include<stdio.h>

void main()
{
    char TeleNum[20];
    printf("Enter A Telephone Number\n");
    scanf("%s",TeleNum);
    printf("Telephone number is: %s\n",TeleNum);
}