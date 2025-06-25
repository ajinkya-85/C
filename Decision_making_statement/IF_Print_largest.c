// Write a program to accept two integers from the user and print largest of them.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers :- ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        printf("%d is Greater.",n1);
    }
    if(n2>n1)
    {
        printf("%d is Greater.",n2);
    }
    getch();
    return 0;
}