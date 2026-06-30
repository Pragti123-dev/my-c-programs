#include <stdio.h>
#include <string.h>

void compressString(char *str) {
    int len = strlen(str);
    
    // If the string is empty, do nothing
    if (len == 0) {
        return;
    }

    printf("Compressed string: ");

    // Loop through the string
    for (int i = 0; i < len; i++) {
        int count = 1;

        // Count occurrences of the current character
        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print the character and its frequency count
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string to compress: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    compressString(str);

    return 0;
}