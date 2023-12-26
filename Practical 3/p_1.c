#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n1,n2,sum,sub,multi,div;
    int option;
    printf("Enter two numbers  ");
    scanf("%f%f",&n1,&n2);
    do 
    {
        printf("\nOption 1 for Addition\n");
        printf("Option 2 for Subtraction\n");
        printf("Option 3 for Multiplication\n");
        printf("Option 4 for Division\n");
        printf("Option 5 to exit\n");

        scanf("%d",&option);

        switch (option)
        {
            case 1:
                sum = n1+n2;
                printf("Addition is %.2f ",sum);
                break;
            
            case 2:
                sub = n1-n2;
                printf("Subtraction is %.2f",sub);
                break;
            
            case 3:
                multi = n1*n2;
                printf("Multiplication is %.2f",multi);
                break;

            case 4:
                div=n1/n2;
                printf("Division is %.2f",div);
                break;
            case 5:
                printf("\nExited the program successfullly.");
                break;
            default:
                printf("Enter valid option");
                break;
        }
    }
    while(option!=5);
    // getchar();
    return 0;
}
