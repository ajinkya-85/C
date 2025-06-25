/*
Write a program to print the alphabets in the following manner:
1. Print the alphabets in uppercase and lowercase.  (A/a)
2. Print the alphabets in serial no. (A/a) up to the given number.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
    int uch,num,i;
    char ch;
    while(1){
        printf("Press 1 :- To print Alphabets\n");
        printf("Press 2 :- To print Alphabets in serial no.\n");
        printf("Press 3 :- To Exit\n");
        printf("Enter your choice :- ");
        scanf("%d",&uch);
        switch(uch){
            case 1:
                printf("A :- Uppercase Alphabets\n");
                printf("a :- Lowercase Alphabets\n");
                printf("Enter your choice :- ");
                fflush(stdin);
                scanf("%c",&ch);
                switch (ch){
                    case 'A' : for(i=65;i<=90;i++){
                                printf("%c ",i);
                            }
                            printf("\n");
                            break;
                    case 'a':
                        for(i=97;i<=122;i++){
                            printf("%c ",i);
                        }
                        printf("\n");
                        break;
                }
                 break;
            case 2 : printf("up to where you want to print :- ");
                     scanf("%d",&num);
                    for(i=65;i<=(num+65);i++){
                        printf("%c ",i);
                    }
                    printf("\n");
                     break;
            case 3 : exit(0);
            default : printf("Invalid Input\n");         
        }
    }
    getch();
}