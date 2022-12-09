#include<stdio.h>
int quicksort(int arr[100],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(arr[i]<=arr[pivot]&&i<last)
            i++;
            while(arr[j]>arr[pivot])
            j--;
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }  
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
    return 0;
}
int main()
{
    int i, n,arr[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("The Sorted Order is: ");
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
}