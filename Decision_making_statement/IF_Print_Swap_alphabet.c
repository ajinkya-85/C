/* Write a program to accept an alphabet from the user and print swap case.(Uppercase to lowercase and vise-versa) */
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter an character :- ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("In lowercase :- %c",(ch+32));
    }
    if(ch>=97 && ch<=122)
    {
        printf("In uppercase :- %c",(ch-32));
    }
    getch();
    return 0;
}