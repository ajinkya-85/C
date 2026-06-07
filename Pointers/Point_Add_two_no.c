// w.a.p. to add two no. using pointers.
#include<stdio.h>
#include<conio.h>

void add(int *p1,int *p2, int *r){
    *r = *p1 + *p2;
}

int main(){
    int a,b,c;
    printf("Enter two no. :- ");
    scanf("%d%d",&a,&b);
    add(&a,&b,&c);
    printf("Addition :- %d",c);
    return 0;
}