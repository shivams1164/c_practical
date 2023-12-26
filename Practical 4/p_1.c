#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("Natural Numbers are-\n");
    for (int i = 1; i <=n; i++)
    {
        printf("%d\n",i);
    }
    
    

    return 0;
}
