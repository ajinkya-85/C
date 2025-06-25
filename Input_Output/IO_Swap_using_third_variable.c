// Write a program to accept two integers from the user and swap/interchange their values by using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter two integer :- ");
    scanf("%d%d",&n1,&n2);
    printf("Before swapping a :- %d and b :- %d",n1,n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\nAfter swapping a:- %d and b :- %d",n1,n2);
    getch();
    return 0;
}