#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    // Frequency arrays to keep track of characters present in both strings
    int presentInStr1[256] = {0};
    int presentInStr2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    // Mark characters present in the first string
    for (i = 0; str1[i] != '\0'; i++) {
        // Casting to unsigned char to handle any extended ASCII safely
        presentInStr1[(unsigned char)str1[i]] = 1;
    }

    // Mark characters present in the second string
    for (i = 0; str2[i] != '\0'; i++) {
        presentInStr2[(unsigned char)str2[i]] = 1;
    }

    printf("Common characters are: ");
    int found = 0;

    // Check ASCII range (0 to 255) to find common marked characters
    for (i = 0; i < 256; i++) {
        // If character is present in both strings and it's not a space
        if (presentInStr1[i] && presentInStr2[i] && i != ' ') {
            printf("%c ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");

    return 0;
}