#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each entered element to the sum
    }



    printf("\nThe sum of the elements in the array is: %d\n", sum);

    return 0;
}
