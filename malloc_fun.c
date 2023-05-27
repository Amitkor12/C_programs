#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  // Assuming n has a value of 5
    double* a = (double*) malloc((n +1) * sizeof(double));

    // Check if memory allocation was successful
    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with an error code
    }

    // Assign values to the array elements
    for (int i = 0; i <= n; i++) {
        a[i] = i * 1.5;
    }

    // Access and print the array elements
    for (int i = 0; i <= n; i++) {
        printf("%.3f\n", a[i]);
    }

    // Free the allocated memory
    free(a);

    return 0;
}
