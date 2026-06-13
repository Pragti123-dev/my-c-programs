#include <stdio.h>

int main() {
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Spaces ke liye
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        char ch = 'A';
        // Pehle character badhega (A -> B -> C)
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        // Fir character ghatega (B -> A)
        ch = ch - 2;
        for (int j = 1; j < i; j++) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}