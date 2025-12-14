// Take integer input and print the absolute value of that integer.

#include <stdio.h>

int main(){
    int x;
    printf("Enter number: ");
    scanf("%d",&x);
    if(x>=0) printf("Absolute value of %d is %d.",x,x);
    else if(x<0) printf("Absolute value of %d is %d.",x,-x);
    return 0;
}