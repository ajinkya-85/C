// Prepare a recursive function to print all the even no. from 1 to 100.
#include<stdio.h>
#include<conio.h>

void print_Even(int i){
    if(i%2==0){
        printf("%d is even\n",i);
    }
    i++;
    if(i<=100){
        print_Even(i);
    }
}

int main(){
    print_Even(1);
    getch();
    return 0;
}