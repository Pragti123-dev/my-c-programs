#include <stdio.h>

int findFibonacci(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0; // Represents (n-2)th term
    int b = 1; // Represents (n-1)th term
    int c;     // Represents the current nth term

    for (int i = 2; i <= n; i++) {
        c = a + b; // Add the previous two terms
        a = b;     // Move b to a
        b = c;     // Move c to b
    }

    return c;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("The %dth Fibonacci term is: %d\n", n, findFibonacci(n));
    }

    return 0;
}