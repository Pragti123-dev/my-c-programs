#include <stdio.h>

int main() {
    int n, sum = 0;

    // Get the size of the square matrix
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Row and column indices are equal for diagonal elements
    }

    // Display the result
    printf("\nThe sum of the diagonal elements is: %d\n", sum);

    return 0;
}