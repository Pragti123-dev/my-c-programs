#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;

    
    printf("Enter the character you want to print: ");
    scanf(" %c", &ch); 
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\n--- Your Pattern ---\n\n");

    
    for (i = 1; i <= rows; i++) {
        
        
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        
        
        printf("\n");
    }

    return 0;
}