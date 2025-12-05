#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    puts("Enter a string: "); // Automatically adds \n no need to write it
    gets(str);
    //size
    int size = 0;
    for(int i=0;str[i]!='\0';i++){
        size = size +1;
    }
    printf("The size of string input is %d.\n",size);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse of Given string is: ");
    puts(str);
    return 0;
}