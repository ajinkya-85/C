// w.a.p.t declare an array of size 20 and fill it with no. 1 to 20 serial.
#include<stdio.h>
#include<conio.h>

int main(){
    int ar[20],i;
    for(i=0;i<20;i++){
        ar[i]=i+1;
        printf("%d ",ar[i]);
    }
    return 0;
}