#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of all 256 ASCII characters
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present from fgets
    str[strcspn(str, "\n")] = '\0';

    // Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Display the frequency of characters
    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}