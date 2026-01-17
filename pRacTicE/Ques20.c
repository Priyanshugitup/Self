// Rotate an array to the right by k positions.

#include <stdio.h>

int main()
{
    int n, x;
    printf("Enter the total no of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the no of position to rotate by: ");
    scanf("%d", &k);
    k = k % n; // SAFETY: Handle cases where k > n
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        int new_pos = (i + k) % n;
        brr[new_pos] = arr[i];
    }
    printf("\nOrriginal array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nRotated array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, brr[i]);
    }
    return 0;
}