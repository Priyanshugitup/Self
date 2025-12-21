// Take positive number input and tell if it is divisible by 3 and 5.

#include <stdio.h>

int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x % 3 == 0 || x % 5 == 0)
        if(x%15!=0)
        printf("It is divisible by  3 or 5 but not by 15.");
    else
        printf("It is divisible by 15.");
    return 0;
}