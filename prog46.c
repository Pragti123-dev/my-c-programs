#include <stdio.h>

// Function declaration
int isArmstrong(int num);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calling the function and checking the return value
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

// Function definition
int isArmstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        // handling the sum of the cubes of individual digits
        result += remainder * remainder * remainder;
        
        // removing the last digit from the original number
        originalNum /= 10;
    }

    // If the sum is equal to the original number, it's an Armstrong number
    if (result == num) {
        return 1; // Returns true
    } else {
        return 0; // Returns false
    }
}