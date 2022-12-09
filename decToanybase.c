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
    int  num,base;
    printf("enter the value to convert: ");
    scanf("%d",&num);
    printf("Enter the base to convert: ");
    scanf("%d",&base);
    if(num==0)
    {
        printf("0000");
    }
    while(num>0)
    {
        push(num%base);
        num=num/base;
    }
    while(top!=-1)
    {
        printf("%d",stack[top]);
        pop();
    }
    return 0;
}