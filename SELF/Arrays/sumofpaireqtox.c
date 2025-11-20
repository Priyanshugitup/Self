#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int i;
    int j;
    int a=0;
    for(i = 0;i<=7;i++){
        for(j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==9){
                a = a+1;
                
            }
            
        }
    }  
    printf("Total no of pairs = %d",a);
    return 0;
}