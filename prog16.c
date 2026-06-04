#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Ek number enter karein: ");
    scanf("%d", &num);

    originalNum = num;

    
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    
    while (temp != 0) {
        remainder = temp % 10;
        
        
        result += round(pow(remainder, n)); 
        
        temp /= 10;
    }

    
    if (result == originalNum)
        printf("%d ek Armstrong number hai.\n", originalNum);
    else
        printf("%d Armstrong number nahi hai.\n", originalNum);

    return 0;
}