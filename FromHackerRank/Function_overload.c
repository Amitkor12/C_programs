// void print_ii(int a, int b) { printf("int, int\n"); }
// void print_di(double a, int b) { printf("double, int\n"); }
// void print_iii(int a, int b, int c) { printf("int, int, int\n"); }
// void print_default(void) { printf("unknown arguments\n"); }

// #define print(...) OVERLOAD(print, (__VA_ARGS__), \
//     (print_ii, (int, int)), \
//     (print_di, (double, int)), \
//     (print_iii, (int, int, int)) \
// )

// #define OVERLOAD_ARG_TYPES (int, double)
// #define OVERLOAD_FUNCTIONS (print)
// #include "activate-overloads.h"

// int main(void) {
//     print(44, 47);   // prints "int, int"
//     print(4.4, 47);  // prints "double, int"
//     print(1, 2, 3);  // prints "int, int, int"
//     print("");       // prints "unknown arguments"
// }

// #include <stdio.h>

// typedef enum {
//     T_INT,
//     T_FLOAT,
//     T_CHAR,
// } my_type;

// typedef struct {
//     my_type type;
//     union {
//         int a; 
//         float b; 
//         char c;
//     } my_union;
// } my_struct;

// void set_overload (my_struct *whatever) 
// {
//     switch (whatever->type) 
//     {
//         case T_INT:
//             whatever->my_union.a = 1;
//             break;
//         case T_FLOAT:
//             whatever->my_union.b = 2.0;
//             break;
//         case T_CHAR:
//             whatever->my_union.c = '3';
//     }
// }

// void printf_overload (my_struct *whatever) {
//     switch (whatever->type) 
//     {
//         case T_INT:
//             printf("%d\n", whatever->my_union.a);
//             break;
//         case T_FLOAT:
//             printf("%f\n", whatever->my_union.b);
//             break;
//         case T_CHAR:
//             printf("%c\n", whatever->my_union.c);
//             break;
//     }

// }

// int main (int argc, char* argv[])
// {
//     my_struct s;

//     s.type=T_INT;
//     set_overload(&s);
//     printf_overload(&s);

//     s.type=T_FLOAT;
//     set_overload(&s);
//     printf_overload(&s);

//     s.type=T_CHAR;
//     set_overload(&s);
//     printf_overload(&s); 
// }


//using generic
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addi(int a, int b) {
    return a + b;
}

float addf(float a, float b) {
    return a + b;
}

char *adds(char *a, char *b) {
    char *res = malloc(strlen(a) + strlen(b) + 1);
    strcpy(res, a);
    strcat(res, b);
    return res;
}

#define add(a, b) _Generic(a, int: addi, char*: adds, float: addf)(a, b)

int main(void) {
    int a = 1, b = 2;
    printf("%d\n", add(a, b)); // 3

    char *c = "hello ", *d = "world";
    printf("%s\n", add(c, d)); // hello world

    float e =2.3, f = 5.3;
    printf("%.3f\n",add(e,f));
    return 0;
}