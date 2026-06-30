#include <stdio.h>
#include <string.h>

char findFirstRepeating(char str[]) {
    // Array to store the count of each character, initialized to 0
    int count[256] = {0};

    // First pass: Count the occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Second pass: Find the first character that has a count > 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] > 1) {
            return str[i]; // Return the first repeating character
        }
    }

    return '\0'; // Return null character if no character repeats
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Reads string including spaces
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it's read by fgets
    str[strcspn(str, "\n")] = '\0';

    char result = findFirstRepeating(str);

    if (result != '\0') {
        printf("The first repeating character is: '%c'\n", result);
    } else {
        printf("There are no repeating characters in the string.\n");
    }

    return 0;
}