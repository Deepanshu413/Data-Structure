#include<stdio.h>
int binary(int arr[],int,int,int);
int main()
{
    int arr[100],n,data;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the ement to be found");
    scanf("%d",&data);
    int searchIndex= binary(arr,data,0,n);
    if(searchIndex==-1)
    printf("Element not found");
    else
    printf("Element %d found at index at %d ",data,searchIndex);
    return 0;
}
int binary(int arr[100],int data,int low ,int high)
{
    int mid;
    if (low > high)
        return -1;
    else
    {
        int mid = (low + high) / 2 ;
        if(data == arr[mid])
            return mid;
        else if (data > arr[mid])
            return binary(arr, data, mid + 1, high);
        else
            return binary(arr, data, low, mid - 1);
    }
    return -1;
}
int binary(int arr[100],int data,int low ,int high)
{
    
}