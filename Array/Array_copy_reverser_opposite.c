// w.a.p.t copy elements from one array to another but both arrays must be reverse or opposite.
#include<stdio.h>
#include<conio.h>

int main(){
    int ar1[5],ar2[5],i,j;
    printf("Enter 5 ele. :- ");
    for(i=0;i<5;i++){
        scanf("%d",&ar1[i]);
    }
    printf("Second array ele. :- ");
    for(i=0,j=4;i<5 && j>=0;i++,j--){
        ar2[j]=ar1[i];
    }
    for(i=0;i<5;i++){
        printf("%d ",ar2[i]);
    }
    return 0;
}