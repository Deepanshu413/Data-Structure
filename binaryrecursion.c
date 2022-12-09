#include <stdio.h>
void BinarySearch(int arr[],int num,int first,int last)
{
   int mid;
   if(first > last)
   {
        printf("Cannot Find The Number");
   }
   else
   {
        mid = (first + last)/2;
        if(arr[mid]==num)
        {
            printf("Element Is At The Index: %d ",mid);
        }
        else if(arr[mid] > num)
        {
            BinarySearch(arr, num, first, mid-1);
        }
        else
        {
            BinarySearch(arr, num, mid+1, last);
        }   
    }  
}
void main()
{
   int arr[50],beg,mid,end,i,n,num;
   printf("Enter The Size Of The Given Array: ");
   scanf("%d",&n);
   printf("Enter The Values In Sorted Sequence \n");
   for(i=0;i<n;i++)
   {   
       scanf("%d",&arr[i]);
   }   
   beg=0;
   end=n-1;
   printf("Enter The Value To Search Using Binary Search: ");
   scanf("%d",&num);
   BinarySearch(arr,num,beg,end);
}