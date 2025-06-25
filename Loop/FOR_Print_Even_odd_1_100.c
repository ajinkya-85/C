/* Write a program to print even-odd number from 1 to 100.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d - Even.\n",i);
        }
        else{
            printf("%d - Odd.\n",i);
        }
    }
    getch();
    return 0;
}