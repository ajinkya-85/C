/* Cashier has indian currency notes of 100, 50, 10 write a program ro accept amount to withdraw by a customer and print how many notes 
of each denomination the cashier should give. Give priority to 100 then 50 then 10.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int wamount,h,f,t;
    printf("Enter withdrawal amount :- ");
    scanf("%d",&wamount);
    h=wamount/100;
    wamount=wamount%100;
    f=wamount/50;
    wamount=wamount%50;
    t=wamount/10;
    printf("100 x %d\n",h);
    printf("50  x %d\n",f);
    printf("10  x %d",t);
    getch();
    return 0;
}