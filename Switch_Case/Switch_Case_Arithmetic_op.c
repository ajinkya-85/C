/*  Write a program to perform all arithmetic operation on two integer. 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //for exit()

int main(){
    int n1,n2,uc;
    while(1){
        printf("Enter two no. :- ");
        scanf("%d%d",&n1,&n2);
        printf("OPERATIONS :- \n");
        printf("Press 1 :- Addition\n");
        printf("Press 2 :- Subtraction\n");
        printf("Press 3 :- Division\n");
        printf("Press 4 :- Multiplication\n");
        printf("Press 5 :- Exit\n");
        printf("Enter your choice :- ");
        scanf("%d",&uc);
        
        switch(uc){
            case 1 : printf("Addition :- %d\n",n1+n2);
                     break;
            case 2 : printf("Subtraction :- %d\n",n1-n2);
                     break;
            case 3 : printf("Division :- %d\n",n1/n2);
                     break;
            case 4 : printf("Multiplication :- %d\n",n1*n2);
                     break;
            case 5 : exit(0);
                     break;
            default : printf("Invalid choice\n");
        }
    }
    getch();
    return 0;
}