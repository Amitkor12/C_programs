// C program for Converting temperature from Celsius to fehrenhiet 

#include <stdio.h>

int main()
{
    int lower , upper, step;
    float fahr,celsius;

    lower = 0;
    upper = 300;
    step = 20;

  printf("Celcius\t\tFahr\n");          // Printing a heading above the table
  printf("-------------------\n");

    celsius = lower;
    while(celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32.0f;
        printf("%3.0f\t\t%6.1f\n", celsius,fahr);
        celsius = celsius + step;
    }
    return 0;   
}