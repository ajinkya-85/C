/* Write a program to aceept 20 numbers from the user and print total count of even and odd numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,e=0,o=0,num;
    printf("Enter 20 numbers :- ");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    printf("EVEN :- %d\n",e);
    printf("ODD :- %d",o);
    getch();
    return 0;
}