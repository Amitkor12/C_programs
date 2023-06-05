// #include <stdio.h>


// void calback_fn(void)
// {
//     printf("A callback Function\n");
// }

// void funtion_test(void (*op)(void))
// {
//     for(int i = 0;i<3;i++)
//     {
//         if(i == 1)
//         {
//             (*op) ();
//         }
//         printf("i = %d\n",i);
//     }
// }

// void main()
// {
//     void (*op_ptr)(void) = &calback_fn;
//     funtion_test(op_ptr);
// }




/***********************
 *  CallBack to calculate
*****************/

#include <stdio.h>
#include <math.h>

float square_of_num(int x)
{
    return x*x;
}

float calculate(int a,float (*op) (int))
{
    (* op)(a);
}

void main()
{
    printf("%f\n",calculate(4,square_of_num));
}