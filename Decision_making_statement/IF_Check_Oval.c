// Write a program to accept an alphabet fom the user and check whether it is oval or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    int flag=0;
    printf("Enter an alphabate :- ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e'||
       ch=='I' || ch=='i' || ch=='O' || ch=='o'||
       ch== 'U' || ch=='u')
    {
        flag++;
    }
    if(flag==1)
    {
        printf("%c is Oval.",ch);
    }
    if(flag==0)
    {
        printf("%c is not Oval.",ch);
    }
    getch();
    return 0;
}