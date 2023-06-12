//program1
//addition of two no.
#include <stdio.h>

int main()
{
    int a=5,b=6;
    int c;
    c =a+b;
    printf("%d",c);
    
    return 0 ;
}

//program2
// word lenght of int
#include <stdio.h>

int main()
{
   int a;
   printf("The Size of a: %ld",sizeof(a));
   
    return 0;
}

//program 3
//to see the difference btw two define
#include <stdio.h>
#define Test_num1 010
#define Test_num2 10

int main()
{
    printf("%d",Test_num1);
    printf("\n%d",Test_num2);
}

//program 4
//finding ascii value od char

#include<stdio.h>

void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    printf("ascii value of %c:%d",ch,ch);
    
}

//program 6
// define a macro with know datatype
#include<stdio.h>
#define PI 3.14  //macro 
#define R 5
#define area ( PI*R*R) 
#define name (char[]){"circle"}

void main()
{
    printf("area of %s:%f",name,area);
    
}

//program 7
//program for auto,exter,and static
#include <stdio.h>
#include<stdlib.h>

int x;

void autoclass()
{
    auto int a = 3;
    printf("value of a:%d\n",a);
}

void staticclass()
{
    int i;
    for(i=0;i<3;i++)
    {
        static int a=3;
        //a=9;
        a++;
        int b=4;
        //b=7;
        b++;
        
        printf("the value of a:%d\n",a);
        printf("the value of b:%d\n",b);
    }
    
}

void extrenclass()
{
    extern int x;
    printf("value of extern:%d\n",x);
    x =90;
    printf("the value of extern:%d\n",x);
}
void main()
{
    autoclass();
    staticclass();
    extrenclass();
}


//program 8
//bit flag
#include <stdio.h>
#include<stdlib.h>

#define set_bit(value,n) (value | n)  //setting the bit of no
#define clear_bit(value,n) (value & n) // clearing the bit of no.

int main() {
    // Write C code here
    //int n=2;
    printf("%x\n",set_bit(4,2));
    printf("%x\n",clear_bit(4,2));

    return 0;
}

//swapping without two no
#include <stdio.h>

void swap(int x,int y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    printf("after swaping values\n");
    printf("value of a:%d\n",x);
    printf("value of b:%d",y);
}
void main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    swap(a,b);
}


// program containing static , global and local variable
#include <stdio.h>

int c =96;//global variable

int main()
{
    static int b = 90;//static variable
    int a; // local variable
    printf("enter the value for a:");
    scanf("%d",&a);
    printf("The value of a is: %d",a);
    printf("\nThe value of static b is: %d",b);
    printf("\nThe value of global c is: %d",c);
    return 0;
}
