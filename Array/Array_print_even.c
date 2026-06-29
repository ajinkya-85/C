// w.a.p.t.a array elements and print the elements present at the EVEN no. only.
#include<stdio.h>
#include<conio.h>

int main(){
    int i,a[10];
    printf("Enter 10 ele. :- ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("ODD no. :- ");
    for(i=0;i<10;i++){
        a[i]%2==0 ? printf("%d ",a[i]): printf("");
    }
    return 0;
}