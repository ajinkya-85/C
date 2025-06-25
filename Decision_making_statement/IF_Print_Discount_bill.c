/* Write a program to accept a total bill amount from tyhe user and give 15% discount if bill amount is 
more than 1000 otherwise no discount.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int tamount;
    printf("Enter total bill amount :- ");
    scanf("%d",&tamount);
    if(tamount>1000)
    {
        printf("Congratulations you got discount.");
        int namount,damount;
        damount=tamount/100*15;
        namount=tamount-damount;
        printf("\nNew bill amount after giving 15%% discount is :- %d",namount);
    }
    if(tamount<1000)
    {
        printf("Total bill amount is less than 1000rs.\nNo discount.");
    }
    getch();
    return 0;
}