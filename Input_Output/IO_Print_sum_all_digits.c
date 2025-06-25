// Write a program to accept a four digit number and print sum of it's all digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum;
    printf("Enetr a four digit number :- ");
    scanf("%d",&num);
    sum=num%10;
    num=num/10;
    sum=sum+(num%10);
    num=num/10;
    sum=sum+(num%10);
    num=num/10;
    sum=sum+num;
    printf("Sum of all digits :- %d",sum);
    getch();
    return 0;
}