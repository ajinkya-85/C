// Write a program to accept two integer from the user and print sum of their last digit.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, sum;
    printf("Enter two integer :- ");
    scanf("%d%d", &n1, &n2);
    sum = n1 % 10 + n2 % 10;
    printf("Sum of last digits :- %d", sum);
    getch();
    return 0;
}