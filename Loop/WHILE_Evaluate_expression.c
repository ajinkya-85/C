/* Write a program to evaluate following expression.
1/1*2+2/2*2+3/3*3+---------8/8*2
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a=1,r=0;
    while(a<=8)
    {
        r+=(a/(a*a));
        a++;
    }
    printf("Result :- %.2f\n",r);
    getch();
    return 0;
}