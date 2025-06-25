/* Write a program to print pattern as shown below.
* * # * * 
* * # * * 
* * # * * 
* * # * * 
* * # * * 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("* ");
        }
        printf("# ");
        for(k=1;k<=2;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}