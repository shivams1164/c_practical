#include <stdio.h>

void swap(int n1, int n2)
{
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("\n After swapping number 1 and number 2 are respectivily %d , %d", n1, n2);
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Enter number 1 :");
    scanf("%d", &n1);
    printf("Enter number 2 :");
    scanf("%d", &n2);
    swap(n1, n2);

    return 0;
}
