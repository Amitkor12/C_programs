/**
 * @file Counting_blanks.c
 * @author your name Amit Korgaonkar
 * @brief : 
 * Write a program to copy its input to its output
 * replacing each string of one or more blanks by a single blank. 
 * 
 * input    -> Amit  kor
 * 
 * c                ch                  putchar(c)
 * 
 * A                '\0'                    A
 * m                A                       m
 * i                m                       i
 * t                i                       t
 *                  t                       
 *                                           (previous blank will not update)
 * k                                        k
 * o                k                       o
 * r                o                       r
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
    int c;
    int ch = '\0';

    while ((c = getchar())!=EOF)       //this is the input section 
    {
        if(c != ' ' || ch != ' ')
            putchar(c);                     //this is output section 
        ch = c;                         // clearing the value of c until only one blank is remaining 
    }
    return 0;
}