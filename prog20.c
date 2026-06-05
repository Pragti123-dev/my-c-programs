#include <stdio.h>

int main() {
    long long n;
    
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1 || n <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    long long original_n = n;
    long long largest_prime = -1;

    
    while (n % 2 == 0) {
        largest_prime = 2;
        n /= 2;
    }

    
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest_prime = i;
            n /= i;
        }
    }

    
    if (n > 2) {
        largest_prime = n;
    }

    printf("The largest prime factor of %lld is: %lld\n", original_n, largest_prime);

    return 0;
}