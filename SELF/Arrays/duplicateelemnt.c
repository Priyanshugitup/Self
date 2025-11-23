#include <stdio.h>

int main(){
    int arr[7] = {1,2,3,4,5,3,7};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
            printf("%d is Duplicate elemment.",arr[i]);
            }
        }
    }
    
    return 0;
}