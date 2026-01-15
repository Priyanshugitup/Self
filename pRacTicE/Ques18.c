// Find the second largest element in an array.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the total no of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int z=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>z) z=arr[i];
    }
    
    int found=0;
    for(int i=0;i<n;i++){
        if(arr [i]==z){
            found=1;
            for(int j=i;j< n-1;j++){
                arr[j]=arr[j+1];    
            }
            n--;
            break;
        }
    }
    int x=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>x) x=arr[i];
    }
    
   printf("Second largest element in the array is: %d",x);

    return 0;
}