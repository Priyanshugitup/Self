#include <stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,4,6,7};
    int x;
    int check=0;
    printf("Enter the value to check: ");
    scanf("%d",&x);
    for(int i=0;i<=7;i++){
        if(arr[i]==x){
            check=1;
        //printf("%d is present in the given array and it's index is arr[%d]\n",x,i);
        //break;
        }
    }
    if(check==1){
        printf("%d is present in the given array.\n",x);
    }
    else{
        printf("%d is NOT present in the given array.",x);
    }
    return 0;
}