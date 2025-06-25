/* Write a program to accept three sides of a triangle and print whether it is 
eqilateral, isosceles,scalene,right angle. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter three sides of triangle (lenght):- ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s3==s1)
    {
        printf("\nTriangle is Equilateral.");
    }
    if((s1==s2 && s2!=s3 && s3!=s1) ||
       (s1!=s2 && s2==s3 && s3!=s1) ||
       (s1!=s2 && s2!=s3 && s3==s1))
    {
        printf("\nTriangle is Isosceles.");
    }
    if(s1!=s2 && s2!= s3 && s3!=s1)
    {
        printf("\nTriangle is Scalene.");
    }
    if((s1*s1)+(s2*s2)==(s3*s3) ||
        (s2*s2)+(s3*s3)==(s1*s1) ||
        (s3*s3)+(s1*s1)==(s2*s2))
    {
        printf("\nTriangle is Right angle.");
    }
    getch();
    return 0;
}