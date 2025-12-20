// WAP to print reverse of a given number.

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int x,y,z;
    
//     int temp,count=0,reversed_num = 0;
//     printf("Enter number: ");
//     scanf("%d",&x);
//     y=x;
//     for(int i=0;x!=0;i++){

//         x=x/10;
//         count++;
//     }
//     for(int i=count;i>0;i--){
//         z=y%10;
//         if(i!=1)
//         temp = z*(int)(pow(10,(i-1))+0.5);
//         else if(i==1)
//         temp = z;
//         reversed_num = reversed_num+temp;
//         y=y/10;
//     }
//     printf("Reverse of given number is: %d",reversed_num);
//     return 0;
// }

#include <stdio.h>

int main(){
    int x,temp,reversed_num = 0;
    printf("Enter number: ");
    scanf("%d",&x);
    while(x!=0){
        reversed_num = reversed_num+(x%10);
        x=x/10;
        if(x==0) break;
        reversed_num=reversed_num*10;
        }
    printf("Reverse of given number is: %d",reversed_num);
    return 0;
}