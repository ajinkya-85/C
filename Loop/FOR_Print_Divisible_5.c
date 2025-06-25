/* Write a program to print number from 50 to 500.(Divisible by 5)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=50;i<=500;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
    getch();
    return 0;
}