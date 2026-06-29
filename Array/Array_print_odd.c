// w.a.p.t.a array elements and print the elements present at the ODD index only.
#include<stdio.h>
#include<conio.h>

int main(){
    int ar[10],i;
    printf("Enter array ele. :- ");
    for(i=0;i<10;i++){
        scanf("%d",&ar[i]);
    }
    printf("\n Only elements which is present at odd index no. :- ");
    for(i=0;i<10;i+=2){
        printf("%d ",ar[i]);
    }
    return 0;
}