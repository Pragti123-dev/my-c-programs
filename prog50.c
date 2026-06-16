#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    
    
    average = sum / n;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Sum of the array elements = %.2f\n", sum);
    printf("Average of the array elements = %.2f\n", average);

    return 0;
}