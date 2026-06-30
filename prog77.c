#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\nError! Column of first matrix must equal row of second matrix.\n");
        return 1; 
    }

    int first[r1][c1], second[r2][c2], result[r1][c2];

    // Input elements of the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Initializing elements of the result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplying first and second matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Displaying the result matrix
    printf("\nResultant Matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}