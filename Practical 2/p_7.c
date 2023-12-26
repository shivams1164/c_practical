#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);

    (number%2==0) ? printf("Number is even") : printf("Number is odd") ;

    return 0;
}
