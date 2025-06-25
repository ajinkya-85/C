/* Write a program to print fibonacci series.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,l1=1,l2=0,n;
    for(i=1;i<=10;i++)
    {
        n=l1+l2;
        printf("%d\n",n);
        l2=l1;
        l1=n;
    }
    getch();
    return 0;
}