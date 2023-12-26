// Program to calculate and print the area of triangle, where the three sides of the triangle is given as input
#include<stdio.h>
#include<math.h>
int main()
{
    /* code */
    float a,b,c,s,area;
    printf("Enter the Side 1->");
    scanf("%f",&a);
    printf("Enter the Side 2->");
    scanf("%f",&b);
    printf("Enter the Side 3->");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %.2f",area);
    return 0;
}
