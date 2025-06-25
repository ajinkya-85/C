/*  Write a program to accept number from the user till user wants and print factorial of all enter numbers. 
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int n, f=1;
    char uc;
    do{
        printf("Enter a no. :- ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            f*=i;
        }
        printf("Factorial is :- %d\n",f);
        printf("Do you want to perform it again (Y/N):- ");
        fflush(stdin);
        scanf("%c",&uc);
    }while(uc=='Y' || uc=='y');
    getch();
}