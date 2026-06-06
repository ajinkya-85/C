// Prepare a recursive function to find the factorial of the no.
#include<stdio.h>
#include<conio.h>

int factorial(int n,int i,int f){
    f=f*i;
    i++;
    if(i<=n){
        factorial(n,i,f);
    }
    else{
    return f;
    }

}

int main(){
    int n;
    printf("Enter a no. :- ");
    scanf("%d",&n);
    printf("Factorial is :- %d",factorial(n,1,1));
    getch();
    return 0;
}

/*
Also remember whenever u have to write recursive function make logic in while first then transform it into recursive().


int i=1,n=5;
long f=1;
while(i<=5){
    f=f*i;
    i++;
}
*/