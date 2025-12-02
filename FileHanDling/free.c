#include <stdio.h>
#include <stdlib.h>

 int main(){
    // int* ptr = NULL;
    // printf("%p",ptr);
    // return 0;
    int* ptr = (int*) calloc(10,4);
    int* p = ptr;
    ptr++;
    //free(ptr);// not do this
    free(p);
 }