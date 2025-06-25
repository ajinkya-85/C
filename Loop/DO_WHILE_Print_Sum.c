/* Write a program to accept the number till user wants and at the end print sum of all enter number. 
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int n,sum=0;
    char uchoice;
    do{
        printf("Enter a no. :- ");
        scanf("%d",&n);
        sum+=n;
        printf("DO you want to add another no.(Y/N) :- ");
        fflush(stdin);
        scanf("%c",&uchoice);
    }while(uchoice=='Y' || uchoice=='y');
    printf("Sum :- %d",sum);
    getch();
}