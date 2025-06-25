// Write a program to accept length and breadth of rectangle and print area of it.
#include<stdio.h>
#include<conio.h>
int main()
{
    float length,breadth,area;
    printf("Enter length and breadth of a rectanle :- ");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;
    printf("Area od rectangle is :- %.2f",area);
    getch();
    return 0;
} 