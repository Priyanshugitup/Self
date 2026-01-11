// Search in a sorted array using binary search.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the total no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the ascensing order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the element to search: ");
    scanf("%d", &x);

    int low = 0;
    int high = n - 1;
    int found = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            found = 1;
            printf("arr[%d] = %d", mid, x);
            break;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (found == 0)
    {
        printf("Element not found.");
    }
    return 0;
}