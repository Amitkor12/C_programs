#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    char s1[50];
   
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n",&i1);
    scanf("%lf\n",&d1);
    scanf("%*[\n] %[^\n]", s1);    
    
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+i1);
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+d1);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
     strcat(s,s1);
     printf("%s",s);



    return 0;
}

// #include<stdio.h>

// int main()
// {
//      char buffer[100];
//      printf("Enter a string:"),scanf("%*[\n] %[^\n]", buffer),printf("buffer:%s\n", buffer);
//      return 0;
// }