/* Write a program to accept number from the user and check even odd.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    num%2==0?printf("EVEN."):printf("ODD.");
    getch();
    return 0;
}