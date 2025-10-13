//  Declare a global variable outside all functions
// and use it inside various functions to understand its accessibility.

#include <stdio.h>

int count = 0;

void increment() {
    count++;
    printf("Count after increment: %d\n", count);
}

void decrement() {
    count--;
    printf("Count after decrement: %d\n", count);
}

int main() {
    printf("Initial count: %d\n", count);
    increment();
    increment();
    decrement();
    printf("Final count: %d\n", count);
    return 0;
}
