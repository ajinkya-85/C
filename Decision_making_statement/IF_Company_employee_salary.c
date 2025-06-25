/* A company decide salary of new employee from following table.
        Age           Gender          Work experience(year)             Salary
       20-25            M                   0-4                         25000
       20-25            F                   0-4                         28000
       26-30            M                   5-10                        35000
       26-30            F                   5-10                        38000
        >30            M/F                  >10                         45000
        >42            M/F                  >22                         70000
 Write a program to accept age, gender, and work experience and print salary.
 */
#include<stdio.h>
#include<conio.h>
int main()
{
    int age,wp;
    char gen;
    printf("Enter employee age :- ");
    scanf("%d",&age);
    printf("Enter employee gender (M/F) :- ");
    fflush(stdin);
    scanf("%c",&gen);
    printf("Enter employee working experinece :- ");
    scanf("%d",&wp);
    if(age>=20 && age<=25 && wp>=0 && wp<=4)
    {
        if(gen=='M' || gen=='m')
        {
            printf("Salary :- 25000");
        }
        if(gen=='F' || gen=='f')
        {
            printf("Salary :- 28000");
        }
    }
    if(age>=26 && age<=30 && wp>=5 && wp<=10)
    {
        if(gen=='M' || gen=='m')
        {
            printf("Salary :- 35000");
        }
        if(gen=='F' || gen=='f')
        {
            printf("Salary :- 38000");
        }
    }
    if(age>30 && wp>22)
    {
        if(gen='M' || gen=='m' || gen=='F' || gen=='f')
        {
            printf("Salary :- 45000");
        }
    }
    if(age>42 && wp>10)
    {
        if(gen='M' || gen=='m' || gen=='F' || gen=='f')
        {
            printf("Salary :- 70000");
        }
    }
    getch();
    return 0;
}