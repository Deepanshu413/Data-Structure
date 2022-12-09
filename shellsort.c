#include <stdio.h>
int shell_sort(int arr[100],int);
int shell_Sort(int arr[], int n)
{
    int gap, i;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for ( i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
int main()
{
    int arr[100],n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    shell_Sort(arr,n);
}