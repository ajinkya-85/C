/* Write a program to accept a character from the user and check whether it is upper case or lower case, 
or digit or special symbol.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character :- ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("It's Uppercase letter.");
    }
    if(ch>=97 && ch<=122)
    {
        printf("It's Lowercase letter");
    }
    if(ch>=48 && ch<=57)
    {
       printf("It's Digit.");
    }
    if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) ||(ch>=91 && ch<= 96) || (ch>=123 && ch<=127))
    {
        printf("It's Special symbol.");
    }
    getch();
    return 0;
}
// Above logic is according to ASCII code.