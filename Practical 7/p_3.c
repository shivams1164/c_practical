// 3. Program to implement strlen(), strcat(), strcpy() using the concept of Functions.

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{

    char str1[25],str2[25];
    int len;
    printf("Enter First Name: ");
    gets(str1);
    printf("Enter First Name: ");
    gets(str2);

    strcat(strcat(str1," "),str2);
    printf("After concatenation : ");
    puts(str1);

   len= strlen(str1);
    printf("Length of the string is %d\n",len);

    strcpy(str1,str2);
    puts(str1);
    return 0;
}
