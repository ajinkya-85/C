// w.a.p to find largest of two using pointers.
#include<stdio.h>
#include<conio.h>

void large(int *a,int *b){
    *a > *b ? printf("%d is large",*a):printf("%d is large",*b);
}

int main(){
    int a,b;
    printf("Enter two no. :- ");
    scanf("%d%d",&a,&b);
    large(&a,&b);
    return 0;
}
