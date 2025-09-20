#include <stdio.h>

int main() {
    // Integer types
    int a = 10;
    short s = 5;
    long l = 123456789;
    long long ll = 9876543210;

    // Unsigned types
    unsigned int ua = 20;
    unsigned short us = 15;
    unsigned long ul = 987654321;
    unsigned long long ull = 1234567890123;

    // Floating-point types
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 2.718281828459;

    // Character and string
    char c = 'A';
    char str[] = "Hello, World!";

    // Printing values with format specifiers
    printf("Integer (int): %d\n", a);
    printf("Short (short): %hd\n", s);
    printf("Long (long): %ld\n", l);
    printf("Long Long (long long): %lld\n", ll);

    printf("Unsigned Int (unsigned int): %u\n", ua);
    printf("Unsigned Short (unsigned short): %hu\n", us);
    printf("Unsigned Long (unsigned long): %lu\n", ul);
    printf("Unsigned Long Long (unsigned long long): %llu\n", ull);

    printf("Float (float): %f\n", f);
    printf("Double (double): %lf\n", d);
    printf("Long Double (long double): %Lf\n", ld);

    printf("Character (char): %c\n", c);
    printf("String (char array): %s\n", str);

    return 0;
}