#include <stdio.h>

int main() {
    // Initialize the first array
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Initialize the second array
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create a third array with a size equal to the sum of both arrays
    int size3 = size1 + size2;
    int mergedArr[size3];

    // Step 1: Copy elements of the first array into the merged array
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    // Step 2: Copy elements of the second array into the merged array
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    // Print the merged array
    printf("Merged Array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}