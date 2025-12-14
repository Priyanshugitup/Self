// take positive integer input and tell if it is even or odd.

#include <stdio.h>

int main(){
    int x;
    printf("Enter number: ");
    scanf("%d",&x);
    if(x%2==0) printf("Even");
    else printf("odd");
    return 0;
}