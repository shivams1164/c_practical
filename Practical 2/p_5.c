#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    if (age>=0 && age<=10)
    {
        printf("Working hour is 0");
    }
    else if (age>=11 && age<=15)
    {
        printf("WOrking hour is 0");
    }
    else if (age>=16 && age<=20)
    {
        printf("Working hour is 3");
    }
    else if (age>=21 && age<=25)
    {
        printf("Working hour is 6");
    }
    else if (age>=25)
    {
        printf("Working hour is 8");
    }
    else
    {
        printf("Enter a valid age");
    }
       

    
    return 0;
}
