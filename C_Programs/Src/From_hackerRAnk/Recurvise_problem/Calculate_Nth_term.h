#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int calculate_sum(int n, int a, int b, int c) {
  //Write your code here.
 if (n == 1) {
        return a;
    }
    else if (n == 2) {
        return b;
    }
    else if (n == 3) {
        return c;
    }
    else {
        return calculate_sum(n-1, a, b, c) + calculate_sum(n-2, a, b, c) + calculate_sum(n-3, a, b, c);
    }
}