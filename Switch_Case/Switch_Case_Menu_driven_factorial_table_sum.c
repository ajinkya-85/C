/*  Write a menu driven program for following choice.
    A :- To print square and cube
    B :- To print factorial 
    C :- To print multiplication table
    D :- To print sum of all digits.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //for exit()

void main(){
    char uch;
    int num,sq,cube,facto,multi,sum;
    while(1){
        printf("\nEnter a number :- ");
        scanf("%d",&num);
        printf("\nPress A :- To print square and cube");
        printf("\nPress B :- To print factorial ");
        printf("\nPress C :- To print multiplication table");
        printf("\nPress D :- To print sum of all digits");
        printf("\nPress N :- To exit\n");
        scanf(" %c",&uch);
        switch(uch){
            case 'A' : printf("\n Square is %d and Cube is %d",num*num,num*num*num);
                        break;
            case 'B' : facto=1;
                        for(int i=1;i<=num;i++)
                            facto=facto*i;
                        printf("\n Factorial of %d is %d",num,facto);
                        break;
            case 'C' : for(int i=1;i<=10;i++)
                            printf("\n %d * %d = %d",num,i,num*i);
                        break;
            case 'D' : sum=0;
                        while(num>0){
                            sum=sum+num%10;
                            num=num/10;
                        }
                        printf("\n Sum of all digits is %d",sum);
                        break;
            case 'N':   exit(0);
                        break;
            default : printf("\nInvalid Choice"); 
        }
    }
    getch();
}