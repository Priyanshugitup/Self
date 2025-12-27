// WAP to print given pattern.

// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5 

#include <stdio.h>

int main(){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++ ){  
        int x = 65;
        for(int j=1;j<=n;j++){
            if(i%2==0){
            char ch= (char) x;
            printf("%c ",ch);
            if(j==i) break;
            x++;
            }
            else{
                printf("%d ",j);
                if(j==i) break;
            }
        }
        printf("\n");
    }
    return 0;
} 