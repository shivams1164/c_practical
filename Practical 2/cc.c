#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if (year%400==0 ||(year%100!=0&& year%4==0))
    {
        printf("Leap");

    }
    else
    {
        printf("NOt");
    }
    
    return 0;
}
