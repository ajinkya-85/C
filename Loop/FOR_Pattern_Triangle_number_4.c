/* Write a program to print triangle pattern as shown below
1
2 4
3 6 9
4 8 12 16
- - -  -   -
10 -- -- - - 100
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }
    getch();
    return 0;
}