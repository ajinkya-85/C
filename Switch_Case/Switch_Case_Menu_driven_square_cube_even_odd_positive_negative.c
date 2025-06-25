/*  Write a menu driven program for following choice.
    1 - Square
    2 - Cube
    3 - Even/Odd
    4 - +ve/-ve
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // for exit()

int main(){
    int num,uc;
    while(1){
        printf("Enter a number :- ");
        scanf("%d",&num);
        printf("Press 1 :- Square\n");
        printf("Press 2 :- Cube\n");
        printf("Press 3 :- Even/Odd\n");
        printf("Press 4 :- +ve/-ve\n");
        printf("Press 5 :- Exit\n");
        scanf("%d",&uc);
        switch(uc){
            case 1 : printf("Square :- %d\n",num*num);
                     break;
            case 2 : printf("Cube :- %d\n",num*num*num);
                     break;
            case 3 : if(num%2==0){
                        printf("EVEN\n");
                    }else{
                        printf("ODD\n");
                    }
                     break;
            case 4 : if(num>0){
                        printf("Positive\n");
                    }else{
                        printf("Negative\n");
                    }
                     break;
            case 5 : exit(0);
                     break;
            default : printf("Invalid choice\n");
        }
    }
    getch();
    return 0;
}