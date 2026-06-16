#include <stdio.h>


void moveZeroesToEnd(int arr[], int n) {
    int count = 0; 

    
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    
    
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 0, 2, 3, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    moveZeroesToEnd(arr, n);

    printf("Array after moving zeroes to end: ");
    printArray(arr, n);

    return 0;
}