/* Writye a program to print all numbers from m to n, where m and n is entered by the user make sure it print 
decending order.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,m;
    printf("Enter two value :- ");
    scanf("%d%d",&n,&m);
    if(m>n)
    {
        for(i=m;i>=n;i--)
        {
            printf("%d\n",i);
        }
    }
    else{
        for(i=n;i>=m;i--)
        {
            printf("%d\n",i);
        }
    }
    getch();
    return 0;
}