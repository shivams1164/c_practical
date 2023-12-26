#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;      // Extract the rightmost digit
        reversedNum = reversedNum * 10 + remainder;  // Add the digit to the reversed number
        num /= 10;                 // Remove the rightmost digit from the number
    }

    printf("The reverse of the number is: %d\n", reversedNum);
    
    return 0;
}
