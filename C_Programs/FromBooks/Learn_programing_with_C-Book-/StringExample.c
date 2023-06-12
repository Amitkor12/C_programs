#include<stdio.h>   //needed for printf
#include<string.h> // needed for strcpy

int main()
{
    #if 0
    //simple String 
    char name[30] = "Hemant Korgaonkar";    //declaring name to string while initializing
    printf("%s\n",Fname);
    #endif

    //string functions
    #if 0
    char name[30];                                    //declaring a string of size 30byts
    strcpy(name,"Amit Korgaonkar");                   //string copy function 
    printf("Hello,%s\n",name);                         //printing the string --> name
    #endif

    #if 0
    // concatenation of strings
    char name[30] = "Amit";                     //First string
    char last[15] = "Korgaonkar";                  //second string
    strcat(name,last);                          //joining two string and storing the result in first string
    printf("%s\n",name);                        //printing the combine string 
    #endif

    #if 1
    //combining string with additional string in between 
    char name[30] = "Amit";                     //First string
    char last[15] = "Korgaonkar";               //second string
    strcat(name," The ");
    strcat(name , last);
    printf("%s\n",name);
    #endif
    return 0;
}