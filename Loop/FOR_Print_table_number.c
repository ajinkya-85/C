/* Write a program to print multiplication table of number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    getch();
    return 0;
}