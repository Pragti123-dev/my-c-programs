#include <stdio.h>
int main() {
    int rows, i, j, space;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Counting Up
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Counting Down
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}