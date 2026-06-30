#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if str2 is a rotation of str1
int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they cannot be rotations
    if (len1 != len2) {
        return 0;
    }

    // Allocate memory for the concatenated string (len1 * 2 + 1 for null terminator)
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    // Copy str1 into temp and concatenate str1 again
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    int result = 0;
    if (strstr(temp, str2) != NULL) {
        result = 1; // It is a rotation
    }

    // Free the dynamically allocated memory
    free(temp);

    return result;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    if (isRotation(str1, str2)) {
        printf("Yes, '%s' is a rotation of '%s'.\n", str2, str1);
    } else {
        printf("No, '%s' is NOT a rotation of '%s'.\n", str2, str1);
    }

    return 0;
}