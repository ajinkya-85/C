/* Write a program to accept three sides of triangle and check whether it is Equilateral or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle (length) :- ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s3==s1)
    {
        printf("Triangle is Equilateral.");
    }
    else{
        printf("Triangle is Not equilateral.");
    }
    getch();
    return 0;
}