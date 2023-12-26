#include<stdio.h>
void Checkprime(int num){

    int flag=1;
    if (num==0 || num==1)
    {
        printf("Please enter number greater than 1");
       
    }else{

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            flag=0;
        }
        
    }
    if (flag==1)
    {
        printf("Number is Prime");
    }

else{
    printf("Number is Not Prime");
}
        
    }
}

int main(int argc, char const *argv[])
{

    int prime_num;

    printf("Enter a number : ");
    scanf("%d",&prime_num);

    Checkprime(prime_num);
    return 0;
}
