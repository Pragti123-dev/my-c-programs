#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char longest[50] = "";
    char current[50] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    // Reading the full line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if it's read by fgets
    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        // Check if the character is alphanumeric (part of a word)
        if (isalnum(str[i])) {
            current[j++] = str[i];
        } else {
            // End of a word encountered
            if (j > 0) {
                current[j] = '\0'; // Null-terminate the current word
                
                // If current word is longer than the longest found so far
                if (strlen(current) > strlen(longest)) {
                    strcpy(longest, current);
                }
                j = 0; // Reset index for the next word
            }
        }
        i++;
    }

    // Check for the last word if the sentence didn't end with a space/punctuation
    if (j > 0) {
        current[j] = '\0';
        if (strlen(current) > strlen(longest)) {
            strcpy(longest, current);
        }
    }

    // Printing the result
    if (strlen(longest) > 0) {
        printf("The longest word is: %s\n", longest);
        printf("Length: %lu\n", strlen(longest));
    } else {
        printf("No valid words found.\n");
    }

    return 0;
}