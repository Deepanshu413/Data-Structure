#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],n,p,q,m;
    printf("Enter rows and column for matrix 1");
    scanf("%d%d",&n,&m);
    printf("Enter rows and column for matrix 2");
    scanf("%d%d",&p,&q);
    if(n==p&&m==q)
    {
        printf("enter the elemnts of matrix 1");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        printf("enter the elemnts of matrix 2");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("%d ",a[i][j]-b[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("addition not possible");
    return 0;
}