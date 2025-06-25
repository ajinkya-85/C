// Write a program to accept four digit number from the user and print new number by adding one in each digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,l1,l2,l3,new;
    printf("Enter a four digit number :- ");
    scanf("%d",&num);
    l1=num%10;
    num/=10;
    l2=num%10;
    num/=10;
    l3=num%10;
    num/=10;
    l1++;
    l1=l1%10;
    l2++;
    l2=l2%10;
    l3++;
    l3=l3%10;
    num++;
    num=num%10;
    new=num*1000+l3*100+l2*10+l1;
    printf("Number obtain by adding one number in each digit is :- %d",new);
    getch();
    return 0;
}