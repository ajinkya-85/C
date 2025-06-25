/* Write a program to accept three number from the user and print largest of them.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three number :- ");
    scanf("%d%d%d",&n1,&n2,&n3);
    n1>n2?n1>n3?printf("%d is largest.",n1):printf("%d is largest.",n3):n2>n3?printf("%d is largest.",n2):printf("%d is largest.",n3);
    getch();
    return 0;
}