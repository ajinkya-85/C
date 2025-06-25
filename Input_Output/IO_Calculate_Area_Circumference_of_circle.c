// Write a program to accept radius of a circle and calculate area and circumference.
#include<stdio.h>
#include<conio.h>
int main()
{
    float r,area,cir;
    printf("Enter radius of a circle :- ");
    scanf("%f",&r);
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("Area of circle is :- %.2f\nCircumference of circle is :- %.2f",area,cir);
    getch();
    return 0;
}