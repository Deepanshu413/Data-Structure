#include<stdio.h>
int revNumFunction(int);
int sum=0,rem;
int main()
{
   int num,revNum;
   printf("enter number:\n");
   scanf("%d",&num);
   revNum=revNumFunction(num);
   printf("the number after reverse :%d",revNum);
   return 0;
}
int revNumFunction(int num)
{
   
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      revNumFunction(num/10);
   }
   else
      return sum;
}