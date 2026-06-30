#include <stdio.h>

int main() {
    int n, isSymmetric = 1;

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

    // Logic to check if the matrix is symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check if corresponding elements across the main diagonal match
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Set flag to 0 if an unequal pair is found
                break;          // Break out of the inner loop
            }
        }
        if (isSymmetric == 0) {
            break; // Break out of the outer loop
        }
    }

    // Display the result based on the flag value
    if (isSymmetric == 1) {
        printf("\nThe matrix is a Symmetric Matrix.\n");
    } else {
        printf("\nThe matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}