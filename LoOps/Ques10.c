// Print the sum of this series. 1-2+3-4+5-6+..... upto 'n'.

// #include <stdio.h>

// int main(){
//     int n,sum1 = 0,sum2 = 0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         if(i%2==1) sum1=sum1+i;
//         else sum2=sum2+i;
//     }
//     int total = sum1-sum2;
//     printf("Sum = %d",total);
//     return 0;
// }

#include <stdio.h>

int main(){
    int n,sum;
     printf("Enter number: ");
     scanf("%d",&n);
     if(n%2==0) sum = -(n/2);
     if(n%2!=0) sum = (n/2)+1;
     printf("Sum = %d",sum);
    return 0;
}