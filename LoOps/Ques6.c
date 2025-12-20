#include <stdio.h>

int main(){
    int x,y;
    int temp,sum = 0;
    printf("Enter number: ");
    scanf("%d",&x);
    for(int i=0;x!=0;i++){
        y=x%10;
        temp = y;
        sum = sum+temp;
        x=x/10;
    }
    printf("sum of digits: %d",sum);
    return 0;
}