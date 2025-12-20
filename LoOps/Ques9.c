// WAP to print the sum of given number and its reverse.

#include <stdio.h>

int main(){
    int x,temp,reversed_num = 0;
    printf("Enter number: ");
    scanf("%d",&x);
    int y = x;
    while(x!=0){
        reversed_num = reversed_num+(x%10);
        x=x/10;
        if(x==0) break;
        reversed_num=reversed_num*10;
        }
        int sum = reversed_num+y;
    printf("Sum of given number and its reverses: %d",sum);
    return 0;
}