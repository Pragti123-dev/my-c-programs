#include <stdio.h>

// Function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void rotateRight(int arr[], int n, int k) {
    // If k is greater than array size, take modulo
    k = k % n;
    
    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse the remaining n-k elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of times to rotate right

    printf("Original array: \n");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Array after %d right rotations: \n", k);
    printArray(arr, n);

    return 0;
}