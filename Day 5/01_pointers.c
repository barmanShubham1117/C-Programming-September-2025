#include <stdio.h>

int main() {
    // Declared a variable
    int a = 15;

    // Displayed value of "a"
    printf("The value of a is %d\n", a);

    // Declared a pointer "ptr" pointing towards "a"
    int *ptr = &a;

    // Displayed address of "a"
    printf("The address of a is %d", ptr);
    printf("The value stored in the pointer address is %d", *ptr);
    printf("The address of a is %d", &a);

    return 0;
}