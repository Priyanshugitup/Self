// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main(){
    int n,rem,j;
    printf("Enter the last number: ");
    scanf("%d",&n);
    printf("All prime numbers from 1 to %d: ",n);
    for(int i=2;i<=n;i++){
        if(i==2){
            printf("2 ");
            continue;
        }
        for(j=2;j<i;j++){
            rem = i%j;
            if(rem==0) break;
        }
        if(i==j) printf("%d ",i);
    }
    return 0;
}