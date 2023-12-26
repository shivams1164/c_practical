#include<stdio.h>

int main(int argc, char const *argv[])
{
    int fact=1,num,i;

    printf("Enter the number for factorial");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        fact=fact*i;
        /* code */
    }
    printf("Factorial is %d",fact);
    



    return 0;
}
