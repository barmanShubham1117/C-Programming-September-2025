#include <stdio.h>

int main()
{
    int a, b;
    int result;

    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);

    result = (a + b) * (a * a - a * b + b * b);
    
    printf("a^3+b^3=%d\n", result);

    return 0;
}