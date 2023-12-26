/*Program to calculate the area and circumference of a circle
By Shivam Singh
13-10-2023
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius;
    printf("Enter the Radius of the Circle ");
    scanf("%f",&radius);
    float area,cicumference;
    area=3.14*radius*radius;
    cicumference=2*3.14*radius;
    printf("The Area of Circle is %.2f and Circumference of the Circle is %.2f",area,cicumference);
    return 0;
}
