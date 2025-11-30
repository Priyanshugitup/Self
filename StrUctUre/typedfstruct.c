#include <stdio.h>
#include <string.h>
int main(){
    typedef struct book{
        char name[40];
        float price;
        int noOfPages;
    }book;

    book a;
    book b;
    book c;
    book d;

    a.noOfPages = 100;
    a.price = 411.5;
    strcpy(a.name,"Stranger Things");
    
    printf("%d\n",a.noOfPages);
    printf("%.2f\n",a.price);
    printf("%s\n",a.name);
    return 0;
}