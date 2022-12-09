#include <stdio.h>
int interpolationSearch(int arr[],int,int);

int main()
{
    int n,arr[100],data;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the element of array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be found: ");
    scanf("%d",&data);
    data =9;
    int index = interpolationSearch(arr, n, data);
    if (index == -1)
    {
        printf("Element not found in the array");
    }
    else
    {
        printf("Element found at index %d", index);
        
    }
    return 0;
}
int interpolationSearch(int arr[100], int n, int data)
{
    if (n == 0)
    {
        return -1;
    }
    int low = 0, high = n - 1, mid;
    while (arr[high]!=arr[low] && data >= arr[low] && data <= arr[high])
    {
        mid = low + ((data - arr[low]) * (high - low) / (arr[high] - arr[low]));
        if (data == arr[mid])
        {
            printf("\n%d\n",mid);
            return mid;
        }
        else if (data < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (data == arr[low])
    {
        printf("\n%d\n",low);
        return low;
    }
    else
    {
        return -1;
    }
}