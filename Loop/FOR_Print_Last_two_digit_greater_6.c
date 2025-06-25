/* Write a program to print number from 100 to 999 whose sum of last two digits greater than 6.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,temp,l,ls;
    for(i=100;i<=999;i++)
    {
        temp=i;
        l=temp%10;
        temp/=10;
        ls%=10;
        temp/=10;
        if(l+ls>6)
        {
            printf("%d\n",i);
        }
    }
    getch();
    return 0;
}