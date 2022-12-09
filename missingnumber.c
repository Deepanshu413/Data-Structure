#include<stdio.h>
int main()
{
    int a[10],i,j,k=1,n;
    printf("Enter the number of element in array");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        printf("Enter the elemnts of array");
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<n-1;j++)
    {
        if(k!=a[j])
        {
            k++;
            continue;
        }
        else
        {
            printf("missing number is %d",k);
            k++;
            continue;

        }
    }
    return 0;
}