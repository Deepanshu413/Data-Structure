#include<stdio.h>
int main()
{
    int a[10][10],n,m;
    printf("Enter rows and column for matrix ");
    scanf("%d%d",&n,&m);
    printf("enter the elemnts of matrix ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;

}