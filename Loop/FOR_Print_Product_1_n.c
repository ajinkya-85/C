/* Write a program to print product of number from 1 to n.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d = %d\n",i,i*i);
    }
    getch();
    return 0;
}