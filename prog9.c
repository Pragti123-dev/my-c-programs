#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    
    if (n <= 1) {
        return false;
    }
    
    
    if (n == 2) {
        return true;
    }
    
    
    if (n % 2 == 0) {
        return false;
    }
    
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    int num;
    
    printf("Enter a number to check: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}