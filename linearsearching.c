#include<stdio.h>

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
    printf("\nNow for the Linear Search Program\n");
    int searchIndex= linearSearch(arr,data,n);
    printf("\nOutput for linear searching program: ");
    if(searchIndex==-1)
    printf("Element not found");
    printf("Element %d found at index at %d ",data,searchIndex);
    return 0;
}
int linearSearch(int arr[],int data, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        return i;
    }
    return -1;
}