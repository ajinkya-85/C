// Write a program to accept marks of a five subjects of a student anf calculate total marks and average marks.
#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float avg;
    printf("Enter marks of five subjects :-  ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    avg=total/5.0;
    printf("Total marks is :- %d\n",total);
    printf("Average marks is :- %.2f",avg);
    getch();
    return 0;
}