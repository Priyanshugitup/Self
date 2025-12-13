// Input and Output of string without loops.

#include <stdio.h>

int main(){
    //char arr[] = "College Wallah is best";
    char str[40]; // must give size if i want to take input from user
    printf("Enter input: ");
    //scanf("%s",str); // no need of & because its an array and also can't print space, only first word will be considered
    scanf("%[^\n]s",str);
    //gets(str); // Entire sentence can be input
    printf("%s",str);
    //printf("%s",str);
    //puts(arr);
    //puts("Hello World");
    return 0;
}