// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main(){
    int x,i;
    int binaryNum[32];
    printf("Enter number: ");
    scanf("%d",&x);
    int OrigNum = x;
    if(x<0){
        printf("Enter a non - negative number.");
        return 1;
    }
    if(x==0){
        printf("Binary representation of %d is: 0",x);
        return 1;
    }
    for(i=0;x>0;i++){
        binaryNum[i] = x % 2;
        x=x/2;
    }
    printf("Binary representation of %d is: ",OrigNum);
    for(int j=0;j<i;j++){
        printf("%d",binaryNum[j]);
    }
    return 0;
}