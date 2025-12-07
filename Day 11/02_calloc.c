#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an array of 10 integers
    int *ptr = (int *)calloc(10, sizeof(int));
    
    // Print the array
    for (int i = 0; i < 10; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    printf("\n");

    // Print the array
    for (int i = 0; i < 10; i++)
        printf("%d ", ptr[i]);
    return 0;
}