// write a recursive function to print multiplication table of the entered no.
#include<stdio.h>
#include<conio.h>

void table(int i,int base){
    printf("%d X %d = %d\n",i,base,i*base);
    base++;
    if(base<= 10){
        table(i,base);
    }
}

int main(){
    table(2,1);
    getch();
    return 0;
}