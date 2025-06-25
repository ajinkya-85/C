/* write a program to accept markd of five subject from the user and print whether student is pass or fail.
Student is pass if he got more than 40 marks in more than 3 subject. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3,s4,s5,count=0;
    printf("Enter marks of five subject :- ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if(s1>40)
    {
        count++;
    }
    if(s2>40)
    {
        count++;
    }
    if(s3>40)
    {
        count++;
    }
    if(s4>40)
    {
        count++;
    }
    if(s5>40)
    {
        count++;
    }
    if(count>3)
    {
        printf("Student is PASS.");
    }
    if(count<=3)
    {
        printf("Student is FAIL.");
    }
    getch();
    return 0;
}