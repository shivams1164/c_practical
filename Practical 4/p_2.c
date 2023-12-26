#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,num,i;
    printf("Enter the number for sum ");
    scanf("%d",&num);

    for (i = 0; i <= num; i++)
    {
        sum=sum+i;

    }   
    printf("Total sum is %d",sum);
    
    return 0;
}
