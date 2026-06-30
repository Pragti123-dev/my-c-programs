#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, wordCount = 0;
    int inWord = 0; // Flag to track if we are inside a word

    printf("Enter a sentence: ");
    // fgets is used to read a line of text including spaces
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        // Check for spaces, newlines, or tabs
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0; // We hit a space, so we are no longer in a word
        } 
        // If the character is not a space and we weren't already in a word
        else if (inWord == 0) {
            inWord = 1; // We found the start of a new word
            wordCount++;
        }
        i++;
    }

    printf("Total number of words: %d\n", wordCount);

    return 0;
}