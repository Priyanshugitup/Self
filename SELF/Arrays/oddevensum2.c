#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int i;
    int oddsum = 0;
    int evensum = 0;
    for(i = 0;i<=7;i++){
        if(i%2!=0){
            oddsum = oddsum+arr[i];
        }
        else if(i%2==0){
            evensum=evensum+arr[i];
        }
    }
    int difference = evensum-oddsum;
    printf("Difference = %d",difference);
    return 0;
}