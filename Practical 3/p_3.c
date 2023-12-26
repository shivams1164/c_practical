#include <stdio.h>

int main() {
    int month;

    // Get input from the user
    printf("Enter a value from 1 to 12: ");
    scanf("%d", &month);

    // Use a switch statement to display the month name
    switch (month) {
        case 1:
            printf("1 - January\n");
            break;
        case 2:
            printf("2 - February\n");
            break;
        case 3:
            printf("3 - March\n");
            break;
        case 4:
            printf("4 - April\n");
            break;
        case 5:
            printf("5 - May\n");
            break;
        case 6:
            printf("6 - June\n");
            break;
        case 7:
            printf("7 - July\n");
            break;
        case 8:
            printf("8 - August\n");
            break;
        case 9:
            printf("9 - September\n");
            break;
        case 10:
            printf("10 - October\n");
            break;
        case 11:
            printf("11 - November\n");
            break;
        case 12:
            printf("12 - December\n");
            break;
        default:
            printf("Invalid input. Please enter a value from 1 to 12.\n");
    }

    return 0;
}
