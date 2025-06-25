/* Write a program to print 1 to 10 in reverse order.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    getch();
    return 0;
}