#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float D,a,b,c,r1,r2;
    // find the roots of quadratic equation
    printf("Enter the value of a ->  ");
    scanf("%f",&a);
    printf("Enter the value of b ->  ");
    scanf("%f",&b);
    printf("Enter the value of c ->  ");
    scanf("%f",&c);
    D=b*b-4*a*c;
    if (D>0)
    {
        r1= (-b+sqrt(D))/2*a;
        r2= (-b-sqrt(D))/2*a;
        printf("Roots are %.0f and %.0f ",r1,r2);
    }
    else if (D==0)
    {
    r1= (-b)/2*a;
        r2= (-b)/2*a;
        printf("Roots are %.0f and %.0f ",r1,r2);
    }
    else
    printf("Roots are imaginary");
    
    return 0;
}
