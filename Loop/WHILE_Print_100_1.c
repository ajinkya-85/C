/* Write a program to print 100 to 1.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=100;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    getch();
    return 0;
}