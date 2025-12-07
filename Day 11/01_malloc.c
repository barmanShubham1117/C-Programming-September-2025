#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an array of 5 integers
    int *ptr = (int *)malloc(sizeof(int) * 5);
    
    // Populate the array
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
        
    // Print the array
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}