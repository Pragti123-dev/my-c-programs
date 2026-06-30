#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1; // 1 means true, 0 means false

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Compare characters from the beginning and the end
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Characters don't match
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome string.\n", str);
    } else {
        printf("\"%s\" is not a palindrome string.\n", str);
    }

    return 0;
}