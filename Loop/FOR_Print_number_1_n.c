/* Write a program to print all the numbers from 1 to n, where n is entered by user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d\n",i);
    }
    getch();
    return 0;
}