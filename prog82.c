#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    char temp;

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character added by fgets, if present
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    // Swapping characters from both ends moving towards the center
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Printing the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}