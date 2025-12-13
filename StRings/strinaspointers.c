#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "College Wallha";
    char *ptr = str; // ptr now points to str[0]
    // printf("%p\n",ptr);
    // printf("%p\n",&str[0]);
    // printf("%p",str); // kisi bhi string ka address uske zeroth index ke element ka address hota h
    for(int i = 0;*ptr!='\0';i++,ptr++){// ptr++ means address+1
        printf("%c",*ptr); //*ptr means fetching the value stored at the address which is stored at ptr
    }
    return 0;
}