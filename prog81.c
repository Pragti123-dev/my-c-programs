#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input the string from the user
    printf("Enter a string: ");
    // "%[^\n]" allows the compiler to read strings with spaces
    scanf("%[^\n]", str); 

    // Loop until we reach the null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }

    // Output the total length
    printf("The length of the string is: %d\n", length);

    return 0;
}