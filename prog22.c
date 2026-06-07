#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, remainder, base = 1;

    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long temp = binary; 

    
    while (temp > 0) {
        remainder = temp % 10;      // Extract the last digit
        decimal = decimal + remainder * base; // Multiply with power of 2 and add
        base = base * 2;            // Increase the power of 2 (1, 2, 4, 8...)
        temp = temp / 10;           // Remove the last digit
    }

    printf("Binary: %lld\n", binary);
    printf("Decimal: %d\n", decimal);

    return 0;
}