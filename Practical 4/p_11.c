#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; ++i) {
        for (j = 1; j <= 10; ++j) {
            printf("%4d ", i * j); // Adjusting width for alignment
        }

        printf("\n");
    }

    return 0;
}
