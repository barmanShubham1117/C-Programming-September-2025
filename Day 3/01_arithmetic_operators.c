#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Arithmetic Operations
    printf("Arithmetic Operations with a = %d, b = %d\n", a, b);
    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Division (a / b): %d\n", a / b); // Integer division
    printf("Modulus (a %% b): %d\n", a % b);
    printf("\n");

    // Increment and Decrement
    int x = a;
    int y = b;
    printf("Demonstrating Increment and Decrement:\n");
    printf("Original x: %d\n", x);
    printf("Postfix Increment (x++): %d\n", x++); // prints x, then increments
    printf("After Postfix, x: %d\n", x);
    printf("Prefix Increment (++x): %d\n", ++x); // increments, then prints
    printf("After Prefix, x: %d\n", x);
    printf("\n");

    printf("Original y: %d\n", y);
    printf("Postfix Decrement (y--): %d\n", y--); // prints y, then decrements
    printf("After Postfix, y: %d\n", y);
    printf("Prefix Decrement (--y): %d\n", --y); // decrements, then prints
    printf("After Prefix, y: %d\n", y);

    return 0;
}