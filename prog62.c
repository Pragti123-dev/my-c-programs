#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 5, 2, 3, 2, 8, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max_element = arr[0];
    int max_count = 0;
    
    // Loop through each element to count its frequency
    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If current element's count is greater than max_count, update it
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    
    // Print the result
    printf("Element with maximum frequency: %d\n", max_element);
    printf("Frequency: %d times\n", max_count);
    
    return 0;
}