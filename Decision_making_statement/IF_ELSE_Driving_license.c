/* Write a program to accept age and gneder from the user and check whether He/She is eligible for driving 
 license or not.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age :- ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are Eligible for driving license.");
    }
    else
    {
        printf("You are NOT Eligible for driving license.");
    }
    getch();
    return 0;
}