#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    // Displaying the original array
    printf("Original array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Logic for sorting in descending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Change '<' to '>' if you want ascending order
            if (arr[j] < arr[j + 1]) {
                // Swapping elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted array
    printf("Array sorted in descending order: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}