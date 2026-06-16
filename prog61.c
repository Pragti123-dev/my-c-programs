#include <stdio.h>


int findMissingNumber(int arr[], int n) {
    // Expected sum of numbers from 1 to n
    int expectedSum = (n * (n + 1)) / 2;
    
    // Calculate the actual sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }
    
    
    return expectedSum - actualSum;
}

int main() {
    // Example: Array of size 5 missing the number 4 (numbers 1 to 5)
    int arr[] = {1, 2, 3, 5}; 
    int n = 5; // Total numbers that should be there
    
    int missingNumber = findMissingNumber(arr, n);
    
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}