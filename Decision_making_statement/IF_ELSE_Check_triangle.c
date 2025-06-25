/* Write a program to accept a three angle of triangle and check whether triangle is valid or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter three angles of triangle :- ");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("Triangle is Valid.");
    }
    else{
        printf("Triangle is Invalid.");
    }
    getch();
    return 0;
}