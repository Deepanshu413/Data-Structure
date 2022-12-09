#include<stdio.h>
int main()
{
    int a [100],i,n,j;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("Enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;    
}