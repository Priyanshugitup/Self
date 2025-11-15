#include <stdio.h>

int main(){
    int a = 25;
    int* x = &a; //int* -> int ka address store karta hai
    // *x = 7; // a is changed
    int **y = &x; // (Double pointer) ,int** -> int* ka address store karta hai
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%p\n",*y);
    printf("%p\n",&x);
    printf("%p",&y);
    return 0;
}