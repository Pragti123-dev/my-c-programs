#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;
    long fact;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    originalNum = num; 

    
    while (num > 0) {
        rem = num % 10; // Extract the last digit
        
        
        fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact; 
        num = num / 10;   
    }


    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}