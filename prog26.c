#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    // Base case: if n is 0 or 1, return n
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    // Recursive case: sum of the previous two Fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int term;

    printf("Enter the position (n) to find Fibonacci number: ");
    scanf("%d", &term);

    if (term < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("The Fibonacci number at position %d is: %d\n", term, fibonacci(term));
    }

    return 0;
}