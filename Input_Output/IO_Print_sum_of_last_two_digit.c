// Write a program to accept a four digit number from the user and print sum of their last two digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,l1,l2;
    printf("Enter a four digit number :- ");
    scanf("%d",&num);
    l1=num%10;
    num=num/10;
    l2=num%10;
    printf("Sum of last two digits :- %d",l1+l2);
    getch();
    return 0;
}