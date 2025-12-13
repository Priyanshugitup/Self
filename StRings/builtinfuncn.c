#include <stdio.h>
#include <string.h>
int main(){
    char *str1 = "Physics Wallha";
    //char str1[] = "Physics Wallha";
    char str2[20];
    int x = strlen(str1);
    printf("%d\n",x);
    strcpy(str2,str1);
    printf("%s",str2);
    return 0;
}