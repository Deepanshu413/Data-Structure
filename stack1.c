#include<stdio.h>
int push(int val[100],int n, int stack[100],int top)
{
    if(top >= n-1)
        printf("Stack Overflow");
    else 
    {
        top++;
        stack[top] = val;
        return top;
    }
    if(top>= 0)
    {
        printf("Stack element are: \n");
        for(int i = top; i>= 0; i--)
            printf("%d ",stack[i]);
    }
    else
        printf("\n Stack is empty");
    return 0;
}
int main()
{
    int val[100],n,top=-1;
    int stack[100];
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&stack[i]);
    printf("Enter the vlaue");
        scanf("%d",&val[i]);
    push(val,n,stack,top);
    return 0;
}