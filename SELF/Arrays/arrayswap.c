#include <stdio.h>
void fun(int arr[]){ //yaha par array ki size likhne ki zrurt nhi hai kyuki abhi funcn ko nahi pata kaun sa array pass kia ja raha hai
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main(){
    int arr[2] = {1,2};
    printf("%d  %d\n",arr[0],arr[1]);
    fun(arr);//yaha par sirf array ka name pass karna hota hai
    printf("%d  %d\n",arr[0],arr[1]);
    return 0;
}