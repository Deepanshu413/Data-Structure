#include<stdio.h>
#include<string.h>
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
    char  num[100];
    printf("enter the string to reversed: ");
    scanf("%s",&num);
    int len = strlen(num);
    for(int i=0;i<len;i++)
    {
        push(num[i]);
    }
    printf("The reversed string is: ");
    for(int i=0;i<len;i++)
    {
        printf("%c",stack[top]);
        pop();
    }
    return 0;
}