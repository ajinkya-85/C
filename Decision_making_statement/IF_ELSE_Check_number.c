/* Write a program to accept number from the user and check whether it is positive, negative, or zero.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number :- ");
    scanf("%d",&num);
    if(num>=0)
    {
        if(num>0)
        {
            printf("%d is Positive.",num);
        }
        else{
            printf("%d is Zero.",num);
        }
    }
    else{
        printf("%d is Negative.",num);
    }
    getch();
    return 0;
}