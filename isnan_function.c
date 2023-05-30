#include <stdio.h>
// #include <math.h>

int main()
{
  double a = 10.0;
  double b = sqrt(-1.0);

  printf("a is NaN? %s\n",(isnan(a) ? "true" : "fasle"));
  printf("b is NaN? %s\n",(isnan(b) ? "true" : "fasle"));
  
//   std::cout << "a is NaN? " << (isnan(a) ? "true" : "false") << std::endl;
//   std::cout << "b is NaN? " << (isnan(b) ? "true" : "false") << std::endl;
  
  return 0;
}
