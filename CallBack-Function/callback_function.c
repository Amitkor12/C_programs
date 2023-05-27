#include<stdio.h>
float square(int num)
{
    return num*num;
}
float calculate(int num,float (*oper)(int))
{
    return (*oper)(num);
}

int main()
{
    printf("%f",calculate(5,&square));
}
