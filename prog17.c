#include <stdio.h>

int main() {
    int num, sum = 0, i;

    
    printf("Ek number enter karein: ");
    scanf("%d", &num);

    
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i; 
        }
    }

    
    if(sum == num && num > 0) {
        printf("%d ek Perfect Number hai.\n", num);
    } else {
        printf("%d Perfect Number nahi hai.\n", num);
    }

    return 0;
}