// define a function which externally fills square and cube of the integer.
#include<stdio.h>
#include<conio.h>

void logic(int *n,int *s, int *c); //function declaration.

int main(){
    int n,sq,cu;
    printf("Enter a no. :- ");
    scanf("%d",&n); 
    fflush(stdin);
    logic(&n,&sq,&cu);
    printf("Square :- %d\nCube:- %d",sq,cu);
    return 0;
}

void logic(int *n,int *s, int *c){
    *s = *n * *n;
    *c =*n * *n * *n;
}