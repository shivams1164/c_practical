/*Program to accept the marks of 5 subjects and finds the sum and percentage marks obtained by the student.
By Shivam Singh
13/10/2023
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float s1,s2,s3,s4,s5;
    printf("Total Marks of Each Subject is 100 \n");
    printf("Enter the Marks of Subject 1 ");
    scanf("%f",&s1);
    printf("Enter the Marks of Subject 2 ");
    scanf("%f",&s2);
    printf("Enter the Marks of Subject 3 ");
    scanf("%f",&s3);
    printf("Enter the Marks of Subject 4 ");
    scanf("%f",&s4);
    printf("Enter the Marks of Subject 5 ");
    scanf("%f",&s5);
    float sum;

    sum=s1+s2+s3+s4+s5;
    float per=sum/5;
    printf("\nTotal Marks is %.0f and Percetage is %.2f ",sum,per);


    return 0;
}
