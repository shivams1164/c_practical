#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    printf("Enter three number ->");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1<num2)
    {
        if (num3<num2)
        {
            printf("Number 2 is greatest %d",num2);
        }
        else
        {
            printf("Number 3 is greatest %d",num3);
        }
             
    }
    
else
{
    if (num1<num3)
    {
        printf("Number 3 is greatest %d",num3);
    }
    else
    {
        printf("Number 1 is greatest %d",num1);
    }
    
    
}

    return 0;
}
