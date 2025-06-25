// Write a program to accept age, average marks, gender of student and print it.
#include<stdio.h>
#include<conio.h>
int main()
{
    int sage;
    float savg_marks;
    char sgender;
    printf("Enter student age :- ");
    scanf("%d",&sage);
    printf("Enter student average marks :- ");
    scanf("%f",&savg_marks);
    fflush(stdin);
    printf("Enter student gender :- ");
    scanf("%c",&sgender);
    printf("Student age :- %d\n",sage);
    printf("Student average marks :- %.2f\n",savg_marks);
    printf("Student gender :- %c\n",sgender);
    getch();
    return 0;
} 