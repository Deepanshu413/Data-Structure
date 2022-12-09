#include<stdio.h>
int stack[100];
int top=-1;
int push(int x)
{
    stack[++top]=x;
}
int pop()
{
    top--;
}
int main()
{
    int  num;
    printf("enter the value to convert decimal to binary: ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("0000");
    }
    while(num>0)
    {
        push(num%2);
        num=num/2;
    }
    while(top!=-1)
    {
        printf("%d",stack[top]);
        pop();
    }
    return 0;
}