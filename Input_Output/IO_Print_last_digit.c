// Write a program to accept number from the user and print it's last digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    printf("Last digit is :- %d",num%10);
    getch();
    return 0;
}