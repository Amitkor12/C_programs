#include<stdio.h>

typedef struct complex
{
    double num;
}complex;

double real(complex* cmp)
{
    return cmp->num;
}

typedef struct roots
{
    complex* cmp1;
    double num1;
}roots;

complex* pole(roots* rt,int oderno)
{
    return &rt->cmp1[oderno];
}

void main()
{
    int a = 100;
    complex cmp;
    cmp.num = 5;
    roots rt;
    rt.num1 = 6;
    // real(&cmp);
    printf("%lf\n",real(&cmp));
    
    // printf("adress of a:\t%p",&a);
    // char* ptr = &a;
    // printf("\nValue of pointer:\t%d",*ptr);
    // *ptr = 120;
    // printf("\nValue of a:\t%d\n",a);
    // printf("%d\n",(&ptr));
}

// #include<stdio.h>

// void main()
// {
//     int *ptr = 65;
//     printf("value of ptr:%d",&(*ptr));
// }