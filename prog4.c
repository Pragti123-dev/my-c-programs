#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    
    if (num == 0) {
        count = 1;
    } else {
        
        while (num != 0) {
            num = num / 10; 
            count++;        
        }
    }

    
    printf("Total number of digits: %d\n", count);

    return 0;
}