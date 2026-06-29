//w.a.p.t. accept 10 ele. from the user and overwritten them with their square.
#include<stdio.h>
#include<conio.h>

int main(){
    int ar[10],i;
    printf("Enter 10 integer :- ");
    for(i =0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    printf("Square:- ");
     for(i =0;i<10;i++){ 
        printf("%d ",ar[i]*=ar[i]);
    }
    return 0;
}