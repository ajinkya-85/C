/* Write a program to accept 20 numbers from the user and print their sum.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    long sum=0;
    printf("Enter 20 numbers :- ");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("Sum :- %ld",sum);
    getch();
    return 0;
}