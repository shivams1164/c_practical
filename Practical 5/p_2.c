#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int array1[n], array2[n], sumArray[n];

    printf("Enter elements for the first array:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &array2[i]);
    }

    printf("Sum of corresponding elements in the arrays:\n");
    for (i = 0; i < n; ++i) {
        sumArray[i] = array1[i] + array2[i];
        printf("%d ", sumArray[i]);
    }
    printf("\n");

    return 0;
}
