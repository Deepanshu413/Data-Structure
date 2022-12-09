#include<stdio.h>
long long int DAT[101];
long long int fib(int n)
{
    if(n==1||n==2)
        return DAT[n]=n-1;
    else
    {
        if (DAT[n]==0)
        {
            DAT[n]=(fib(n-1)+fib(n-2));
        }
    }
    return DAT[n];
}
int main()
{
    int i;
    for(int i=0;i<=100;i++)
        printf("%d %lld\n",i,fib(i));
    return 0;
}