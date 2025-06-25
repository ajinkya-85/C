/* Write a program to accept four numbers from the user and print largest of them.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter four numbers :- ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1>n2){
        if(n1>n3)
        {
            if(n1>n4)
            {
                printf("%d is Largest.",n1);
            }
            else{
                printf("%d is Largest.",n4);
            }
        }
        else{
            if(n3>n4)
            {
                printf("%d is Largest.",n3);
            }
            else{
                printf("%d is Largest.",n4);
            }
        }
    }
    else{
        if(n2>n3)
        {
            if(n2>n4)
            {
                printf("%d is Largest.",n2);
            }
            else{
                printf("%d is Largest.",n4);
            }
        }
        else{
            if(n3>n4)
            {
                printf("%d is Largest.",n3);
            }
            else{
                printf("%d is Largest.",n4);
            }
        }
    }
    getch();
    return 0;
}