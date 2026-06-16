#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void leftRotate(int arr[], int n, int d) {
    
    d = d % n; 
    
    
    reverse(arr, 0, d - 1);
    
    
    reverse(arr, d, n - 1);
    
    
    reverse(arr, 0, n - 1);
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; 

    printf("Original Array: \n");
    printArray(arr, n);

    leftRotate(arr, n, d);

    printf("Array after left rotation by %d positions: \n", d);
    printArray(arr, n);

    return 0;
}