#include<stdio.h>
int factorial(int x){
    if(x==1 || x==0){
        return 1; // ek bar agar return challa to wo particular function khatm
    }             // aur function khatm hone ke bad wo waha jati hai jaha se wo call hui thi
    return x*factorial(x-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}
