#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("Enter the element of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Entered element is: ");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\n");
    return 0;
}