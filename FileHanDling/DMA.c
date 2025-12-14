#include <stdio.h>
#include <stdlib.h>

 int main(){
//     int n; // 4 bytes
//     printf("Enter array's size: ");
//     scanf("%d",&n);
//     //int* arr = new int[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

    // int x =6;
    // int* p = &x;
    // *p = 7; // x = 7

    int* ptr = (int*) malloc(10*4);
    printf("%d",*ptr);
    ptr++; // now it points to next integer
    printf("%d",*ptr);
    ptr++;
    printf("%d",*ptr);
    return 0;
 }