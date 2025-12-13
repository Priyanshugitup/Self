#include <stdio.h>
#include <string.h>
int main(){
    char s1[] = "Physics Wallha";
    // char *s2 = s1; // s2 is a shallow copy
    // s1[0] = 'm';
    // printf("%s",s2);
    // char s2[] = "Physics Wallha";
    // s2[0] = 'M';
    // both string are different
    char *s2;
    s2 = s1;
    //s2 = "College Wallha";
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}