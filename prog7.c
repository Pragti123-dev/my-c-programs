#include <stdio.h>
#include <stdlib.h> // Required for abs() function

int main() {
    int number, remainder;
    int product = 1;

    
    printf("Enter any number: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    if (number == 0) {
        product = 0;
    }

    
    while (number > 0) {
        remainder = number % 10;   
        product = product * remainder; 
        number = number / 10;       
    }

    
    printf("The product of the digits is: %d\n", product);

    return 0;
}