#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char str[100];
    int count[ASCII_SIZE] = {0}; // Initialize count of all characters to 0
    int max = -1;
    char result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present from fgets
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Count the frequency of each character
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the character with the maximum frequency
    for (int i = 0; i < len; i++) {
        if (max < count[(unsigned char)str[i]]) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    printf("The maximum occurring character is '%c' and it appears %d times.\n", result, max);

    return 0;
}