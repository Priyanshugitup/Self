// WAP to print given pattern.

// A
// A B
// A B C
// A B C D

#include <stdio.h>

int main(){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++ ){  
        int x = 65;
        for(int j=1;j<=n;j++){
            char ch= (char) x;
            printf("%c ",ch);
            if(j==i) break;
            x++;
        }
        printf("\n");
    }
    return 0;
} 