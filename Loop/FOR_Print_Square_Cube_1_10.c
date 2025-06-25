/* Write a program to print square and cube of number 1 to 10.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("\tNumber\t     Square\t      Cube\n");
    for(i=1;i<=10;i++)
    {
        printf("\t%d\t\t%d\t\t%d\n",i,i*i,i*i*i);
    }
    getch();
    return 0;
}