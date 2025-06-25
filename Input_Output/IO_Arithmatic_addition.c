// Write a program to accept two integer value from the user and print their addition.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers :- ");
    scanf("%d%d",&n1,&n2);
    printf("Addition of %d and %d is %d ",n1,n2,n1+n2);
    getch();
    return 0;
}