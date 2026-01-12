// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total no. of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the elements of the array in asscending order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    int x;
    printf("Enter the element to enter: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            for (int k = n; k > i; k--)
            {
                arr[k] = arr[k - 1];
            }
            arr[i] = x;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        arr[n] = x;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}