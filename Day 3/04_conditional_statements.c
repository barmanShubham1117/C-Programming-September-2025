#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // 1. if-else statement
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("Number is zero.\n");
    }

    // 2. switch-case statement
    int day;
    printf("\nEnter day number (1-3): ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day!\n");
    }

    // 3. goto statement
    printf("\nDemonstrating goto statement:\n");
    int i = 0;
    start:
        printf("i = %d\n", i);
        i++;
        if (i < 3) goto start;
    printf("Exited loop using goto.\n");

    return 0;
}
