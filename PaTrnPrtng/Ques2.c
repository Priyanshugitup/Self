// WAP to print the given pattern.

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <stdio.h>

int main(){
    int l,b;;
    printf("Enter no of rows: ");
    scanf("%d",&l);
    printf("Enter no of columns: ");
    scanf("%d",&b);
    for(int i=1;i<=l;i++ ){  // conventionally no of rows/lines -> i
        for(int j=1;j<=b;j++){  // conventionally no of columns -> j
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}