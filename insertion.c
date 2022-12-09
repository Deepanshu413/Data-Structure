#include<stdio.h>
int main(){
   int arr[40],pos,i,n,value;
   printf("enter no of elements in array of students:");
   scanf("%d",&n);
   printf("enter %d elements are:\n",n);
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);}
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that poition:");
   scanf("%d",&value);
   for(i=n-1;i>=pos-1;i--){
      arr[i+1]=arr[i];} 
   arr[pos-1]= value;
   printf("final array after inserting the value is\n");
   for(i=0;i<=n;i++)
      printf("%d\n",arr[i]);
   return 0;
}