#include <stdio.h>

int main() {
    int arr[100], size, i, target, count = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    
    for(i = 0; i < size; i++) {
        if(arr[i] == target) {
            count++;
        }
    }


    printf("The element %d occurs %d times in the array.\n", target, count);

    return 0;
}