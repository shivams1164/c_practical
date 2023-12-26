#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of elements (max 50): ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements in reverse order: ");
    for ( i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}