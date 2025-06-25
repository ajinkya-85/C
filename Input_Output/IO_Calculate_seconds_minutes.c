// Write a program to accept number of hours and calculate it's equivalent number of seconds and minutes.
#include<stdio.h>
#include<conio.h>
int main()
{
    int hour;
    long minute,second;
    printf("Enter number of hours :- ");
    scanf("%d",&hour);
    minute=hour*60;
    second=minute*60;
    printf("Minutes :- %ld\nSeconds :- %ld",minute,second);
    getch();
    return 0;
}