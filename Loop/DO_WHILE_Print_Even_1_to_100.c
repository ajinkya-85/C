/*  Write a program to print all the even numbers from 1 to 100.
*/
#include<stdio.h>
#include<conio.h>

void main(){
    int i =2;
    do{
        printf("%d\n",i);
        i+=2;
    }while(i<=100);
    getch();
}