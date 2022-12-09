#include <stdio.h>
int main()
{
    printf("Ansh Maurya\n");
    printf("210032010029\n");
    printf("CSE-A\n");
    int a[50], b[50], c[50], fl = 0;
    int i, j, n, m, k;
    printf("Enter the number of elements in first set:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number of elements in second set:\n");
    scanf("%d", &m);
    printf("\nEnter the elements:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    k = 0;
    for (i = 0; i < n; i++)
    {
        fl = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                fl = 0;
                break;
            }
            else
            {
            fl = 1;
            }
        }
        if (fl == 1)
        {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < m; i++)
    {
        fl = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                fl = 0;
                break;
            }
            else
            fl = 1;
        }
        if (fl == 1)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("\nSymmetric Difference: ");
    for (i = 0; i < k; i++)
    {
        if (c[i] != c[i + 1])
        {
            printf("%d ", c[i]);
        }
    }
    return 0;
}