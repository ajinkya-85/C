/* Write a program to print triangle pattern as shown below
1 2 3 4  5  6  7  8  9  10
2 4 6 8  10 12 14 16 18 20
3 6 9 12 15 18 21 24 27 30
4 - - - - - -- - - - -- 40
| - - - - - - - -- - - - |
10 - - - - -- - - - - - 100
*/
#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d  ",i*j);
        }
        printf("\n");
    }
    getch();
    return 0;
}