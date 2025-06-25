/* Write a program to print absolute number from 1 to n.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    num>0?printf("It's Absolute number."):printf("It's not absolute number.");
    getch();
    return 0;
}