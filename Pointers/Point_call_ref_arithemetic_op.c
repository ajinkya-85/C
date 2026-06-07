// w.a.p. to perform arithmetic op. using call by reference.
#include<stdio.h>
#include<conio.h>

void operations(int *a,int *b,int *add,int *sub,int *mul,int *div){
    *add = *a + *b;
    *sub = *a - *b;
    *mul = *a * *b;
    *div = *a / *b;
}

int main(){
    int a,b,add,sub,mul,div;
    printf("Enter two no. :- ");
    scanf("%d%d",&a,&b);
    operations(&a,&b,&add,&sub,&mul,&div);
    printf("\nAddition :- %d",add);
    printf("\nsubtraction :- %d",sub);
    printf("\nmultiplication :- %d",mul);
    printf("\ndivision :- %d",div);
    return 0;
}