#include <stdio.h>

// Defining a constant using #define (macro)
#define MAX_VALUE 100

int main() {
    // Variable declaration and initialization
    int age = 20;               // integer variable
    float salary = 55000.75;    // floating-point variable
    char grade = 'A';           // character variable

    // Constant using const keyword
    const float PI = 3.14159;   

    // Printing variables
    printf("Variables:\n");
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);

    // Printing constants
    printf("\nConstants:\n");
    printf("PI: %.5f\n", PI);
    printf("MAX_VALUE: %d\n", MAX_VALUE);

    // Trying to modify a constant (uncommenting will cause error)
    // PI = 3.14;   // ❌ Not allowed
    // MAX_VALUE = 200; // ❌ Not allowed

    return 0;
}
