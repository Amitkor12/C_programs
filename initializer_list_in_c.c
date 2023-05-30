#include <stdio.h>

void printNumbers(int numbers[], int size) {
    printf("Numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {10, 20, 30};
    
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    printNumbers(nums1, size1);
    printNumbers(nums2, size2);

    return 0;
}
