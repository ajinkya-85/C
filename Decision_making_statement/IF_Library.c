/* A library charges fine for every book which is return late. Write a program to accept the number of days 
a student is late to return the book and calculate fine from following table. 
    Day range       Fine/day
      1-8              1
      9-15             2
     16-21             3
     22-30             5
      >30    membership is cancelled.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int day,fine;
    printf("Enter number of days :- ");
    scanf("%d",&day);
    if(day>=1 && day<=8)
    {
        fine=day*1;
        printf("Fine :- %d",fine);
    }
    if(day>=9 && day<=15)
    {
        fine=day*2;
        printf("Fine :- %d",fine);
    }
    if(day>=16 && day<=21)
    {
        fine=day*3;
        printf("Fine :- %d",fine);
    }
    if(day>=22 && day<=30)
    {
        fine=day*1;
        printf("Fine :- %d",fine);
    }
    if(day>30)
    {
        printf("Membership is cancelled.");
    }
    getch();
    return 0;
}