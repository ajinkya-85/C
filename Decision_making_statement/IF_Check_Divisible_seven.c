// Write a program to accept number from the user and check whether it is divisible by seven or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    if(num%7==0)
    {
        printf("%d is divisible by seven.",num);
    }
    if(num%7!=0)
    {
        printf("%d is not divisible by seven.",num);
    }
    getch();
    return 0;
}