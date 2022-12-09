#include <stdio.h>
int main()
{
    int a[25][25],b[25][25],c[25][25],i,j,k,p,q;
    int m,n;
    printf("Enter the first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the second matrix\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    printf("\n The matrix cannot multiplied");
    else
    {
        printf("\n Enter the elements of first matrix ");
        for(i= 0;i<m;i++)
        {
            for(j=0;j<n;j++)
            scanf("\t%d",&a[i][j]);
        }
        printf("\n Enetr the elements of second matrix ");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            scanf("\t%d",&b[i][j]);
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\n Multiplication of two matrix is");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        printf("\t%d",c[i][j]);
    }
    return 0;
}