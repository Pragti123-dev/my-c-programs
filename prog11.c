#include <stdio.h>


int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        
        b = a % b; 
        
        a = temp;  
    }
    return a;
}

int main() {
    int num1, num2, gcd;

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    int absoluteNum1 = (num1 < 0) ? -num1 : num1;
    int absoluteNum2 = (num2 < 0) ? -num2 : num2;

    
    gcd = findGCD(absoluteNum1, absoluteNum2);

    
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}