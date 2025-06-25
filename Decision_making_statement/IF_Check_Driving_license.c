// Write a program to accept age of student and print whether student is eligible for driving license.
#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter student age :- ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Student is eligible for driving license.");
    }
    if(age<18)
    {
        printf("Student is not eligible for driving license.");
    }
    getch();
    return 0;
}