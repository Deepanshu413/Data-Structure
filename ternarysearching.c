#include <stdio.h>
int ternarySearch(int l, int r, int data, int arr[])
{
    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (arr[mid1] == data)
        {
            return mid1;
        }
        if (arr[mid2] == data)
        {
            return mid2;
        }
        if (data<arr[mid1])
        {
            return ternarySearch(l, mid1 - 1, data, arr);
        }
        else if (data>arr[mid2])
        {
            return ternarySearch(mid2 + 1, r, data, arr);
        }
        else
        {
            return ternarySearch(mid1 + 1, mid2 - 1, data, arr);
        }
    }
    return -1;
}
int main()
{
    int p,n,data;
    int arr[100];
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be search: ");
    scanf("%d",&data);
    p = ternarySearch(0, n, data, arr);
    printf("position of %d is %d\n", data, p+1);
}