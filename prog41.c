#include <stdio.h>


int findSum(int num1, int num2);

int main() {
    int a, b, sum;

    
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    
    sum = findSum(a, b);

    
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}


int findSum(int num1, int num2) {
    return num1 + num2;
}