#include <stdio.h>

int main() {
    int array[100], search_element, i, total_elements;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &total_elements);

    
    printf("Enter %d integers:\n", total_elements);
    for (i = 0; i < total_elements; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &search_element);

    
    for (i = 0; i < total_elements; i++) {
        if (array[i] == search_element) {
            printf("%d is present at index %d (position %d).\n", search_element, i, i + 1);
            break; // Element found, exit the loop
        }
    }

    
    if (i == total_elements) {
        printf("%d is not present in the array.\n", search_element);
    }

    return 0;
}