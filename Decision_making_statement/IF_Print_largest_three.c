// Write a program to accept three numbers and find largest of them.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("Enetr three numbers :- ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("%d is Largest.",n1);
    }
    if(n2>n1 && n2>n3)
    {
        printf("%d is Largest.",n2);
    }
    if(n3>n2 && n3>n1)
    {
        printf("%d is Largest.",n3);
    }
    getch();
    return 0;
}