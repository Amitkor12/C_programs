/**
 * @file Counting_blanks.c
 * @author your name Amit Korgaonkar
 * @brief : 
 * Write a program to copy its input to its output
 * replacing each string of 
 * --> tabs by '\t'
 * --> backspace by '\b'
 * --> backslash by '\\' 
 * 
 * output   -> Amit kor
 * 
 * @version 0.1
 * @date 2023-07-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main()
{
    char c;
    int ch = '\0';

    while ((c = getchar())!=EOF)          //this is the input section 
    {
        if(c == '\t' )
        {
            putchar('\\');
            putchar('t');                 //replaces tab by '\t'
        }else if (c == '\b')
        {
            putchar('\\');
            putchar('b');                 //replaces backspace by '\b'
        }else if (c == '\\')
        {
            putchar('\\');                //replace \\ by '\\'
        }
        else{
            putchar(c);
        }
         
    }
    return 0;
}