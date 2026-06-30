#include <stdio.h>

int main() {
    // Two pre-sorted arrays
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    
    // Calculating sizes of both arrays
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // Resultant array size will be the sum of both sizes
    int arr3[n1 + n2];
    
    int i = 0; // Index for arr1
    int j = 0; // Index for arr2
    int k = 0; // Index for arr3 (merged array)

    // Traverse both arrays and copy the smaller element
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1, if any
    while (i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2, if any
    while (j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    // Printing the merged sorted array
    printf("Merged sorted array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%t", arr3[i]);
    }
    printf("\n");

    return 0;
}