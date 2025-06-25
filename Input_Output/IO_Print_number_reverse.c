// Write a program to accept a four digit number and print it reverse.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rnum=0,r;
    printf("Enetr a four digit number :- ");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        rnum=(rnum*10)+r; 
        num=num/10;
    }
    printf("Reverse number :- %d",rnum);
    getch();
    return 0;   
}