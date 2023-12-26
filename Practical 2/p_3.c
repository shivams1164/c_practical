#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number ");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    
    
    return 0;
}
