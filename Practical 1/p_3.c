/*Program to calculate the simple interest and compound interest (The Principal, Amount, Rate of Interest and Time are entered through keyboard).
By Shivam Singh
13-10-2023*/
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float p,r,t;
    printf("Enter the Principal ");
    scanf("%f",&p);
    printf("Enter the Rate of Interest ");
    scanf("%f",&r);
    printf("Enter the Time ");
    scanf("%f",&t);

    float si=(p*r*t)/100;
     float a =p * ((pow((1 + r / 100),t)));
     float ci=a-p;

        printf("The Simple Interest is %.2f and Compount Interest is %.2f",si,ci);
    return 0;
}
