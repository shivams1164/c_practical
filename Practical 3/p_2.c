#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the color code -> ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("RED");
        break;
    case 2:
        printf("GREEN");
        break;
    case 3:
        printf("WHITE");
        break;
    case 4:
        printf("YELLOW");
        break;
    case 5:
        printf("ORANGE");
        break;
    
    default:
        printf("Please enter valid colour code");
        break;
    }
    return 0;
}
