// Define a function for calculating square and cube of the no.
#include<stdio.h>
#include"conio.h"

int square(int a){
    return a*a;
}

int cube(int a){
    return a*a*a;
}

int main(){
    int a;
    printf("Enter a no.:- ");
    scanf("%d",&a);
    printf("Square :- %d \nCube :- %d\n",square(a),cube(a));
    return 0;
}