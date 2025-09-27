#include <stdio.h>

int main() {
    // 0 => false
    // 1 => true

    // Bitwise Operators: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)
    
    int a = 15; // Binary: 0 1 1 1 1
    int b = 13; // Binary: 0 1 1 0 1
    printf("Bitwise AND: %d\n", a & b); // 0 1 1 0 1 -> 13
    printf("Bitwise OR: %d\n", a | b);  // 0
    printf("Bitwise XOR: %d\n", a ^ b); // 0 0 0 1 0 -> 2
    printf("Bitwise NOT of a: %d\n", ~a); // -(a + 1) -> -16
    printf("Left Shift a by 1: %d\n", a << 1); // 1 1 1 1 0 -> 30
    printf("Right Shift a by 1: %d\n", a >> 1); // 0 0 1 1 1 -> 7

    // AND:
    // (Sun rises from the east) AND (it is hot). -> TRUE
    // (Sun rises from the west) AND (it is hot). -> FALSE
    // (Sun rises from the east) AND (it is cold). -> FALSE
    // (Sun rises from the west) AND (it is cold). -> FALSE

    // OR:
    // (It is either my bat) OR (your bat). -> FALSE
    // (It is either my bat) OR (his bat). -> TRUE
    // (It is either his bat) OR (your bat). -> TRUE
    // (It is either his bat) OR (your ball). -> TRUE

    // XOR:
    // TRUE ^ TRUE -> FALSE
    // TRUE ^ FALSE -> TRUE
    // FALSE ^ TRUE -> TRUE
    // FALSE ^ FALSE -> FALSE


   return 0;
}