// w.a.p. to demonstrate how we can return the address from the function.
#include<stdio.h>
#include<conio.h>

int* value(){
    int a=9;
    return &a;
}


int main(){
    int *p=value();
    printf("no. is :- %d",*p);
    return 0;
}

// In the latest version of MinGW this will show the warning.