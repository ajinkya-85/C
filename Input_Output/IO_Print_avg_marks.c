// Write a program to accept average marks of a student and display it.
#include<stdio.h>
#include<conio.h>
int main()
{
    float avg_marks;
    printf("Enter your average marks :- ");
    scanf("%f",&avg_marks);
    printf("%.2f is your average marks",avg_marks);
    getch();
    return 0;
}