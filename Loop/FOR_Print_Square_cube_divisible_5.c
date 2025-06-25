/* Write a program to print square and cube of every number from 1 to 500,
 which is divisible by 5.*/
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int i;
    printf("\tNo.\tSquare\tCube\n");
    for(i=1;i<=500;i++)
    {
        if(i%5==0)
        {
            printf("\t%d\t%d\t%d\n",i,i*i,i*i*i);
        }
    }
    getch();
    return 0;
 }