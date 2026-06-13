#include <stdio.h>

int main() {
    int rows, i, j, space;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop handles the number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop 1: Prints the spaces before the stars
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        
        
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}