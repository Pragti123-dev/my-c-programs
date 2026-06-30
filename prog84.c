#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to convert it to uppercase
            str[i] = str[i] - 32;
        }
    }

    printf("String in uppercase: %s", str);

    return 0;
}