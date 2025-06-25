/* Find out the output of below program.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=52,j=72;
    while(i<=100)
    {
        if(i==j)
        {
            break;
        }
        i=i+2;
        j=j-3;
        printf("%d - %d\n",i,j);
    }
    getch();
    return 0;
}