// w.a.p to swap values of two integer using call by reference.
#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int a,b;
    printf("Enter two integer :- ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swap :- %d is a And %d is b",a,b);
    return 0;
}