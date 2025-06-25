// Write a program to accept number from the user and check whether it is EVEN or ODD.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is EVEN.",num);
    }
    if(num%2!=0)
    {
        printf("%d is ODD.",num);
    }
    getch();
    return 0;
}