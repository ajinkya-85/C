// w.a.p. to accept elements from the user and print them in reverse order..
#include<stdio.h>
#include<conio.h>

int main(){
    int a[5],i;
    printf("Enter 5 ele. :-");
    for(i =0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\nIn reverse order :- \n");
    for(i=4;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}