/*  Write a program to print triangle pattern as shown below
*
* *
*   *
*     *
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
            if(j==1 || j==i || i==5)
            {
                printf("*  ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}