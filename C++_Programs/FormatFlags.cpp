#include <iostream>     
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

int main () {
   std::cout.setf ( std::ios::hex, std::ios::basefield );  // this converts the input value into hexadecimal format
   std::cout.setf ( std::ios::showbase );                  // this will show the base (0xhex_value)
   std::cout << 100 << '\n';                               // output value for 100 - in hex value 
   std::cout.unsetf ( std::ios::showbase );                // this will hide the base only hex value is displayed (hex_value)
   std::cout << 100 << '\n';                               // otput value for 100 - in hex value
   return 0;
}