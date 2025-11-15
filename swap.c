#include <stdio.h>
void swap(int *x,int *y){
    // int temp = a;
    // a = b;
    // b = temp;
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a after swapping is: %d\n",a);
    printf("The value of a after swapping is: %d",b);
    return 0;
}