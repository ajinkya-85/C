/* Write a program to print all the numbers from 1 to 100.
*/

#include<stdio.h>
#include<conio.h>

void main(){
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=100);
    getch();
}