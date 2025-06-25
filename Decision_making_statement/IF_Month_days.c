/* Write a program to accept month number from the user and print how many days that month have.*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int m;
    printf("Enter month number :- ");
    scanf("%d",&m);
    if(m==2)
    {
        printf("Days :- 28-29");
    }
    if(m==4 || m==9 || m==11 || m==6)
    {
        printf("Days :- 30");
    }
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        printf("Days :- 31");
    }
    getch();
    return 0;
 }