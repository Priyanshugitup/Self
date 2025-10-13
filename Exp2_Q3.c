// Declare variables within different code blocks (enclosed by curly braces) 
// and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    int a = 10;
    printf("a in main block = %d\n", a);

    {
        int b = 20;
        printf("Inside inner block:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }

    if (1) {
        int c = 30;
        printf("Inside if block:\n");
        printf("a = %d, c = %d\n", a, c);
    }

    printf("Back in main block:\n");
    printf("a = %d\n", a);
    return 0;
}
