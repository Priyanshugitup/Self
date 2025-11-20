#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int i;
    for(i = 0;i<=7;i++){
        if(i%2!=0){
            arr[i] = arr[i]*2;
        }
        else if(i%2==0){
            arr[i]=arr[i]+10;
        }
    }
    for(i=0;i<=7;i++){
    printf("arr [%d]: %d\n",i,arr[i]);
    }
    return 0;
}