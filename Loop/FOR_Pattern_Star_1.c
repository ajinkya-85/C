/* Write a program to print triangle pattern as shown below
        . 
      . . . 
    . . . . . 
  . . . . . . . 
. . . . . . . . . 
  . . . . . . . 
    . . . . . 
      . . . 
        . 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=1,e=1;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
        {
            for(j=1;j<=5-i;j++)
            {
                printf("  ");
            }
            for(j=1;j<=2*i-1;j++)
            {
                printf(". ");
            }
        }
        else{
            for(j=1;j<=n;j++)
            {
                printf("  ");
            }
            for(j=1;j<=8-e;j++)
            {
                printf(". ");
            }
            e+=2;
            n++;
        }
        printf("\n");
    }
    getch();
    return 0;
}