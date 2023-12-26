/*Program to read two integer and two floating point numbers.
BY Shivam Singh
13-10-2023 */

#include<stdio.h>
int main(int argc, char const *argv[])

{
    int a1,a2;
    float f1,f2;
    printf("Enter Two Interger Number -> ");
    scanf("%d%d",&a1,&a2);
    printf("Enter Two Float Numbeer -> ");
    scanf("%f%f",&f1,&f2);
    printf("Two Intergers Are %d , %d And Float Numbers Are %.2f ,%f",a1,a2,f1,f2);
    return 0;
}
