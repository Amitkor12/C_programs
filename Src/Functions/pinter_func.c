//passing the adreess of varial as function
//arguments.

#include<stdio.h>
 
 int sum(int *n1,int *n2) //function with pointer as arguments
 {
    int sum=0;
    sum = *n1 + *n2; //the defrencing part of the code 
    printf("%d",sum);
 }

 void main()
 {
    int a =9,b=70;//assigning some data to variable a and b 
    sum(&a,&b);//passing the adresses of a and b variables
 }