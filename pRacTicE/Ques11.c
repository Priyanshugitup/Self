// Merge two arrays.

#include <stdio.h>

int main()
{
    int n1, n2;
    // int arr[n1];  dont do like ths dont declare withou taking input of n1 and n2
    // int brr[n2];
    printf("Enter length of the first array: ");
    scanf("%d", &n1);
    int arr[n1];
    printf("\nEnter elements of first array:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter length of the second array: ");
    scanf("%d", &n2);
    int brr[n2];
    printf("\nEnter elements of second array:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &brr[i]);
    }
    int crr[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }
    int x = 0;
    for (int j = n1; j < (n1 + n2); j++)
    {
        crr[j] = brr[x];
        x++;
    }
    printf("merged array:\n");
    for (int i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", crr[i]);
    }
    return 0;
}