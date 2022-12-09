#include <stdio.h>
int min(int x, int y)
{
    return (x < y) ? x : y;
}
int binarySearch(int arr[100], int low, int high, int data)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high)/2;
    if (data == arr[mid])
    {
        return mid;
    }
    else if (data < arr[mid])
    {
        return binarySearch(arr, low, mid - 1, data);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, data);
    }
}
int exponentialSearch(int arr[], int n, int data)
{
    if (n == 0)
    {
        return -1;
    }
    int bound = 1;
    while (bound < n && arr[bound] < data)
    {
        bound *= 2;
    }
    return binarySearch(arr, bound/2, min(bound, n - 1), data);
}
int main()
{
    int arr[10],n,data;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the element of array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the ement to be found: ");
    scanf("%d",&data);
    int index = exponentialSearch(arr, n, data);
 
    if (index != -1)
    {
        printf("Element found at index %d", index);
    }
    else
    {
        printf("Element not found in the array");
    }
    return 0;
}