// Write a program to accept four numbers from user and print smallest of them.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter three numbers :- ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1<n2 && n1<n3 && n1<n4)
    {   
        printf("%d is Smallest.",n1);
    }
    if(n2<n1 && n2<n3 && n2<n4)
    {
        printf("%d is Smallest.",n2);
    }
    if(n3<n1 && n3<n2 && n3<n4)
    {
        printf("%d is Smallest.",n3);
    }
    if(n4<n1 && n4<n2 && n4<n3)
    {
        printf("%d is Smallest.",n4);
    }
    getch();
    return 0;
}