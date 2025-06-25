/* Write a program to accept a five integer from the user and print smallest of them.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter five numbers :- ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if(n1<n2)
    {
        if(n1<n3)
        {
            if(n1<n4)
            {
                if(n1<n5)
                {
                    printf("%d is smallest.",n1);
                }
                else{
                    printf("%d is smallest.",n5);
                }
            }
            else{
                if(n4<n5)
                {
                    printf("%d is smallest.",n4);
                }
                else{
                    printf("%d is smallest.",n5);
                }
            }
        }
        else{
            if(n3<n4){
                printf("%d is smallest.",n3);
            }
            else{
                printf("%d is smallest.",n4);
            }
        }
    }
    else{
        if(n2<n3)
        {
           if(n2<n4)
           {
                if(n2<n5)
                {
                    printf("%d is smallest.",n2);
                }
                else{
                    printf("%d is smallest.",n5);
                }
           }
           else{
                if(n4<n5)
                {
                    printf("%d is smallest.",n4);
                }
                else{
                    printf("%d is smallest.",n5);
                }
           }
        }
        else{
            if(n3<n4)
            {
                printf("%d is smallest.",n3);
            }
            else{
                printf("%d is smallest.",n2);
            }
        }
    }
    getch();
    return 0;
}