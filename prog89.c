#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

int main() {
    char str[100];
    int count[NO_OF_CHARS] = {0}; // Initialize frequency of all characters as 0
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present from fgets
    str[strcspn(str, "\n")] = '\0';

    // Step 1: Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Step 2: Scan the string from left to right to find the first character with count 1
    for (i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            return 0; // Exit early once found
        }
    }

    // If all characters repeat or string is empty
    printf("There is no non-repeating character in the string.\n");
    return 0;
}