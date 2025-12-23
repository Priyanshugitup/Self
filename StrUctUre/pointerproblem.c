#include <stdio.h>
typedef int* int_pointer;
int main(){
    int x = 5,y = 7;
    //int* a,b; // computer reads it as int* a and int b
    int_pointer a = &x,b = &y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}