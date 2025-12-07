#include <stdio.h>

int main(){
    // FILE* ptr = fopen("file1.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    // printf("%s",str);
    // return 0;
    FILE* ptr = fopen("PW.txt","w"); // creating a file
    char str[] = "Placement lagegi yahi se"; // this will get printed in the file created
    fputs(str,ptr);
    fclose(ptr);
}