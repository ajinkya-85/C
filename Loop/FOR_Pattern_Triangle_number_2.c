/*  Write a program to print triangle pattern as shown below
1
1 4 
1 4 9
1 4 9 16
1 4 9 16 25
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j*j);
        }
        printf("\n");
    }
    getch();
    return 0;
}