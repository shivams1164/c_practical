/*Program that swaps values of two variables using a third variable.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int var1,var2,var3;
   
    printf("Enter the value of variable 1-> ");
    scanf("%d",&var1);
    printf("Enter the value of variable 2-> ");
    scanf("%d",&var2);
    var3=var2;
    var2=var1;
    var1=var3;
    printf("Now the Variable 1 is %d and Variable 2 is %d",var1,var2);
    return 0;
}

