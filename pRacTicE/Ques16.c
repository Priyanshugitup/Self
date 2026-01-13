// Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total no of the element: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the element to enter: ");
    scanf("%d", &x);
    int p;
    printf("Enter the position to enter: ");
    scanf("%d", &p);
    if (p > n)
    {
        printf("Enter valid position.");
        return 1;
    }
    for (int i = n; i > p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = x;
    printf("\nArray after insertion.\n");
    for (int i = 0; i <= n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}