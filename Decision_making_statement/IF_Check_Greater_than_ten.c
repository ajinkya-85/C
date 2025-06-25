// Write a program to accept a number from the user and print whether it is greater than 10 or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enetr a number :- ");
    scanf("%d",&num);
    if(num>10)
    {
        printf("%d is greater than 10.",num);
    }
    if(num<10)
    {
        printf("%d is less than 10.",num);
    }
    if(num==10)
    {
        printf("%d is 10.",num);
    }
    getch();
    return 0;
}