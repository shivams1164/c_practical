#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum_even=0,sum_odd=0,num,i;


    printf("Enter the number");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        if (i%2==0)
        {
            sum_even=sum_even+i;
        }
        else
        {
            sum_odd=sum_odd+i;
        }
        
        
    }
    printf("\nSum of Even Number is %d",sum_even);
    printf("\nSum of Odd Number is %d",sum_odd);

    return 0;
}
