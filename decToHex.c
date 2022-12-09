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
    printf("enter the value to convert decimal to bhexagonal: ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("0000");
    }
    while(num>0)
    {
        push(num%16);
        num=num/16;
    }
    while(top!=-1)
    {
        
        if(stack[top]==10)
            printf("A");
        else if(stack[top]==11)
            printf("B");
        else if(stack[top]==12)
            printf("C");
        else if(stack[top]==13)
            printf("D");
        else if(stack[top]==14)
            printf("E");
        else if(stack[top]==15)
            printf("F");
        else
            printf("%d",stack[top]);
        pop();
    }
    return 0;
}