/* Write a program to obtain folloeing output.
        1-10,2-9,3-8
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1,j=10;i<=10;i++,j--)
    {
            printf("%d - %d\n",i,j);
    }
    getch();
    return 0;
}