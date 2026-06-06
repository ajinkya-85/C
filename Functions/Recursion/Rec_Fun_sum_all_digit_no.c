// Prepare a recursive function to print sum of all the digits of the no.
#include<stdio.h>
#include<conio.h>

int sum(int n,int s){
    s=s+(n%10);
    n=n/10;
    if(n>0){
        sum(n,s);
    }else{
        return s;
    } 
}

int main(){
    int n;
    printf("Enter a no. :- ");
    scanf("%d",&n);
    printf("Sum of all digits :- %d",sum(n,0));
    getch();
    return 0;
}

/*
while loop  logic
int sum=0 ,n=555;

while(n>0){
    n=n%10;
    sum+=n;
    n/=10;
}
*/