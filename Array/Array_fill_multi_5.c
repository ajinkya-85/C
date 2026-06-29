// w.a.p.t.print multiples of 5 using array of 20
#include<stdio.h>
#include<conio.h>

int main(){
    int ar[20],i;
    for(i=0;i<20;i++){
        ar[i]=5*(i+1);
        printf("%d ",ar[i]);
    }
    return 0;
}