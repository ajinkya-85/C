// Write a program to accept distance between two cities in Km and calculate equivalent distance into meters and feets.
#include<stdio.h>
#include<conio.h>
int main()
{
    int km;
    long meter;
    double feet;
    printf("Enter distance between two cities :- ");
    scanf("%d",&km);
    meter=km*1000;
    feet=meter*3.28;
    printf("Distance in meter :- %ld\nDistance in feet :- %.2lf",meter,feet);
    getch();
    return 0;
}