#include <stdio.h>

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int crr[7];
    for(int i=0;i<=6;i++){
        crr[i] = arr[6-i];
    }
    printf("crr[7]:");
    for(int i=0;i<=6;i++){
        
        printf(" %d ",crr[i]);
    }
    return 0;
}