// WAP to print given pattern.

// ****
// ***
// **
// *

#include <stdio.h>

int main(){
    int l,b;;
    printf("Enter no of rows: ");
    scanf("%d",&l);
    printf("Enter no of columns: ");
    scanf("%d",&b);
    for(int i=1;i<=l;i++ ){  
        for(int j=1;j<=b;j++){
            printf("*");
            if((j+i)==(b+1)) break;
        }
        printf("\n");
    }
    return 0;
}