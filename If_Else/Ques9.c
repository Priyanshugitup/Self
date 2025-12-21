#include <stdio.h>

int main(){
    int a;
    char ch;
    if(3+2%5) // any positive integer except zero is TRUE and hence the if statement will work
    printf("This works.\n"); //anything inside the if block will run if anything inside condition is true
    if(a=10)
    printf("Even this works.\n");
    if('A')
    printf("Surprisingly,it also works.\n");
    if(ch ='b')
    printf("Surprise");
    return 0;
}