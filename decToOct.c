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
    printf("enter the value to convert decimal to octal: ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("0000");
    }
    while(num>0)
    {
        push(num%8);
        num=num/8;
    }
    while(top!=-1)
    {
        printf("%d",stack[top]);
        pop();
    }
    return 0;
}