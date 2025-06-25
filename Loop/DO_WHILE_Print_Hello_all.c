/* write a program to print "HELLO ALL" ten times using do-while loop. 
*/

#include<stdio.h>
#include<conio.h>
void main(){
    int i=1;
    do{
        printf("HELLO ALL\n");
        i++;
    }while(i<=10);
    getch();
}