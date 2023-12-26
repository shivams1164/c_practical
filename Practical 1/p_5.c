/*Program that accepts temperature in Centigrade and converts into Fahrenheit using the formula C/5 = (F-32)/9
By Shivam Singh
13-10-2023
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,f;
    printf("Enter the temperature in centigrade ");
    scanf("%f",&c);
    f=((9*c)/5+32);
    printf("Temperature in fahrenheit is %.1f",f);

    
    return 0;
}
