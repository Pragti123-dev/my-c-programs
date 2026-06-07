#include <stdio.h>


int sumOfDigits(int num) {
    
    if (num == 0) {
        return 0;
    }
    // Recursive case: extract last digit + call function for remaining digits
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

    result = sumOfDigits(number);

    printf("Sum of digits is: %d\n", result);

    return 0;
}
