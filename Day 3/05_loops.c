#include <stdio.h>

int main() {
//    1. for-loop:
    printf("For loop: ");
    for(int i=1; i<=5; i++){
        printf("%d ", i);
    }
    printf("\n");

    // 2. while-loop:
    printf("While loop: ");
    int j=1;
    while(j<=5){
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // 3. do-while loop:
    printf("Do-While loop: ");
    int k=1;
    do {
        printf("%d ", k);
        k++;
    } while(k<=5);

   return 0;
}