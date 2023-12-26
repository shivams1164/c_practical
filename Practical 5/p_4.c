#include <stdio.h>

int main() {
    int n, i, searchElement, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Linear search algorithm
    for (i = 0; i < n; ++i) {
        if (arr[i] == searchElement) {
            found = 1;
            printf("%d found at position %d.\n", searchElement, i + 1);
            break;
        }
    }

    if (found == 0) {
        printf("%d is not present in the array.\n", searchElement);
    }

    return 0;
}
