/*
Write a program to print the value of i from 1 to 10 using goto statement.
*/
#include<stdio.h>
#include<conio.h>

void main(){
    int i=0;
    start:
    printf("Value of i: %d\n", i);
    i++;
    if(i<=10){
        goto start;
    }
    getch();
}