#include <stdio.h>
int printArray(int * arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int findLargestNum(int * arr, int n)
{
    int i;
    int largestNum = -1;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > largestNum)
        largestNum = arr[i];
    }
    return largestNum;
}
int radixSort(int * arr, int n)
{
    int i;
    int semiSorted[n];
    int significantDigit = 1;
    int largestNum = findLargestNum(arr, n);
    while (largestNum / significantDigit > 0)
    {
        int bucket[10] = { 0 };
        for (i = 0; i < n; i++)
        bucket[(arr[i] / significantDigit) % 10]++;
        for (i = 1; i < 10; i++)
        bucket[i] += bucket[i - 1];
        for (i = n - 1; i >= 0; i--)
        semiSorted[--bucket[(arr[i] / significantDigit) % 10]] = arr[i];
        for (i = 0; i < n; i++)
        arr[i] = semiSorted[i];
        significantDigit *= 10;
        
    }
}
int main()
{
    int arr[100],n,max=0,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    radixSort(&arr[0], n);
    printf("\nSorted List:");
    printArray(&arr[0], n);
    printf("\n");
    return 0;
}