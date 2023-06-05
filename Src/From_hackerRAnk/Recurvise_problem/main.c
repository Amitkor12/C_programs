#include "Calculate_Nth_term.h"

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = calculate_sum(n, a, b, c);
 
    printf("%d\n", ans); 
    return 0;
}