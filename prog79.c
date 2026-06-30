#include <stdio.h>

int main() {
    int rows, cols;

    // Input dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements from the user
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Logic to calculate and print row-wise sum
    printf("\nRow-wise sum:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0; // Reset sum for each new row
        
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; // Add elements of the current row
        }
        
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}