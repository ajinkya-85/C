// Write a program to accept total bill amount from the user and print new bill amount after giving 15% discount.
#include<stdio.h>
#include<conio.h>
int main()
{
    int tamount,dis,namount;
    printf("Enter total bill amount :- ");
    scanf("%d",&tamount);
    dis=(tamount/100)*15;
    namount=tamount-dis;
    printf("New bill amount after giving 15%% discount :- %d",namount);
    getch();
    return 0;
}