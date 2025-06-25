/*  Write a program to print triangle pattern as shown below
*
# *
# * #
* # * #
* # * # *
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k = 1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(k%2==0)
            {
                printf("#  ");
            }
            else{
                printf("*  ");
            }
            k++;
        }
        printf("\n");
    }
    getch();
    return 0;
}