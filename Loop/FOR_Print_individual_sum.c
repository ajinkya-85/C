/* Write a program to accept 20 numbers from the user and print individual sum of even and odd number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,esum=0,osum=0;
    printf("Enter 20 numbers :- ");
    for(i=1;i<=20;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            esum=esum+num;
        }
        else{
            osum=osum+num;
        }
    }
    printf("Even sum :- %d\n",esum);
    printf("Odd sum :- %d",osum);
    getch();
    return 0;
}