// #include <stdio.h>

// int main(){
//     int x=3;
//     float y=3.0;
//     if(x==y)
//     printf("x and y are equal.");
//     else
//     printf("x and y are not equal.");
//     return 0;
// }

#include <stdio.h>

int main(){
    int x=3,y,z;
    y=x=10;
    z=x<10;
    printf("x=%d,y=%d,z=%d",x,y,z);
    return 0;
}