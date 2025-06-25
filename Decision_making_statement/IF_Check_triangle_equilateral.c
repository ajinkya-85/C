 // Write a program to accept three sides of a triangle and check triangle is equilateral pr not.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int s1,s2,s3;
    printf("Enter three sides of triangle :- ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2&&s2==s3&&s1==s3)
    {
        printf("Triangle is equilatyeral.");
    }
    if(s1!=s2 || s2!=s3 || s1!=s3)
    {
        printf("Triangle is not eqilateral.");
    }
    getch();
    return 0;
 }

 // Another logic for solving this..(flag logic)
 /*
 int s1,s2,s3,flag=0;
 printf(------);
 scanf(-------);
 if(s1==s2)
 {
    if(s2==s3)
    {
        printf("Equilateral.");
        flag++;
    }
 }
 if(flag==1)
 {
     printf("Not equilateral.");
 }
 */