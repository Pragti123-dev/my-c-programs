#include <stdio.h>

// Function to calculate the nth Fibonacci number iteratively
int fibonacci_iterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int previous = 0;
    int current = 1;
    int next;

    for (int i = 2; i <= n; i++) {
        next = previous + current;
        previous = current;
        current = next;
    }

    return current;
}

int main() {
    int n = 9; // Change this value to find a different Fibonacci number
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci_iterative(n));
    return 0;
}