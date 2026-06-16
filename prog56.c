#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    
    
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("Duplicate elements in the given array are: \n");
    
    
    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            // If a match is found, it's a duplicate
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[j]);
                break;  
            }
        }
    }
    
    return 0;
}