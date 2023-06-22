//comments

/* Temperature convertion Table

    celcius value       Fehrenheit value 
    0                   -17.8
    20                  -6.7
    40                  4.4
    60                  15.6
    .                   .
    .                   .
    .                   .
    260                 126.7
    280                 137.8
    300                 148.9
    
*/

#include <stdio.h>

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahr\t\tCelsius\n");          // Printing a heading above the table
  printf("-------------------\n");

  fahr = lower;
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}