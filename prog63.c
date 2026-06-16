#include <stdio.h>

// Function to sort the array (Bubble Sort used for simplicity)
void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the pair with the given sum
void findPair(int arr[], int size, int targetSum) {
    // Step 1: Sort the array first
    sortArray(arr, size);

    // Step 2: Initialize two pointers
    int left = 0;
    int right = size - 1;
    int found = 0;

    // Step 3: Loop until the pointers meet
    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == targetSum) {
            printf("Pair found: %d and %d\n", arr[left], arr[right]);
            found = 1;
            left++;  // Move pointers to look for other possible pairs
            right--;
        } 
        else if (currentSum < targetSum) {
            left++;  // Increase sum by moving the left pointer right
        } 
        else {
            right--; // Decrease sum by moving the right pointer left
        }
    }

    if (!found) {
        printf("No pair found with the given sum.\n");
    }
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int targetSum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Target Sum: %d\n", targetSum);
    findPair(arr, size, targetSum);

    return 0;
}