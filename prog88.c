#include <stdio.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    
    // Loop through the entire string
    while (str[i] != '\0') {
        // If the current character is not a space, keep it
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    // Add the null terminator at the end of the new string
    str[j] = '\0';
}

int main() {
    char str[] = "Hello World! Welcome to C programming.";
    
    printf("Original String: %s\n", str);
    
    removeSpaces(str);
    
    printf("String after removing spaces: %s\n", str);
    
    return 0;
}