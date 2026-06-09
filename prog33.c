#include <stdio.h>

int main() {
    int rows, i, j;

    // Asking user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (i = rows; i >= 1; i--) {
        
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}