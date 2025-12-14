#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr = (int*) malloc(10*4);
    printf("%p\n",ptr); // 00BE17A0
    ptr = realloc(ptr,20*4);
    printf("%p\n",ptr); // 00BE17A0
    ptr = realloc(ptr,200000*4);
    printf("%p",ptr); // 00BF8020
    return 0;
}