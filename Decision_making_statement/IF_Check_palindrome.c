/* Write a program to accept fopur digit number from the user and check whether that number is palindrome.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, l1, l2, l3, onum, rnum;
    printf("Enter four digit number :- ");
    scanf("%d", &num);
    onum = num;
    l1 = num % 10;
    num /= 10;
    l2 = num % 10;
    num /= 10;
    l3 = num % 10;
    num /= 10;
    rnum = l1 * 1000 + l2 * 100 + l3 * 10 + num;
    if (rnum == onum)
    {
        printf("%d is palindrome number.", onum);
    }
    if (rnum != onum)
    {
        printf("%d is not palindrome number.", onum);
    }
    getch();
    return 0;
}