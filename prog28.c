#include <stdio.h>

// Function to reverse the number recursively
int reverseNumber(int num, int rev) {
    // Base case: when num becomes 0, return the accumulated reversed number
    if (num == 0) {
        return rev;
    }
    
    // Remainder gives the last digit: (num % 10)
    // Shift previous reversed digits to the left: (rev * 10)
    return reverseNumber(num / 10, rev * 10 + (num % 10));
}

int main() {
    int number, reversed;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by keeping the sign separate if needed.
    // For this basic logic, we pass 0 as the initial value of 'rev'.
    if (number < 0) {
        reversed = -reverseNumber(-number, 0);
    } else {
        reversed = reverseNumber(number, 0);
    }

    printf("Reversed Number: %d\n", reversed);

    /* Note: If you enter a number ending with zeros (like 120), 
       the mathematical reverse is 21 (021 becomes 21 as an integer).
    */

    return 0;
}