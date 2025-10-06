#include <stdio.h>

int main() {
    
    int arr[] = {2, 4, 8, 12, 16, 18};

    // Indexing in array
    printf("%d\n", arr[5]);

    // Length of an array
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\nLength on the array %d\n", n);

    // Printing array elements
    for (int i = 0; i < n; i++) {
        printf("\nValue at index %d : \t%d", i, arr[i]);
    }

   return 0;
}