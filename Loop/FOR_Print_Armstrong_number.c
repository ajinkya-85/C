/* Write a program to print armstrong numbers from 100 to 999.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,temp,l1,l2,r;
    for(i=100;i<=999;i++)
    {
        temp=i;
        l1=temp%10;
        temp/=10;
        l2=temp%10;
        temp/=10;
        r=(l1*l1*l1)+(l2*l2*l2)+(temp*temp*temp);
        if(r==i)
        {
            printf("%d is armstrong number.\n",i);
        }
    }
    getch();
    return 0;
}