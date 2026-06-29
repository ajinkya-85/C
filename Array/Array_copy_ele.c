// w.a.p.t.a elements from one array and copy them into another array.
#include<stdio.h>
#include<conio.h>

int main(){
    int ar1[5],ar2[5],i;
    printf("Enter ele. :- ");
    for(i=0;i<5;i++){
        scanf("%d",&ar1[i]);
        ar2[i]=ar1[i];
        printf("%d ",ar2[i]);
    }

    return 0;
}