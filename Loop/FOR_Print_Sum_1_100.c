/* Write a program to print sum of all the number from 1 to 100.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("Sum is :- %d",sum);
    getch();
    return 0;
}