#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, digit, sum;

    printf("Enter the starting interval: ");
    scanf("%d", &start);

    printf("Enter the ending interval: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; ++num) {
        int temp = num;
        int numberOfDigits = 0;
        sum = 0;

        // Count number of digits using modulus operator
        while (temp != 0) {
            temp /= 10;
            numberOfDigits++;
        }

        temp = num; 

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, numberOfDigits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
