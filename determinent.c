#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	 float a[10][10], x[10], ratio, det=1;
	 int i,j,k,n;
	 printf("Enter Order of Matrix: ");
	 scanf("%d", &n);
	 printf("\nEnter Coefficients of Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   scanf("%f", &a[i][j]);
		  }
	 }
	 for(i=0;i< n;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j< n;j++)
		  {
			   ratio = a[j][i]/a[i][i];

			   for(k=0;k< n;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }
	 for(i=0;i< n;i++)
     {
         det = det * a[i][i];
     }
     printf("\n\nDeterminant of given matrix is: %0.3f", det);
	 return 0;
}