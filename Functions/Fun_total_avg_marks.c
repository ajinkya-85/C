/* Define a function to accept marks of five subject and print total marks and average marks.*/
#include<stdio.h>
#include<conio.h>

int total(int a ,int b, int c ,int d, int e){
    return a+b+c+d+e;
}

float avg_Marks(int a ){
    return (a/5);
}

void main(){
    int n1,n2,n3,n4,n5;
    printf("Enter the marks of the five subjects :- ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    printf("Total marks of the student :- %d\n",total(n1,n2,n3,n4,n5));
    printf("Average marks of the student :- %.2f",avg_Marks(total(n1,n2,n3,n4,n5)));
    getch();
}