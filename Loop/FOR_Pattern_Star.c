/*  Write a program to print triangle pattern as shown below
        *
        *
        *
        * 
* * * * * * * * *  
        * 
        * 
        * 
        * 
        * 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==5 || j==5)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}