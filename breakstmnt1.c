#include <stdio.h>

int main(){
    int num ,i;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("The given number is not a prime number.");
            break;
        }
    }
    if(i==num){
        printf("It is a Prime number.");
    }
    return 0;
}