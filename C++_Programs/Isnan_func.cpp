#include <iostream>
// #include <math.h>
#include <cmath>
// #include <math.h>

// bool isnan(double x)
// {
//   return (x != x);
// }

int main()
{
  double a = 10.0;
  double b = sqrt(-1.0);
  
    std::cout << std::isnan(b) << std::endl;

//   std::cout << "a is NaN? " << (isnan(a) ? "true" : "false") << std::endl;
//   std::cout << "b is NaN? " << (isnan(b) ? "true" : "false") << std::endl;
  
  return 0;
}
