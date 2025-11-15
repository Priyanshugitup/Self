#include<stdio.h>
int min(int x,int y){
    if(x>y)
    return y;
    else
    return x;
}
int gcd(int x,int y){
    int hcf;
    for(int i = 1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf = i;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter seconfd number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The G.C.D. of %d and %d is %d.",a,b,hcf);
    return 0;
}