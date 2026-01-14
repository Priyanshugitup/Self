// Delete an element from an array.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the total no of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the element to delete: ");
    scanf("%d",&x);
    int found=0;
    for(int i=0;i<n;i++){
        if(arr [i]==x){
            found=1;
            for(int j=i;j< n-1;j++){
                arr[j]=arr[j+1];    
            }
            break;
        }
    }
    if(found==0){
        printf("Element not present.");
    }
    else{
    for(int i=0;i<(n-1);i++){
        printf("arr [%d] = %d\n",i,arr[i]);
    }
}
    return 0;
}

