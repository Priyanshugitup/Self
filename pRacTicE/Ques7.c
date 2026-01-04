// Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int x)
{
    int product = 1;
    for (int i = 0; x != 0; i++)
    {
        product = product * x;
        x = x - 1;
    }
    return product;
}
int main()
{

    int x, y, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    int num = x;
    for (int i = 0; x != 0; i++)
    {
        y = x % 10;
        sum = sum + factorial(y);
        x = x / 10;
    }
    if (num == sum)
        printf("It is a strong number.");
    else
        printf("It is NOT a strong number.");
    return 0;
}