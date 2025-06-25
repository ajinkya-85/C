// Write a program to accept a character from the user and print it's ASCII code.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character :- ");
    scanf("%c",&ch);
    printf("ASCII code of %c is %d",ch,ch);
    getch();
    return 0;
}