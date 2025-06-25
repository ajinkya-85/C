/* Write a program to accept the number till user want and each iteration checks whether entered number is even or odd.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int num;
    char uchoice;
    do{
        printf("Enter a no. : ");
        scanf("%d",&num);
        if(num%2==0){
            printf("EVEN\n");
        }
        else{
            printf("ODD\n");
        }
        printf("Do you want to check another no.(Y/N) :-");
        fflush(stdin);
        scanf("%c",&uchoice);
    }while(uchoice=='Y' || uchoice=='y');
    getch();
}