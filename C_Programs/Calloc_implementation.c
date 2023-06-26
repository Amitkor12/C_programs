#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // Allocate memory for an array of `n` double pointers
    double **a = calloc(n, sizeof(double*));

    if (a != NULL) {
        // Access and manipulate the allocated memory
        for (int i = 0; i < n; i++) {
            // Allocate memory for each row
            a[i] = calloc(n, sizeof(double));

            // Access and manipulate the elements
            for (int j = 0; j < n; j++) {
                a[i][j] = (i + 1) * (j + 1);
            }
        }

        // Print the array elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%.2f ", a[i][j]);
            }
            printf("\n");
        }

        // Free the allocated memory
        for (int i = 0; i < n; i++) {
            free(a[i]);
        }
        free(a);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
