#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Initialize largest and second largest with minimum possible integer value
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    // Check if array has at least two elements
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    
    if (second_largest == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}