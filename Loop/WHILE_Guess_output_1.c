/* Find out the output of below program.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=52,j=72;
    while(i<=100 && i!=j)
    {
        printf("%d - %d\n",i,j);
        i=i+2;
        j=j-3;
    }
    getch();
    return 0;
}