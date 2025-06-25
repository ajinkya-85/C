/* Write a program to accept three values from the user and print largest of them.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers :- ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("%d is Largest.",n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("%d is Largest.",n2);
    }
    else{
        printf("%d is Largest.",n3);
    }
    getch();
    return 0;
}

// Above logic is using logical operator and following is without logical operator.
/*
if(n1>n2)
{
    if(n1>n3)
    {
        printf("n1 is largest");
    }
    else{
        printf("n3 is largest");
    }
}
else{
    if(n2>n3)
    {
        printf("n2 is largest");
    }
    else{
        printf("n3 is largest");
    }
}*/