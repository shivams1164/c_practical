#include <stdio.h>

int main() {
    int day_num;

    // Get input from the user
    printf("Enter a value from 1 to 7: ");
    scanf("%d", &day_num);

    // Use a switch statement to display the day of the week
    switch (day_num) {
        case 1:
            printf("1 - Monday\n");
            break;
        case 2:
            printf("2 - Tuesday\n");
            break;
        case 3:
            printf("3 - Wednesday\n");
            break;
        case 4:
            printf("4 - Thursday\n");
            break;
        case 5:
            printf("5 - Friday\n");
            break;
        case 6:
            printf("6 - Saturday\n");
            break;
        case 7:
            printf("7 - Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a value from 1 to 7.\n");
    }

    return 0;
}
