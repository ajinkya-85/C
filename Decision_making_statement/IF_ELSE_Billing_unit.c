/* Write a program to accept a total billing unit from the user and print total bill amount from the 
 following table.
        Unit                Price per unit
        0-100                    7.00
      101-150                    8.10
      151-200                    9.80
        >200                     11.10
    also add 150rs in total bill amount as rent.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int bunit;
    float bill;
    printf("Enter total Billing unit :- ");
    scanf("%d",&bunit);
    if(bunit<200)
    {
        if(bunit>=0 && bunit<=100)
        {
            bill=bunit*7.00;
        }
        if(bunit>=101 && bunit<=150)
        {
            bill=bunit*8.10;
        }
        if(bunit>=151 && bunit<=200)
        {
            bill=bunit*9.80;
        }
    }
    else{
        bill=bunit*11.10;
    }
    bill=bill+150;
    printf("Bill amount is :- %.2f",bill);
    getch();
    return 0;
}