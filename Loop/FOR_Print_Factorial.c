/* Write a program to print factorial of entered number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    long facto;
    printf("Enter a number :- ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        facto=facto*i;
    }
    printf("Factorial is :- %ld");
    getch();
    return 0;
}