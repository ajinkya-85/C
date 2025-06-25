// Write a program to accept three angle of a triangle and check whether triangle is valid or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter three angle of triangle :- ");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("Triangle is valid.");
    }
    if(a1+a2+a3!=180)
    {
        printf("Triangle is not valid.");
    }
    getch();
    return 0;
}