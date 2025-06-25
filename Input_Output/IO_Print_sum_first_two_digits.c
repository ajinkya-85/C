// Write a program to accept a four digit number and print sum of it's first two digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,f1,f2;
    printf("Enter a four digit number :- ");
    scanf("%d",&num);
    num=num/100;
    f1=num%10;
    num=num/10;
    f2=num%10;
    printf("Sum of first two digits :- %d",f1+f2);
    getch();
    return 0;
}