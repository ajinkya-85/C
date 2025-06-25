/* Write a program to print triangle pattern as shown below
1  
2  12  
24  2880  2073600  
5040  -    -       -
 -    -    -        -      -
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,l,k=1;
    long facto=1;
    for(i=1;i<=5;i++)
    {
        facto=1;
        for(j=1;j<=i;j++)
        {
            for(l=k;l>=1;l--)
            {
                facto*=l;
            }
            printf("%ld  ",facto);
            k++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
