#include <stdio.h>
#include<stdlib.h>


int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n==0)       
    {
        printf("Not valid input");
        
    }
    else
    {
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    }
    
    
    
    return 0;
}
