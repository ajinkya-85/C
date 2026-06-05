/*Define a function to accept a no. from the user and print whether it is greater than 10 or not. */
#include<stdio.h>
#include<conio.h>

int logic(int a){
    return a>10 ? 1 : 0; 
}

int main(){
    int a;
    printf("Enter a no. :- ");
    scanf("%d",&a);
    logic(a)?printf("Yes"):printf("No");
    return 0;
}