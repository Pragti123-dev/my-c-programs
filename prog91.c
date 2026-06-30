#include <stdio.h>
#include <string.h>

int checkAnagram(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Count frequencies of each character
    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    // Compare character counts
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not an anagram
        }
    }

    return 1; // It is an anagram
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1); // Note: For safer code, use fgets(str1, sizeof(str1), stdin)

    printf("Enter second string: ");
    gets(str2);

    if (checkAnagram(str1, str2)) {
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}