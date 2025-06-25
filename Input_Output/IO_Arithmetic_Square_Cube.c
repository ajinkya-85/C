// Write a program to accept one integer value from yhe user and print it's square and cube.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter an integer :- ");
    scanf("%d",&num);
    printf("Square :- %d and Cube is %d",num*num,num*num*num);
    getch();
    return 0;
}