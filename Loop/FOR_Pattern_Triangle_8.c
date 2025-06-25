/* Write a program to print triangle pattern as shown below
          *
        * * *
      * * * * *
     * * * * * * *
   * * * * * * * * *           
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,e=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("* ");
        }
        e++;
        printf("\n");
    }
    getch();
    return 0;
}