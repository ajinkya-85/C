/* Write a program to print triangle pattern as shown below
            *
            * *
            * * * 
            * * * * 
            * * * * *
            * * * * * * 
            * * * * *
            * * * *
            * * *
            * * 
            * 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,e=0;
    for(i=1;i<=11;i++)
    {   
        printf("\t");
        if(i<=6)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
        }
        else{
            for(j=1;j<=5-e;j++)
            {
                printf("* ");
            }
            e++;
        }
        printf("\n");
    }
    getch();
    return 0;
}