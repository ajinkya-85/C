// w.a.p. to accept and print ele. in array.
#include<conio.h>
#include<stdio.h>

int main(){
    int a[5];
    printf("Enter 5 integer :- ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int i=0;
    while(i<5){
        printf("\n%d",a[i]);
        i++;    
    }
    return 0;
}