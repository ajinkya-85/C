/* Write a program to accept three digit number from the user and check whether it is armstrong number 
or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,onum;
    printf("Enter three digit number :- ");
    scanf("%d",&num);
    onum=num;
    if(num>=100)
    {
        int l1,l2,r;
        l1=num%10;
        num/=10;
        l2=num%10;
        num/=10;
        r=(l1*l1*l1)+(l2*l2*l2)+(num*num*num);
        if(r==onum)
        {
            printf("%d is Armstrong number.",onum);
        }
        else{
            printf("%d is not armstrong number.",onum);
        }
    }
    else{
        printf("Number is not three digit.");
    }
    getch();
    return 0;
}