/* Write a program to print triangle pattern as shown below
*
* *
* * *
* * * *
* * * * *
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
            printf("*  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}