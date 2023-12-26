#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating the sum of digits
    while (num > 0) {
        remainder = num % 10; // Extract the rightmost digit
        sum =sum+ remainder;     // Add the digit to the sum
        num =num/ 10;            // Remove the rightmost digit from the number
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
