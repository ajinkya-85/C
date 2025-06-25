/* Write a program to accept average marks of student and print grade from the following table.
    AVG.       Grade
  0-39.99        F
  40-49.99       C
  50-59.99       B
  60-67.99       A
  68-100         A+
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float  amarks;
    printf("Enter student average marks :-");
    scanf("%f",&amarks);
    if(amarks<=100)
    {
        if(amarks>=0 && amarks<=39.99)
        {
            printf("Your grade is F.");
        }
        if(amarks>=40 && amarks<=49.99)
        {
            printf("Your grade is C.");
        }
        if(amarks>=50 && amarks<=59.99)
        {
            printf("Your grade is B.");
        }
        if(amarks>=60 && amarks<=67.99)
        {
            printf("Your grade is A.");
        }
        if(amarks>=68 && amarks<=100)
        {
            printf("Your grade is A+.");
        }
    }
    getch();
    return 0;
}