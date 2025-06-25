/* Write a program to accept number and print it's divisors.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    printf("Divisors :- \n");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
    getch();
    return 0;
}