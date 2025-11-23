// #include <stdio.h>

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int crr[7];
//     int k,n=7;
//     printf("Enter no. of steps: ");
//     scanf("%d",&k);
//     //crr[0] = arr[k]
//     k=k%n;
//     for(int i=0;i<n;i++){
//         crr[i] = arr[(k+i)%n];
//     }
//     printf("crr[7]:");
//     for(int i=0;i<=6;i++){
//         printf(" %d ",crr[i]);
//     }
//     return 0;
// }
#include <stdio.h>
void reverse(int arr[],int i,int j){ // reverse part of array
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k,n=7;
    printf("Enter no. of steps: ");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("arr[7]:");
    for(int i=0;i<=6;i++){
        
        printf(" %d ",arr[i]);
    }
    return 0;
}