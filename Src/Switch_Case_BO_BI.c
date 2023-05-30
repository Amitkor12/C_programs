#include <stdio.h>

//declaring enums for leds and bo operartions
 typedef enum{
    Led_g1,
    led_g2,
    led_g3,
    led_r1,
    led_r2,
    led_r3
}Led_idx;

typedef enum{
    red,
    green,
    orange,
    no_color
}color;

typedef enum{
    BO_00,
    BO_01,
    BO_10,
    BO_11
}BO_Op;

int BO_test(int BO_Op, int Led_idx, int color)
{
    switch (BO_Op)
    {
        case BO_00:
            switch (Led_idx)
            {
                case led_r1:
                    if(color == red)
                    {
                        printf("led red1");
                    }
                    break;
                case led_r2:
                    if(color == red)
                    {
                        printf("led red2");
                    }
                    break;
                case led_r3:
                    if(color == red)
                    {
                        printf("led red3");
                    }
                    break;
                default:
                    printf("Invalid led option");
                    break;
            }
            break;
        case BO_01:
            switch (Led_idx)
            {
                case Led_g1:
                    if(color == green)
                    {
                        printf("led1 green\n");
                    }
                    else
                    {
                        printf("invalid color\n");
                    }
                    break;
                case led_g2:
                    if(color == green)
                    {
                        printf("led2 green\n");
                    }
                    break;
                case led_g3:
                    if(color == green)
                    {
                        printf("led3 green");
                    }
                    break;
                default:
                    printf("Invalid led option");
                    break;
            }
            break; 
        default:
            printf("\nInvalid BO operation ");
            break;
    }

    return 0;
}