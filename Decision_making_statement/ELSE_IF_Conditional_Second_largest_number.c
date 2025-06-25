/* Write a program to print seconf largest number among three numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,mid;
    printf("Enter three numbers :- ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<n2 && n1<n3)
    {
        mid=n2<n3?n2:n3;
        printf("Second largest number is :- %d\n",mid);
    }
    else if(n2<n1 && n2<n3)
    {
        mid=n1<n3?n1:n3;
        printf("Second largest number is :- %d\n",mid);
    }
    else if(n3<n1 && n3<n2)
    {
        mid=n1<n2?n1:n2;
        printf("Second largest number is :- %d\n",mid);
    }
    getch();
    return 0;
}