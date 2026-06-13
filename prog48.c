#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;

    // Find all divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // If sum of divisors is equal to the number, it's perfect
    if (sum == num && num > 0) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function
    if (isPerfect(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is NOT a Perfect Number.\n", number);
    }

    return 0;
}