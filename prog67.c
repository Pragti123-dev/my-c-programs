#include <stdio.h>

// Function to find the intersection of two arrays
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    printf("Intersection of the two arrays: ");
    int found = 0;

    // Loop through each element of the first array
    for (int i = 0; i < size1; i++) {
        // Check if it exists in the second array
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break; // Break to move to the next element in arr1
            }
        }
    }

    if (!found) {
        printf("No common elements found.");
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    // Calculate the size of the arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Print original arrays
    printf("Array 1: ");
    for(int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\n");

    printf("Array 2: ");
    for(int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\n\n");

    // Call the function
    findIntersection(arr1, size1, arr2, size2);

    return 0;
}