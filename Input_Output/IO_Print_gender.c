// Write a program to accept gender of a student and print it.
#include<stdio.h>
#include<conio.h>
int main()
{
    char gender;
    printf("Enter student gender :- ");
    scanf("%c",&gender);
    fflush(stdin);
    printf("Student gender is %c",gender);
    getch();
    return 0;
}