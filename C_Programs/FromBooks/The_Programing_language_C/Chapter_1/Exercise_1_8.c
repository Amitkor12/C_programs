/**
 * @file Counting_blanks.c
 * @author your name Amit Korgaonkar
 * @brief : Write a program to count blanks, tabs, and newlines.
 * @version 0.1
 * @date 2023-07-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>

// #define Blanks  
// #define Newline 
#define Tabs    

int main()
{
    double ch,nb,nl,nt;
    nb=nl=nt=0;
    /**
     * @brief this section of code deermines 
     *  the total number of newlines present
     */
    #ifdef Newline
    while ((ch=getchar())!=EOF)
    {
        if(ch == '\n')
        {
            ++nl;
            
        }
    }
    printf("%.0f\n",nl);
    #endif

    /**
     * @brief this section of code deermines 
     *  the total number of tabs present
     * 
     */
    #ifdef Tabs
    while ((ch=getchar())!=EOF)
    {
        if(ch == '\t')
        {
            ++nt;
        }
    }
    printf("%.0f\n",nt);
    #endif
    
        /**
     * @brief this section of code deermines 
     *  the total number of Blanks present
     * 
     */
    #ifdef Blanks
    while ((ch=getchar())!=EOF)
    {
        if(ch == '\t')
        {
            ++nb;
        }
    }
    printf("%.0f\n",nb);
    #endif

    return 0;
}