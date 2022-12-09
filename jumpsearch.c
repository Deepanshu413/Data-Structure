#include<stdio.h>
#include<math.h>
int jumpsearch(int a[],int ,int);
int main()
{
    int arr[100],n,data;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the elelemnt of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be find: ");
    scanf("%d",&data);
    int searchindex = jumpsearch(arr,n,data);
    if(searchindex==-1)
    printf("Element not found!!");
    else
    printf("the element %d found at the index: %d",data,searchindex+1);
    return 0;
}
int jumpsearch(int arr[100],int n,int data)
{
    int i=0;
    int m=sqrt(n);
    while(i<n&&data>arr[i])
    {
        i=i+m;
    }
    if(i<n)
    {
        if(arr[i]==data)
        return i;
        else
        {
            int start = i-m+1;
            int end = i-1;
            for(int j=start;j<end;j++)
            {
                if(data==arr[j])
                return j;
            }
            return -1;
        } 
    }
    else
    return -1;
}