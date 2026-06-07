#include <stdio.h>

int main() {
    double x;
    int n;
    double result = 1.0;

    // Taking input from the user
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    
    int original_n = n;

    
    if (n < 0) {
        n = -n;
    }

    // Multiplying x, n times
    for (int i = 0; i < n; i++) {
        result *= x;
    }

    // If the original exponent was negative, invert the result
    if (original_n < 0) {
        result = 1.0 / result;
    }

    // Printing the result
    printf("%.2lf raised to the power %d is: %.6lf\n", x, original_n, result);

    return 0;
}