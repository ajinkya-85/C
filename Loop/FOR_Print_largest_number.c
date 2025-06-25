/* Write a program to accept 20 numbers from the user and print largest of them.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,l=0,temp;
    printf("Enetr 20 numbers :- ");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&num);
        temp=num;
        if(temp>l)
        {
            l=temp;
        }
    }
    printf("Largest number is :- %d",l);
    getch();
    return 0;
}