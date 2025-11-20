#include <stdio.h>
#include <limits.h>
int main(){
    int arr[9]= {100,-10,-500,60,80,-80,80,20,-5};
    int max = arr[0];
    int i,smax=INT_MIN;
    for(i =1;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(i = 0;i<=6;i++){
        if(arr[i] == max)
            continue;
        if(smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}