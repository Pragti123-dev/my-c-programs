#include <stdio.h>

void decimalToBinary(int n) {
    
    int binaryNum[32];

    
    int i = 0;
    
    
    if (n == 0) {
        printf("0");
        return;
    }

    
    while (n > 0) {
        
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int n;
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    printf("Binary equivalent: ");
    decimalToBinary(n);
    printf("\n");

    return 0;
}