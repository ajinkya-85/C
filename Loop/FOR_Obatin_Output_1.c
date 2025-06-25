/* Write a program to obtain following output.
        1   11  21  31  41  
        2   12  22  32  42
        3   13  23  33  43
        |   |    |   |   |
        10  20  30  40  50
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n",i,i+10,i+20,i+30,i+40);
    }
    getch();
    return 0;
}