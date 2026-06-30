#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i, j, k;

    printf("Enter any string: ");
    // Reading string with spaces
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character at the end of fgets
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    // Loop through each character of the string
    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; ) {
            // If a duplicate character is found
            if (str[j] == str[i]) {
                // Shift all characters to the left to overwrite the duplicate
                for (k = j; k < length; k++) {
                    str[k] = str[k + 1];
                }
                // Reduce the length of the string since a character is removed
                length--;
            } else {
                // Move to the next character only if no duplicate was found/deleted
                j++;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}