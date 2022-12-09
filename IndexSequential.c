#include <stdio.h>
int indexedSequentialSearch(int arr[],int n,int data)
{
    int GN = 3;
    int elements[GN], indices[GN], i, set = 0;
    int j = 0, ind = 0, start, end;
    for (i = 0; i < n; i += 3)
    {
        elements[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }
    if (k < elements[0])
    {
        printf("Not found");
        exit(0);
    }
    else
    {
        for (i = 1; i <= ind; i++)
            if (k <= elements[i])
            {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
    }
    if (set == 0)
    {
        start = indices[GN - 1];
        end = GN;
    }
    for (i = start; i <= end; i++)
    {
        if (k == arr[i])
        {
            j = 1;
            break;
        }
    }
    return -1;
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
    indexedSequentialSearch(arr,n,data);
    return 0;
}