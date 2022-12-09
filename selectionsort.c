#include <stdio.h>
int main()
{
    int arr[100], n, c, d, position, t;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    for (c = 0; c < (n - 1); c++)
    {
        position = c;
        for (d = c + 1; d < n; d++)
        {
        if (arr[position] > arr[d])
            position = d;
        }
        if (position != c)
        {
        t = arr[c];
        arr[c] = arr[position];
        arr[position] = t;
        }
    }
    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++)
        printf("%d ", arr[c]);
    return 0;
}