// Write a program to accept basic salary of an employee and print gross salary, by adding 8% TA, 11% DA, 14% HRA.
#include<stdio.h>
#include<conio.h>
int main()
{
    long bsalary,gsalary,TA,DA,HRA;
    printf("Enter basic of an employee :- ");
    scanf("%ld",&bsalary);
    TA=bsalary/100*8;
    DA=bsalary/100*11;
    HRA=bsalary/100*14;
    gsalary=bsalary+TA+DA+HRA;
    printf("Gross salary of an employee is :- %ld",gsalary);
    getch();
    return 0;
}