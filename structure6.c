#include<stdio.h>
struct time
{
    int hour,minute,second;
}t1,t2,t3;
int main()
{
    printf("Enter the first time in hour minute and second");
    scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
    printf("Enter the second time in hour minute and second");
    scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);
    t3.hour=t1.hour	+t2.hour;+(t1.minute+t2.minute+(t1.second+t2.second)/60)/60;
    t3.minute=(t1.minute+t2.minute+(t1.second+t2.second)/60)%60;
    t3.second=(t1.second+t2.second)%60;
    printf("time is %d:%d:%d ",t3.hour,t3.minute,t3.second);
    return 0;
}