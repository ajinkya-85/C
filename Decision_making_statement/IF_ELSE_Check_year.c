/* Write a program to accept the year from the user and check whether it is leep year or not.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter year :- ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Entered year is Leep year.");
    }
    else
    {
        printf("Entered year is not leep year.");
    }
    getch();
    return 0;
}