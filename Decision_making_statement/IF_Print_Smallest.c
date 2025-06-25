// Write a program to accept three values from the user and print smallest of them.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers :- ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<n2 && n1<n3)
    {   
        printf("%d is Smallest.",n1);
    }
    if(n2<n1 && n2<n3)
    {
        printf("%d is Smallest.",n2);
    }
    if(n3<n1 && n3<n2)
    {
        printf("%d is Smallest.",n3);
    }
    getch();
    return 0;
}