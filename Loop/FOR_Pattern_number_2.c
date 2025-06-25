/* Write a program to print triangle pattern as shown below
        0 
      1 2 3 
    1 2 3 4 13 
  1 2 3 4 5 6 34 
1 2 3 4 5 6 7 8 70 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=5,sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(j!=(2*i-1)){
                printf("%d ",j);
                sum+=j;
            }
            else{
                printf("%d ",sum);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}