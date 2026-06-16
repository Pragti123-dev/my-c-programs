#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    // If the array is empty or has only one element, it already has no duplicates
    if (n == 0 || n == 1) {
        return n;
    }

    // 'j' will keep track of the index of unique elements
    int j = 0;

    // Traverse the array
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if the current element already exists in the unique part of the array
        for (int k = 0; k < j; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = 1;
                break;
            }
        }

        // If it's a new unique element, move it to the front
        if (!isDuplicate) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Return the new size of the array containing only unique elements
    return j;
}

int main() {
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to remove duplicates
    n = removeDuplicates(arr, n);

    // Print the updated array
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}