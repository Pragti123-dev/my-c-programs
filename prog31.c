#include <stdio.h>

int main() {
    int rows;
    char ch = 'A'; // Starting character

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        
        
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to the next character (A -> B -> C...)
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}