#include <stdio.h>

int main() {
   int a = 5, b = 10;
   int max = (a > b) ? a : b; // ?: Ternary Operator
   printf("Max: %d\n", max);
   return 0;
}