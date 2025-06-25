/* Write a program to print factorial from 1 to 20.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    long k;
    for(i=1;i<=20;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            k=k*j;  
        }
        printf("%d - %ld\n",i,k);
    }
    getch();
    return 0;
}