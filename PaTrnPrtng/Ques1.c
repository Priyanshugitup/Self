// WAP to print the given pattern of star rectangle.

// **************
// **************
// **************
// **************

#include <stdio.h>

int main(){
    int l,b,j;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++ ){
        for(j=1;j<=l;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}