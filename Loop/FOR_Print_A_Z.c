/* Write a program to print A to Z.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++) // for(i='A';i<='Z';i++)
    {
        printf("%c\n",i);
    }
    getch();
    return 0;
}