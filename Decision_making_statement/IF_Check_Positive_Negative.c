// Write a program to accept a number from the user and check whether it is positive or negative.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is POSITIVE.",num);
    }
    if(num<0)
    {
        printf("%d is NEGATIVE.",num);
    }
    getch();
    return 0;
}