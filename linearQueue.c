#include<stdio.h>
#define TRUE 1;
#define FALSE 0;
typedef long long int ll;
struct Q
{
    int a[10];
    int f;
    int r;
}var1;
void initialize()
{
    var1.f = -1;
    var1.r = -1;
}
int isEmpty()
{
    if ( var1.f == -1 && var1.r == -1 )
        return TRUE;
    return FALSE;
}
void enQ(int x)
{
    if(var1.f == -1 && var1.r == -1)
    {
        var1.f = 0;
        var1.r = 0;
        var1.a[var1.r] = x;
    }
    else if(var1.r == 9)  
        printf("Overflow");
    else
    {
         var1.r++;
         var1.a[var1.r] = x;
    }
}
void deQ()
{
    if(isEmpty())
    {
        printf("Underflow\n");
        return;
    }
    int x = var1.a[var1.f];
    var1.f++;
    printf("Deleted item is: %d\n",x);
}
int main()
{
    initialize();
    enQ(10);
    enQ(20);
    enQ(40);
    enQ(70);
    enQ(30);
    deQ();
    deQ();
    for(int i=var1.f;i<=var1.r; i++)
    {
        printf("%d\n",var1.a[i]);
    }
    return 0;
}