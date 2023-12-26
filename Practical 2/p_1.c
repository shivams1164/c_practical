 /*Program that checks whether the two numbers entered by the user are equal or not.*/
 #include<stdio.h>
 int main(int argc, char const *argv[])
 {
    int num1,num2;
    printf("Enter the Number 1-> ");
    scanf("%d",&num1);
    printf("Enter the Number 2-> ");
    scanf("%d",&num2);
    if (num1==num2)
    {
  printf("Both numbers are equal");
    }
    else
    {
      printf("Both numbers are not equal");
    }
    

    return 0;
 }
