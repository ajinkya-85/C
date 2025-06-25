 /* Write a program to print Alphabet pattern as shown below.
 A B C D E F G H I J
 A B C D     G H I J
 A B C         H I J
 A B             I J
 A                 J
 */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,s=1;
    char ch='E',ch1='F';
    for(i=1;i<=5;i++)
    {
        for(j='A';j<=ch;j++)
        {
            printf("%c ",j);
        }
        for(j=1;j<s;j++)
        {
            printf("  ");
        }
        for(j=1;j<s;j++)
        {
            printf("  ");
        }
        for(j=ch1;j<='J';j++)
        {
                printf("%c ",j);
        }
        ch1++;
        printf("\n");
        ch--;
        s++;
    }
    getch();
    return 0;
}