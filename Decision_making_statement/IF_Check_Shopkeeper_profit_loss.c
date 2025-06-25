/* Write a program to accept cost price and selling price of a product and check whether the shopkeeper 
has made profit or loss, also print amount he earned or lost.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int sprice,cprice,result;
    printf("Enter cost price of product :- ");
    scanf("%d",&cprice);
    printf("\nEnter selling price of product :- ");
    scanf("%d",&sprice);
    if(sprice>cprice)
    {
        printf("\nProfit.");
        result=sprice-cprice;
    }
    if(sprice<cprice)
    {
        printf("\nLoss.");
        result=sprice-cprice;
    }
    if(result>0)
    {
        printf("\nProfit is %d.",result);
    }
    if(result<0)
    {
        printf("\nLoss is %d.",result);
    }
    getch();
    return 0;
}