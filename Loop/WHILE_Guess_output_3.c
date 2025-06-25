/* Find out the output of below program.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r,s=0;
    printf("Enter any number :- ");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    printf("Result is %d\n",s);
    getch();
    return 0;
}