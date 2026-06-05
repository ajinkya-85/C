/* Define a function to perform addition of two no. and call it form main */
#include<stdio.h>   
#include<conio.h>

int add(int a,int b){
    return a+b;
}

int main(){
    int num1 ,num2;   
    printf("Enter two no. :- ");
    scanf("%d%d",&num1,&num2);
    printf("Addition :- %d",add(num1,num2));
    getch();
    return 0;
}