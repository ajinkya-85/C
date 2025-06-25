/* Write a program to accept total bill amount from the user and print dicount from following table.
        Bill amount         Discount
           <500             No discount
         501-1500               5%
        1501-2500               8%
           >2500                10%
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int tbill,temp;
    printf("Enter total bill amount :- ");
    scanf("%d",&tbill);
    temp=tbill;
    if(tbill<=500)
    {
        printf("No discount. Do more shopping.");
    }
    if(tbill>500 && tbill<=1500)
    {
            temp=temp-(tbill/100*5);
            printf("5%% Discount.\nNew bill is %d",temp);
    }
    if(tbill>1500 && tbill<=2500)
    {
            temp=temp-(tbill/100*8);
            printf("8%% Discount.\nNew bill is %d",temp);
    }    
    if(tbill>2500)
    {
            temp=temp-(tbill/100*10);
            printf("10%% Discount.\nNew bill is %d",temp);
    }
    getch();
    return 0;
}