/* Write a program to print sum of all numbers from 1 to n, where n is entered by user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter an number :- ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum :- %d",sum);
    getch();
    return 0;
}