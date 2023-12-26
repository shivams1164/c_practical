#include <stdio.h>

int main() {
    int arr[50];
    int n, sum = 0;

    printf("Enter the number of elements (max 50): ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }



    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("\nSum of even numbers in the array: %d\n", sum);

    return 0;
}
