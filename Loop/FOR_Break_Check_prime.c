/* Write a program to accept number from the user and print whether number is prime or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,flag=1;
    printf("Enter a number :- ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag+=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("It's Prime number.");
    }
    else{
        printf("It's not prime number.");
    }
    getch();
    return 0;
}