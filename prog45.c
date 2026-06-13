#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Compare characters from both ends moving towards the center
    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    return true; // It is a palindrome
}

int main() {
    char word[100];

    printf("Enter a string: ");
    scanf("%s", word);

    // Call the function and print the result
    if (isPalindrome(word)) {
        printf("\"%s\" is a palindrome.\n", word);
    } else {
        printf("\"%s\" is not a palindrome.\n", word);
    }

    return 0;
}